
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; struct TYPE_4__* next; } ;
typedef TYPE_1__ search_arch_type ;


 char FUNC_0 (char) ;
 char const* VAR_0 ;
 TYPE_1__** VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;
 char* FUNC_2 (char const*) ;

void
FUNC_3 (const char *VAR_2)
{
  char *VAR_3 = FUNC_2 (VAR_2);
  search_arch_type *VAR_4 = FUNC_1 (sizeof (search_arch_type));

  VAR_0 = VAR_2;

  VAR_4->name = VAR_3;
  VAR_4->next = ((void*)0);
  while (*VAR_3)
    {
      *VAR_3 = FUNC_0 (*VAR_3);
      VAR_3++;
    }
  *VAR_1 = VAR_4;
  VAR_1 = &VAR_4->next;

}
