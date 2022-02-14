
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_openat_args {int dfd; int flags; int mode; int filename; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,char**,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct thread*,int,char*,int,int ) ;

int
FUNC_2(struct thread *VAR_3, struct linux_openat_args *VAR_4)
{
 char *VAR_5;
 int VAR_6;

 VAR_6 = (VAR_4->dfd == VAR_1) ? VAR_0 : VAR_4->dfd;
 if (VAR_4->flags & VAR_2)
  FUNC_0(VAR_3, VAR_4->filename, &VAR_5, 1, VAR_6);
 else
  FUNC_0(VAR_3, VAR_4->filename, &VAR_5, 0, VAR_6);

 return (FUNC_1(VAR_3, VAR_6, VAR_5, VAR_4->flags, VAR_4->mode));
}
