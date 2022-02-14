
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct stat {int st_mode; } ;
struct linux_unlinkat_args {int flag; int dfd; int pathname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct thread*,int ,char**,int) ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (struct thread*,int,char*,int ,int ,int ) ;
 int FUNC_4 (struct thread*,int,char*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct thread*,int ,int,char*,int ,struct stat*,int *) ;

int
FUNC_6(struct thread *VAR_9, struct linux_unlinkat_args *VAR_10)
{
 char *VAR_11;
 int VAR_12, VAR_13;
 struct stat VAR_14;

 if (VAR_10->flag & ~VAR_7)
  return (VAR_2);

 VAR_13 = (VAR_10->dfd == VAR_6) ? VAR_0 : VAR_10->dfd;
 FUNC_0(VAR_9, VAR_10->pathname, &VAR_11, VAR_13);

 if (VAR_10->flag & VAR_7)
  VAR_12 = FUNC_3(VAR_9, VAR_13, VAR_11, VAR_5, VAR_8, 0);
 else
  VAR_12 = FUNC_4(VAR_9, VAR_13, VAR_11, VAR_5, VAR_8, 0,
      0);
 if (VAR_12 == VAR_4 && !(VAR_10->flag & VAR_7)) {

  if (FUNC_5(VAR_9, VAR_1, VAR_13, VAR_11,
      VAR_8, &VAR_14, ((void*)0)) == 0 && FUNC_2(VAR_14.st_mode))
   VAR_12 = VAR_3;
 }
 FUNC_1(VAR_11);
 return (VAR_12);
}
