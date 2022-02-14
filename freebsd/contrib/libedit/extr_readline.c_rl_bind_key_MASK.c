
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rl_command_func_t ;
struct TYPE_3__ {int * key; } ;
struct TYPE_4__ {TYPE_1__ el_map; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 () ;
 int * VAR_3 ;

int
FUNC_1(int VAR_4, rl_command_func_t *VAR_5)
{
 int VAR_6 = -1;

 if (VAR_2 == ((void*)0) || VAR_1 == ((void*)0))
  FUNC_0();

 if (VAR_5 == VAR_3) {

  VAR_1->el_map.key[VAR_4] = VAR_0;
  VAR_6 = 0;
 }
 return VAR_6;
}
