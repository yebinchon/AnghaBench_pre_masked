
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_linkat_args {int flag; int olddfd; int newdfd; int newname; int oldname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int ,char**,int) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct thread*,int,int,char*,char*,int ,int) ;
 int FUNC_3 (struct thread*,int ,int ,char**,int,int) ;

int
FUNC_4(struct thread *VAR_8, struct linux_linkat_args *VAR_9)
{
 char *VAR_10, *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 if (VAR_9->flag & ~VAR_4)
  return (VAR_1);

 VAR_13 = (VAR_9->olddfd == VAR_3) ? VAR_0 : VAR_9->olddfd;
 VAR_14 = (VAR_9->newdfd == VAR_3) ? VAR_0 : VAR_9->newdfd;
 FUNC_0(VAR_8, VAR_9->oldname, &VAR_10, VAR_13);

 VAR_12 = FUNC_3(VAR_8, VAR_9->newname, VAR_7, &VAR_11, 1, VAR_14);
 if (VAR_11 == ((void*)0)) {
  FUNC_1(VAR_10);
  return (VAR_12);
 }

 VAR_15 = (VAR_9->flag & VAR_4) == 0 ? VAR_5 :
     VAR_2;
 VAR_12 = FUNC_2(VAR_8, VAR_13, VAR_14, VAR_10, VAR_11, VAR_6, VAR_15);
 FUNC_1(VAR_10);
 FUNC_1(VAR_11);
 return (VAR_12);
}
