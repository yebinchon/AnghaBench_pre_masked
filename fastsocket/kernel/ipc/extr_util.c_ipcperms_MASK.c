
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct kern_ipc_perm {int mode; scalar_t__ cuid; scalar_t__ uid; int gid; int cgid; } ;


 int VAR_0 ;
 int FUNC_0 (struct kern_ipc_perm*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct kern_ipc_perm*,short) ;

int FUNC_5 (struct kern_ipc_perm *VAR_1, short VAR_2)
{
 uid_t VAR_3 = FUNC_2();
 int VAR_4, VAR_5;

 FUNC_0(VAR_1);
 VAR_4 = (VAR_2 >> 6) | (VAR_2 >> 3) | VAR_2;
 VAR_5 = VAR_1->mode;
 if (VAR_3 == VAR_1->cuid ||
     VAR_3 == VAR_1->uid)
  VAR_5 >>= 6;
 else if (FUNC_3(VAR_1->cgid) || FUNC_3(VAR_1->gid))
  VAR_5 >>= 3;

 if ((VAR_4 & ~VAR_5 & 0007) &&
     !FUNC_1(VAR_0))
  return -1;

 return FUNC_4(VAR_1, VAR_2);
}
