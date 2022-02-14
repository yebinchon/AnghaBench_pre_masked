
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mount {TYPE_1__* mnt_cred; } ;
struct TYPE_5__ {scalar_t__ cr_uid; scalar_t__ cr_prison; } ;
typedef TYPE_2__ cred_t ;
struct TYPE_4__ {scalar_t__ cr_uid; scalar_t__ cr_prison; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(struct mount *VAR_2, cred_t *VAR_3)
{

 if (VAR_1) {
  if (VAR_3->cr_uid == VAR_2->mnt_cred->cr_uid &&
      VAR_3->cr_prison == VAR_2->mnt_cred->cr_prison) {
   return (0);
  }
 }
 return (VAR_0);
}
