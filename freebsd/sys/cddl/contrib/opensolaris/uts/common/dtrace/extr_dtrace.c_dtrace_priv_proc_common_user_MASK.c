
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* dcr_cred; } ;
struct TYPE_7__ {TYPE_1__ dts_cred; } ;
typedef TYPE_2__ dtrace_state_t ;
struct TYPE_8__ {scalar_t__ cr_uid; scalar_t__ cr_ruid; scalar_t__ cr_suid; scalar_t__ cr_gid; scalar_t__ cr_rgid; scalar_t__ cr_sgid; } ;
typedef TYPE_3__ cred_t ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(dtrace_state_t *VAR_0)
{
 cred_t *VAR_1, *VAR_2 = VAR_0->dts_cred.dcr_cred;





 FUNC_0(VAR_2 != ((void*)0));

 if ((VAR_1 = FUNC_1()) != ((void*)0) &&
     VAR_2->cr_uid == VAR_1->cr_uid &&
     VAR_2->cr_uid == VAR_1->cr_ruid &&
     VAR_2->cr_uid == VAR_1->cr_suid &&
     VAR_2->cr_gid == VAR_1->cr_gid &&
     VAR_2->cr_gid == VAR_1->cr_rgid &&
     VAR_2->cr_gid == VAR_1->cr_sgid)
  return (1);

 return (0);
}
