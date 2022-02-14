
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct image_params {TYPE_1__* sysent; struct image_args* args; } ;
struct image_args {size_t begin_argv; } ;
typedef int register_t ;
struct TYPE_2__ {scalar_t__ sv_usrstack; } ;


 int FUNC_0 (size_t,void*,size_t) ;
 size_t FUNC_1 (struct image_args*) ;
 uintptr_t FUNC_2 (scalar_t__,int) ;

register_t *
FUNC_3(struct image_params *VAR_0)
{
 struct image_args *VAR_1;
 uintptr_t VAR_2;
 size_t VAR_3;


 VAR_1 = VAR_0->args;
 VAR_3 = FUNC_1(VAR_1) - VAR_1->begin_argv;
 VAR_2 = FUNC_2(VAR_0->sysent->sv_usrstack - VAR_3, sizeof(register_t));
 FUNC_0(VAR_1->begin_argv, (void *)VAR_2, VAR_3);
 return ((register_t *)VAR_2);
}
