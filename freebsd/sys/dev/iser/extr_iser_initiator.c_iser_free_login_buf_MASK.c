
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_device {int ib_device; } ;
struct TYPE_2__ {struct iser_device* device; } ;
struct iser_conn {int * login_buf; int login_resp_dma; int login_req_dma; TYPE_1__ ib_conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

void
FUNC_2(struct iser_conn *VAR_5)
{
 struct iser_device *VAR_6 = VAR_5->ib_conn.device;

 if (!VAR_5->login_buf)
  return;

 if (VAR_5->login_req_dma)
  FUNC_1(VAR_6->ib_device,
        VAR_5->login_req_dma,
        VAR_2, VAR_1);

 if (VAR_5->login_resp_dma)
  FUNC_1(VAR_6->ib_device,
        VAR_5->login_resp_dma,
        VAR_3, VAR_0);

 FUNC_0(VAR_5->login_buf, VAR_4);


 VAR_5->login_req_dma = 0;
 VAR_5->login_resp_dma = 0;
 VAR_5->login_buf = ((void*)0);
}
