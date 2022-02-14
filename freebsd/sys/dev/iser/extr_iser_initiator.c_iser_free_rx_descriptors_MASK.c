
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_rx_desc {int dma_addr; } ;
struct iser_device {int ib_device; } ;
struct ib_conn {struct iser_device* device; } ;
struct iser_conn {int qp_max_recv_dtos; struct iser_rx_desc* rx_descs; struct ib_conn ib_conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iser_rx_desc*,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct ib_conn*) ;

void
FUNC_3(struct iser_conn *VAR_3)
{
 int VAR_4;
 struct iser_rx_desc *VAR_5;
 struct ib_conn *VAR_6 = &VAR_3->ib_conn;
 struct iser_device *VAR_7 = VAR_6->device;

 FUNC_2(VAR_6);

 VAR_5 = VAR_3->rx_descs;
 for (VAR_4 = 0; VAR_4 < VAR_3->qp_max_recv_dtos; VAR_4++, VAR_5++)
  FUNC_1(VAR_7->ib_device, VAR_5->dma_addr,
        VAR_1, VAR_0);

 FUNC_0(VAR_3->rx_descs, VAR_2);


 VAR_3->rx_descs = ((void*)0);
}
