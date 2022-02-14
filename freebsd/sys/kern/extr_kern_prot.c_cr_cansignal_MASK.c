
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ucred {scalar_t__ cr_ruid; scalar_t__ cr_uid; } ;
struct proc {int p_flag; TYPE_1__* p_ucred; } ;
struct TYPE_4__ {scalar_t__ cr_ruid; scalar_t__ cr_svuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ucred*,TYPE_1__*) ;
 int FUNC_2 (struct ucred*,TYPE_1__*) ;
 int FUNC_3 (struct ucred*,struct proc*,int) ;
 int FUNC_4 (struct ucred*,TYPE_1__*) ;
 int FUNC_5 (struct ucred*,int ) ;

int
FUNC_6(struct ucred *VAR_5, struct proc *VAR_6, int VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_6, VAR_0);




 VAR_8 = FUNC_4(VAR_5, VAR_6->p_ucred);
 if (VAR_8)
  return (VAR_8);




 if ((VAR_8 = FUNC_2(VAR_5, VAR_6->p_ucred)))
  return (VAR_8);
 if ((VAR_8 = FUNC_1(VAR_5, VAR_6->p_ucred)))
  return (VAR_8);






 if (VAR_4 && (VAR_6->p_flag & VAR_3)) {
  switch (VAR_7) {
  case 0:
  case 135:
  case 136:
  case 133:
  case 138:
  case 134:
  case 131:
  case 130:
  case 132:
  case 137:
  case 129:
  case 128:




   break;
  default:

   VAR_8 = FUNC_5(VAR_5, VAR_2);
   if (VAR_8)
    return (VAR_8);
  }
 }





 if (VAR_5->cr_ruid != VAR_6->p_ucred->cr_ruid &&
     VAR_5->cr_ruid != VAR_6->p_ucred->cr_svuid &&
     VAR_5->cr_uid != VAR_6->p_ucred->cr_ruid &&
     VAR_5->cr_uid != VAR_6->p_ucred->cr_svuid) {
  VAR_8 = FUNC_5(VAR_5, VAR_1);
  if (VAR_8)
   return (VAR_8);
 }

 return (0);
}
