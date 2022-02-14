
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_conn {int post_recv_buf_count; int qp; TYPE_2__* device; } ;
struct iser_conn {scalar_t__ login_resp_buf; int login_resp_dma; struct ib_conn ib_conn; } ;
struct ib_sge {int lkey; int length; int addr; } ;
struct ib_recv_wr {uintptr_t wr_id; int num_sge; int * next; struct ib_sge* sg_list; } ;
struct TYPE_4__ {TYPE_1__* mr; } ;
struct TYPE_3__ {int lkey; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct ib_recv_wr*,struct ib_recv_wr**) ;

int
FUNC_2(struct iser_conn *VAR_1)
{
 struct ib_recv_wr VAR_2, *VAR_3;
 struct ib_conn *VAR_4 = &VAR_1->ib_conn;
 struct ib_sge VAR_5;
 int VAR_6;

 VAR_5.addr = VAR_1->login_resp_dma;
 VAR_5.length = VAR_0;
 VAR_5.lkey = VAR_4->device->mr->lkey;

 VAR_2.wr_id = (uintptr_t)VAR_1->login_resp_buf;
 VAR_2.sg_list = &VAR_5;
 VAR_2.num_sge = 1;
 VAR_2.next = ((void*)0);

 VAR_4->post_recv_buf_count++;
 VAR_6 = FUNC_1(VAR_4->qp, &VAR_2, &VAR_3);
 if (VAR_6) {
  FUNC_0("ib_post_recv failed ret=%d", VAR_6);
  VAR_4->post_recv_buf_count--;
 }

 return (VAR_6);
}
