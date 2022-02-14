
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmspace {int dummy; } ;
struct thread {int dummy; } ;
struct image_args {int dummy; } ;
struct __mac_execve_args {int mac_p; int envv; int argv; int fname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct image_args*,int ,int ,int ,int ) ;
 int FUNC_1 (struct thread*,struct image_args*,int ) ;
 int FUNC_2 (struct thread*,int,struct vmspace*) ;
 int FUNC_3 (struct thread*,struct vmspace**) ;

int
FUNC_4(struct thread *VAR_2, struct __mac_execve_args *VAR_3)
{
 return (VAR_0);

}
