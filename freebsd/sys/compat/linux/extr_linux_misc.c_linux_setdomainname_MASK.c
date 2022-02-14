
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_setdomainname_args {int len; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thread*,int*,int,int ,int ,int ,int ,int ,int ,int ) ;

int
FUNC_1(struct thread *VAR_2, struct linux_setdomainname_args *VAR_3)
{
 int VAR_4[2];

 VAR_4[0] = VAR_0;
 VAR_4[1] = VAR_1;
 return (FUNC_0(VAR_2, VAR_4, 2, 0, 0, 0, VAR_3->name,
     VAR_3->len, 0, 0));
}
