
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct access_args {int amode; int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thread*,int ,int ,int ,int ,int ) ;

int
FUNC_1(struct thread *VAR_2, struct access_args *VAR_3)
{

 return (FUNC_0(VAR_2, VAR_0, VAR_3->path, VAR_1,
     0, VAR_3->amode));
}
