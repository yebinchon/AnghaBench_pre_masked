
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_fchmodat_args {int dfd; int mode; int filename; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,char**,int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct thread*,int,char*,int ,int ,int ) ;

int
FUNC_3(struct thread *VAR_3, struct linux_fchmodat_args *VAR_4)
{
 char *VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = (VAR_4->dfd == VAR_1) ? VAR_0 : VAR_4->dfd;
 FUNC_0(VAR_3, VAR_4->filename, &VAR_5, VAR_7);

 VAR_6 = FUNC_2(VAR_3, VAR_7, VAR_5, VAR_2, VAR_4->mode, 0);
 FUNC_1(VAR_5);
 return (VAR_6);
}
