
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef union etree_union {int dummy; } etree_union ;
struct TYPE_3__ {int type; union etree_union* exp; } ;
typedef TYPE_1__ lang_data_statement_type ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 int VAR_1 ;

void
FUNC_1 (int VAR_2, union etree_union *VAR_3)
{
  lang_data_statement_type *VAR_4;

  VAR_4 = FUNC_0 (VAR_0, VAR_1);
  VAR_4->exp = VAR_3;
  VAR_4->type = VAR_2;
}
