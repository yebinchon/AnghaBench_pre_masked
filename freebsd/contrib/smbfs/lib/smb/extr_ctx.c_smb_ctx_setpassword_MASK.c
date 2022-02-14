
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char const* ioc_password; } ;
struct TYPE_3__ {char const* ioc_password; } ;
struct smb_ctx {TYPE_2__ ct_ssn; TYPE_1__ ct_sh; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;

int
FUNC_5(struct smb_ctx *VAR_3, const char *VAR_4)
{
 if (VAR_4 == ((void*)0))
  return VAR_0;
 if (FUNC_3(VAR_4) > VAR_2) {
  FUNC_0("password too long", 0);
  return VAR_1;
 }
 if (FUNC_4(VAR_4, "$$1", 3) == 0)
  FUNC_1(VAR_3->ct_ssn.ioc_password, VAR_4);
 else
  FUNC_2(VAR_3->ct_ssn.ioc_password, VAR_4);
 FUNC_2(VAR_3->ct_sh.ioc_password, VAR_3->ct_ssn.ioc_password);
 return 0;
}
