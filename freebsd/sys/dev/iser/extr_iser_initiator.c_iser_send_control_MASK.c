
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iser_tx_desc {int num_sge; struct ib_sge* tx_sg; int type; } ;
struct iser_device {TYPE_2__* mr; int ib_device; } ;
struct TYPE_6__ {struct iser_device* device; } ;
struct iser_conn {TYPE_3__ ib_conn; int handoff_done; int login_req_dma; } ;
struct TYPE_4__ {size_t ip_data_len; } ;
struct icl_iser_pdu {struct iser_tx_desc desc; TYPE_1__ icl_pdu; } ;
struct ib_sge {size_t length; int lkey; int addr; } ;
struct TYPE_5__ {int lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct iser_conn*,int) ;
 int FUNC_1 (int ,int ,size_t,int ) ;
 int FUNC_2 (int ,int ,size_t,int ) ;
 int FUNC_3 (struct iser_conn*,struct iser_tx_desc*) ;
 int FUNC_4 (struct iser_conn*) ;
 int FUNC_5 (TYPE_3__*,struct iser_tx_desc*,int) ;

int
FUNC_6(struct iser_conn *VAR_2,
    struct icl_iser_pdu *VAR_3)
{
 struct iser_tx_desc *VAR_4;
 struct iser_device *VAR_5;
 size_t VAR_6 = VAR_3->icl_pdu.ip_data_len;
 int VAR_7;

 VAR_4 = &VAR_3->desc;


 VAR_4->type = VAR_1;
 FUNC_3(VAR_2, VAR_4);

 VAR_5 = VAR_2->ib_conn.device;

 if (VAR_6 > 0) {
  struct ib_sge *VAR_8 = &VAR_4->tx_sg[1];
  FUNC_1(VAR_5->ib_device,
    VAR_2->login_req_dma, VAR_6,
    VAR_0);

  FUNC_2(VAR_5->ib_device,
   VAR_2->login_req_dma, VAR_6,
   VAR_0);

  VAR_8->addr = VAR_2->login_req_dma;
  VAR_8->length = VAR_6;
  VAR_8->lkey = VAR_5->mr->lkey;
  VAR_4->num_sge = 2;
 }


 if (!VAR_2->handoff_done) {
  VAR_7 = FUNC_4(VAR_2);
  if (VAR_7)
   goto send_control_error;
 }

 VAR_7 = FUNC_5(&VAR_2->ib_conn, VAR_4, 1);
 if (!VAR_7)
  return (0);

send_control_error:
 FUNC_0("conn %p failed err %d", VAR_2, VAR_7);

 return (VAR_7);

}
