
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int children; } ;
typedef TYPE_1__ lang_group_statement_type ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int ,int *) ;
 int * VAR_1 ;

void
FUNC_2 (void)
{
  lang_group_statement_type *VAR_2;

  VAR_2 = FUNC_1 (VAR_0, VAR_1);
  FUNC_0 (&VAR_2->children);
  VAR_1 = &VAR_2->children;
}
