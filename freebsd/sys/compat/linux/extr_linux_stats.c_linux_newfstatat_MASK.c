
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct stat {int dummy; } ;
struct linux_newfstatat_args {int flag; int dfd; int statbuf; int pathname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int ,char**,int) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct thread*,int,int,char*,int ,struct stat*) ;
 int FUNC_3 (struct stat*,int ) ;

int
FUNC_4(struct thread *VAR_6, struct linux_newfstatat_args *VAR_7)
{
 char *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 struct stat VAR_12;

 if (VAR_7->flag & ~VAR_4)
  return (VAR_2);
 VAR_11 = (VAR_7->flag & VAR_4) ?
     VAR_1 : 0;

 VAR_10 = (VAR_7->dfd == VAR_3) ? VAR_0 : VAR_7->dfd;
 FUNC_0(VAR_6, VAR_7->pathname, &VAR_8, VAR_10);

 VAR_9 = FUNC_2(VAR_6, VAR_11, VAR_10, VAR_8, VAR_5, &VAR_12);
 if (VAR_9 == 0)
  VAR_9 = FUNC_3(&VAR_12, VAR_7->statbuf);
 FUNC_1(VAR_8);

 return (VAR_9);
}
