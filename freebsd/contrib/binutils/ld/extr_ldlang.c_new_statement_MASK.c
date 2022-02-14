
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; int * next; } ;
struct TYPE_7__ {TYPE_1__ header; } ;
typedef TYPE_2__ lang_statement_union_type ;
typedef int lang_statement_list_type ;
typedef enum statement_enum { ____Placeholder_statement_enum } statement_enum ;


 int FUNC_0 (int *,TYPE_2__*,int **) ;
 TYPE_2__* FUNC_1 (size_t) ;

__attribute__((used)) static lang_statement_union_type *
FUNC_2 (enum statement_enum VAR_0,
        size_t VAR_1,
        lang_statement_list_type *VAR_2)
{
  lang_statement_union_type *VAR_3;

  VAR_3 = FUNC_1 (VAR_1);
  VAR_3->header.type = VAR_0;
  VAR_3->header.next = ((void*)0);
  FUNC_0 (VAR_2, VAR_3, &VAR_3->header.next);
  return VAR_3;
}
