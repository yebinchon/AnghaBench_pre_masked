
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_renameat2_args {int flags; int olddfd; int newdfd; int newname; int oldname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thread*,int ,char**,int) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct thread*,int,char*,int,char*,int ) ;
 int FUNC_3 (struct thread*,int ,int ,char**,int,int) ;
 int FUNC_4 (struct thread*,char*,int) ;

int
FUNC_5(struct thread *VAR_8, struct linux_renameat2_args *VAR_9)
{
 char *VAR_10, *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 if (VAR_9->flags != 0) {
  if (VAR_9->flags & ~(VAR_3 |
      VAR_4 | VAR_5))
   return (VAR_1);
  if (VAR_9->flags & VAR_3 &&
      VAR_9->flags & (VAR_4 |
      VAR_5))
   return (VAR_1);
  FUNC_4(VAR_8, "renameat2 unsupported flags 0x%x",
      VAR_9->flags);
  return (VAR_1);
 }

 VAR_13 = (VAR_9->olddfd == VAR_2) ? VAR_0 : VAR_9->olddfd;
 VAR_14 = (VAR_9->newdfd == VAR_2) ? VAR_0 : VAR_9->newdfd;
 FUNC_0(VAR_8, VAR_9->oldname, &VAR_10, VAR_13);

 VAR_12 = FUNC_3(VAR_8, VAR_9->newname, VAR_7, &VAR_11, 1, VAR_14);
 if (VAR_11 == ((void*)0)) {
  FUNC_1(VAR_10);
  return (VAR_12);
 }

 VAR_12 = FUNC_2(VAR_8, VAR_13, VAR_10, VAR_14, VAR_11, VAR_6);
 FUNC_1(VAR_10);
 FUNC_1(VAR_11);
 return (VAR_12);
}
