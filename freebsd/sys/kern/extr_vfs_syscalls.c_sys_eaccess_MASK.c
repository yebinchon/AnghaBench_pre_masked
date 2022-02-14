
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct eaccess_args {int amode; int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int ,int ,int ,int ,int ) ;

int
FUNC_1(struct thread *VAR_3, struct eaccess_args *VAR_4)
{

 return (FUNC_0(VAR_3, VAR_1, VAR_4->path, VAR_2,
     VAR_0, VAR_4->amode));
}
