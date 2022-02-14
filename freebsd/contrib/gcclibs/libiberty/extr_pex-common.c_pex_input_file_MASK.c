
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pex_obj {scalar_t__ count; scalar_t__ next_input; char* next_input_name; int next_input_name_allocated; int * input_file; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct pex_obj*,int,char*) ;

FILE *
FUNC_3 (struct pex_obj *VAR_4, int VAR_5, const char *VAR_6)
{
  char *VAR_7 = (char *) VAR_6;
  FILE *VAR_8;



  if (VAR_4->count != 0
      || (VAR_4->next_input >= 0 && VAR_4->next_input != VAR_2)
      || VAR_4->next_input_name)
    {
      VAR_3 = VAR_0;
      return ((void*)0);
    }

  VAR_7 = FUNC_2 (VAR_4, VAR_5, VAR_7);
  if (! VAR_7)
    return ((void*)0);

  VAR_8 = FUNC_0 (VAR_7, (VAR_5 & VAR_1) ? "wb" : "w");
  if (! VAR_8)
    {
      FUNC_1 (VAR_7);
      return ((void*)0);
    }

  VAR_4->input_file = VAR_8;
  VAR_4->next_input_name = VAR_7;
  VAR_4->next_input_name_allocated = (VAR_7 != VAR_6);

  return VAR_8;
}
