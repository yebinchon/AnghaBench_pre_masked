
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_faccessat_args {int amode; int dfd; int filename; } ;


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
 int FUNC_2 (struct thread*,int,char*,int ,int ,int) ;

int
FUNC_3(struct thread *VAR_8, struct linux_faccessat_args *VAR_9)
{
 char *VAR_10;
 int VAR_11, VAR_12;


 if (VAR_9->amode & ~(VAR_2 | VAR_7 | VAR_6 | VAR_4))
  return (VAR_1);

 VAR_12 = (VAR_9->dfd == VAR_3) ? VAR_0 : VAR_9->dfd;
 FUNC_0(VAR_8, VAR_9->filename, &VAR_10, VAR_12);

 VAR_11 = FUNC_2(VAR_8, VAR_12, VAR_10, VAR_5, 0, VAR_9->amode);
 FUNC_1(VAR_10);

 return (VAR_11);
}
