
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ioc_local; scalar_t__ ioc_server; } ;
struct smb_ctx {scalar_t__ ct_nb; scalar_t__ ct_srvaddr; TYPE_1__ ct_ssn; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3(struct smb_ctx *VAR_0)
{
 if (VAR_0->ct_ssn.ioc_server)
  FUNC_2(VAR_0->ct_ssn.ioc_server);
 if (VAR_0->ct_ssn.ioc_local)
  FUNC_2(VAR_0->ct_ssn.ioc_local);
 if (VAR_0->ct_srvaddr)
  FUNC_0(VAR_0->ct_srvaddr);
 if (VAR_0->ct_nb)
  FUNC_1(VAR_0->ct_nb);
}
