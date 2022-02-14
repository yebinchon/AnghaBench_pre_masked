
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {scalar_t__ cr_uid; } ;
struct thread {struct ucred* td_ucred; } ;
struct ipc_perm {scalar_t__ cuid; scalar_t__ uid; int mode; int cgid; int gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,struct ucred*) ;
 int FUNC_1 (struct thread*,int ) ;

int
FUNC_2(struct thread *VAR_7, struct ipc_perm *VAR_8, int VAR_9)
{
 struct ucred *VAR_10 = VAR_7->td_ucred;
 int VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_13 = 0;
 if (VAR_10->cr_uid == VAR_8->cuid || VAR_10->cr_uid == VAR_8->uid) {
  VAR_12 = VAR_8->mode;
  VAR_13 |= VAR_1;
 } else if (FUNC_0(VAR_8->gid, VAR_10) ||
     FUNC_0(VAR_8->cgid, VAR_10)) {
  VAR_12 = VAR_8->mode;
  VAR_12 <<= 3;
 } else {
  VAR_12 = VAR_8->mode;
  VAR_12 <<= 6;
 }
 if (VAR_12 & VAR_2)
  VAR_13 |= VAR_2;
 if (VAR_12 & VAR_3)
  VAR_13 |= VAR_3;




 if ((VAR_13 & VAR_9) == VAR_9)
  return (0);




 VAR_14 = 0;
 if ((VAR_9 & VAR_1) && !(VAR_13 & VAR_1)) {
  VAR_11 = FUNC_1(VAR_7, VAR_4);
  if (VAR_11 == 0)
   VAR_14 |= VAR_1;
 }

 if ((VAR_9 & VAR_2) && !(VAR_13 & VAR_2)) {
  VAR_11 = FUNC_1(VAR_7, VAR_5);
  if (VAR_11 == 0)
   VAR_14 |= VAR_2;
 }

 if ((VAR_9 & VAR_3) && !(VAR_13 & VAR_3)) {
  VAR_11 = FUNC_1(VAR_7, VAR_6);
  if (VAR_11 == 0)
   VAR_14 |= VAR_3;
 }

 if (((VAR_13 | VAR_14) & VAR_9) == VAR_9)
  return (0);
 else
  return (VAR_0);
}
