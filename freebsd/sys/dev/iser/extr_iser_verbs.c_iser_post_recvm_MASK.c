
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_rx_desc {int rx_sg; } ;
struct ib_conn {int post_recv_buf_count; struct ib_recv_wr* rx_wr; int qp; } ;
struct iser_conn {unsigned int rx_desc_head; unsigned int qp_max_recv_dtos; struct iser_rx_desc* rx_descs; struct ib_conn ib_conn; } ;
struct ib_recv_wr {uintptr_t wr_id; int num_sge; struct ib_recv_wr* next; int * sg_list; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,struct ib_recv_wr*,struct ib_recv_wr**) ;

int
FUNC_2(struct iser_conn *VAR_0, int VAR_1)
{
 struct ib_recv_wr *VAR_2, *VAR_3;
 int VAR_4, VAR_5;
 struct ib_conn *VAR_6 = &VAR_0->ib_conn;
 unsigned int VAR_7 = VAR_0->rx_desc_head;
 struct iser_rx_desc *VAR_8;

 for (VAR_2 = VAR_6->rx_wr, VAR_4 = 0; VAR_4 < VAR_1; VAR_4++, VAR_2++) {
  VAR_8 = &VAR_0->rx_descs[VAR_7];
  VAR_2->wr_id = (uintptr_t)VAR_8;
  VAR_2->sg_list = &VAR_8->rx_sg;
  VAR_2->num_sge = 1;
  VAR_2->next = VAR_2 + 1;
  VAR_7 = (VAR_7 + 1) % VAR_0->qp_max_recv_dtos;
 }

 VAR_2--;
 VAR_2->next = ((void*)0);

 VAR_6->post_recv_buf_count += VAR_1;
 VAR_5 = FUNC_1(VAR_6->qp, VAR_6->rx_wr, &VAR_3);
 if (VAR_5) {
  FUNC_0("ib_post_recv failed ret=%d", VAR_5);
  VAR_6->post_recv_buf_count -= VAR_1;
 } else
  VAR_0->rx_desc_head = VAR_7;

 return (VAR_5);
}
