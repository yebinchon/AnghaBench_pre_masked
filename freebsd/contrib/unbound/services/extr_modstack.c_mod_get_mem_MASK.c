
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct module_env {TYPE_1__* mesh; } ;
struct TYPE_6__ {TYPE_2__** mod; } ;
struct TYPE_5__ {size_t (* get_mem ) (struct module_env*,int) ;} ;
struct TYPE_4__ {TYPE_3__ mods; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (size_t (*) (struct module_env*,int)) ;
 int FUNC_2 (TYPE_3__*,char const*) ;
 size_t FUNC_3 (struct module_env*,int) ;

size_t
FUNC_4(struct module_env* VAR_0, const char* VAR_1)
{
 int VAR_2 = FUNC_2(&VAR_0->mesh->mods, VAR_1);
 if(VAR_2 != -1) {
  FUNC_0(FUNC_1(VAR_0->mesh->
   mods.mod[VAR_2]->get_mem));
  return (*VAR_0->mesh->mods.mod[VAR_2]->get_mem)(VAR_0, VAR_2);
 }
 return 0;
}
