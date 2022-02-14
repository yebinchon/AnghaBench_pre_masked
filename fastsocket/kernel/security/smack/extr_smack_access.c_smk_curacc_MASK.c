
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct smk_audit_info {int dummy; } ;
struct TYPE_4__ {TYPE_1__* cred; } ;
struct TYPE_3__ {int * security; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* VAR_1 ;
 char* FUNC_1 () ;
 int FUNC_2 (char*,char*,int ,int,struct smk_audit_info*) ;
 int * VAR_2 ;
 int FUNC_3 (char*,char*,int ,int *) ;

int FUNC_4(char *VAR_3, u32 VAR_4, struct smk_audit_info *VAR_5)
{
 int VAR_6;
 char *VAR_7 = FUNC_1();

 VAR_6 = FUNC_3(VAR_7, VAR_3, VAR_4, ((void*)0));
 if (VAR_6 == 0)
  goto out_audit;






 if (VAR_2 != ((void*)0) && VAR_2 != VAR_1->cred->security)
  goto out_audit;

 if (FUNC_0(VAR_0))
  return 0;

out_audit:




 return VAR_6;
}
