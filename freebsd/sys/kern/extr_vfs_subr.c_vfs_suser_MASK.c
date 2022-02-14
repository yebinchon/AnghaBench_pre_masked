
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct thread {TYPE_2__* td_ucred; } ;
struct mount {TYPE_3__* mnt_cred; TYPE_1__* mnt_vfc; } ;
struct TYPE_8__ {scalar_t__ cr_uid; } ;
struct TYPE_7__ {scalar_t__ cr_uid; } ;
struct TYPE_6__ {int vfc_flags; int vfc_prison_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (struct thread*,int ) ;

int
FUNC_4(struct mount *VAR_3, struct thread *VAR_4)
{
 int VAR_5;

 if (FUNC_0(VAR_4->td_ucred)) {




  if (!FUNC_1(VAR_4->td_ucred, VAR_3->mnt_vfc->vfc_prison_flag))
   return (VAR_0);





  if (FUNC_2(VAR_4->td_ucred, VAR_3->mnt_cred) != 0)
   return (VAR_0);
 }
 if (!(VAR_3->mnt_vfc->vfc_flags & VAR_2) &&
     VAR_3->mnt_cred->cr_uid != VAR_4->td_ucred->cr_uid) {
  if ((VAR_5 = FUNC_3(VAR_4, VAR_1)) != 0)
   return (VAR_5);
 }
 return (0);
}
