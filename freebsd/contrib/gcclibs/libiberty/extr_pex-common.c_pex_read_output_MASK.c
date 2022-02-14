
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pex_obj {int next_input; int * read_output; TYPE_1__* funcs; int * next_input_name; scalar_t__ next_input_name_allocated; } ;
struct TYPE_2__ {int * (* fdopenr ) (struct pex_obj*,int,int) ;} ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pex_obj*,int ,char const**,int*) ;
 int * FUNC_3 (struct pex_obj*,int,int) ;

FILE *
FUNC_4 (struct pex_obj *VAR_2, int VAR_3)
{
  if (VAR_2->next_input_name != ((void*)0))
    {
      const char *VAR_4;
      int VAR_5;



      if (!FUNC_2 (VAR_2, 0, &VAR_4, &VAR_5))
 {
   VAR_1 = VAR_5;
   return ((void*)0);
 }

      VAR_2->read_output = FUNC_0 (VAR_2->next_input_name, VAR_3 ? "rb" : "r");

      if (VAR_2->next_input_name_allocated)
 {
   FUNC_1 (VAR_2->next_input_name);
   VAR_2->next_input_name_allocated = 0;
 }
      VAR_2->next_input_name = ((void*)0);
    }
  else
    {
      int VAR_6;

      VAR_6 = VAR_2->next_input;
      if (VAR_6 < 0 || VAR_6 == VAR_0)
 return ((void*)0);
      VAR_2->read_output = VAR_2->funcs->fdopenr (VAR_2, VAR_6, VAR_3);
      VAR_2->next_input = -1;
    }

  return VAR_2->read_output;
}
