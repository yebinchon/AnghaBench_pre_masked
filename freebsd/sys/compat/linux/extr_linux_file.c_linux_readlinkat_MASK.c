
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_readlinkat_args {int dfd; int bufsiz; int buf; int path; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,char**,int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct thread*,int,char*,int ,int ,int ,int ) ;

int
FUNC_3(struct thread *VAR_4, struct linux_readlinkat_args *VAR_5)
{
 char *VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = (VAR_5->dfd == VAR_1) ? VAR_0 : VAR_5->dfd;
 FUNC_0(VAR_4, VAR_5->path, &VAR_6, VAR_8);

 VAR_7 = FUNC_2(VAR_4, VAR_8, VAR_6, VAR_2, VAR_5->buf,
     VAR_3, VAR_5->bufsiz);
 FUNC_1(VAR_6);
 return (VAR_7);
}
