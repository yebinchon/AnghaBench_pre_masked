
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct mac {int dummy; } ;
struct image_args {scalar_t__ endp; int envc; scalar_t__ begin_argv; int argc; } ;


 int FUNC_0 (scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (struct thread*,struct image_args*,struct mac*) ;
 scalar_t__ FUNC_3 (struct image_args*) ;

int
FUNC_4(struct thread *VAR_0, struct image_args *VAR_1, struct mac *VAR_2)
{

 FUNC_0(VAR_1->begin_argv, VAR_1->argc,
     FUNC_3(VAR_1) - VAR_1->begin_argv);
 FUNC_1(FUNC_3(VAR_1), VAR_1->envc,
     VAR_1->endp - FUNC_3(VAR_1));
 return (FUNC_2(VAR_0, VAR_1, VAR_2));
}
