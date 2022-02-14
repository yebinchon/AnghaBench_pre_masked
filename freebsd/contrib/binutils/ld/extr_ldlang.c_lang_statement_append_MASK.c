
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lang_statement_union_type ;
struct TYPE_3__ {int ** tail; } ;
typedef TYPE_1__ lang_statement_list_type ;



void
FUNC_0 (lang_statement_list_type *VAR_0,
         lang_statement_union_type *VAR_1,
         lang_statement_union_type **VAR_2)
{
  *(VAR_0->tail) = VAR_1;
  VAR_0->tail = VAR_2;
}
