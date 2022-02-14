
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_device {int ib_device; } ;
struct TYPE_2__ {struct iser_device* device; } ;
struct iser_conn {void* login_resp_dma; void* login_req_dma; scalar_t__ login_resp_buf; scalar_t__ login_req_buf; scalar_t__ login_buf; TYPE_1__ ib_conn; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_2 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (struct iser_conn*) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int) ;

int
FUNC_6(struct iser_conn *VAR_8)
{
 struct iser_device *VAR_9 = VAR_8->ib_conn.device;
 int VAR_10, VAR_11;

 FUNC_0(VAR_9 == ((void*)0));

 VAR_8->login_buf = FUNC_5(VAR_3 + VAR_4,
          VAR_5, VAR_6 | VAR_7);

 if (!VAR_8->login_buf)
  goto out_err;

 VAR_8->login_req_buf = VAR_8->login_buf;
 VAR_8->login_resp_buf = VAR_8->login_buf +
        VAR_3;

 VAR_8->login_req_dma = FUNC_2(VAR_9->ib_device,
           VAR_8->login_req_buf,
           VAR_3,
           VAR_1);

 VAR_8->login_resp_dma = FUNC_2(VAR_9->ib_device,
            VAR_8->login_resp_buf,
            VAR_4,
            VAR_0);

 VAR_10 = FUNC_3(VAR_9->ib_device,
     VAR_8->login_req_dma);
 VAR_11 = FUNC_3(VAR_9->ib_device,
     VAR_8->login_resp_dma);

 if (VAR_10 || VAR_11) {
  if (VAR_10)
   VAR_8->login_req_dma = 0;
  if (VAR_11)
   VAR_8->login_resp_dma = 0;
  goto free_login_buf;
 }

 return (0);

free_login_buf:
 FUNC_4(VAR_8);

out_err:
 FUNC_1("unable to alloc or map login buf");
 return (VAR_2);
}
