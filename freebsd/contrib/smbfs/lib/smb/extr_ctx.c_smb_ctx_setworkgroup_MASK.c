
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ioc_workgroup; } ;
struct smb_ctx {TYPE_1__ ct_ssn; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (char*,int ,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

int
FUNC_3(struct smb_ctx *VAR_2, const char *VAR_3)
{
 if (FUNC_2(VAR_3) > VAR_1) {
  FUNC_1("workgroup name '%s' too long", 0, VAR_3);
  return VAR_0;
 }
 FUNC_0(VAR_2->ct_ssn.ioc_workgroup, VAR_3);
 return 0;
}
