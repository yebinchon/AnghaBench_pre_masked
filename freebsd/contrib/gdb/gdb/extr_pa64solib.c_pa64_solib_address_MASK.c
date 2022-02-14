
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int text_base; int text_size; } ;
struct so_list {char* name; struct so_list* next; TYPE_1__ pa64_solib_desc; } ;
typedef int CORE_ADDR ;


 struct so_list* VAR_0 ;

char *
FUNC_0 (CORE_ADDR VAR_1)
{
  struct so_list *VAR_2 = VAR_0;

  while (VAR_2)
    {


      if (VAR_1 >= VAR_2->pa64_solib_desc.text_base
   && VAR_1 < (VAR_2->pa64_solib_desc.text_base
       | VAR_2->pa64_solib_desc.text_size))
 return VAR_2->name;


      VAR_2 = VAR_2->next;
    }


  return ((void*)0);
}
