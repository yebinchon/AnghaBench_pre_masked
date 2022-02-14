
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct c_type_name {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; scalar_t__ keyword; int value; } ;
typedef TYPE_1__ c_token ;
typedef int c_parser ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 struct c_type_name* FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct c_type_name*) ;

__attribute__((used)) static tree
FUNC_7 (c_parser *VAR_8)
{
  tree VAR_9 = VAR_1;
  struct c_type_name *VAR_10 = ((void*)0);
  tree VAR_11 = VAR_1;
  while (1)
    {
      c_token *VAR_12 = FUNC_3 (VAR_8);
      if (VAR_12->type == VAR_0
   && (VAR_12->keyword == VAR_4
       || VAR_12->keyword == VAR_7
       || VAR_12->keyword == VAR_5
       || VAR_12->keyword == VAR_2
       || VAR_12->keyword == VAR_3
       || VAR_12->keyword == VAR_6))
 {

   VAR_9 = FUNC_5 (FUNC_0 (VAR_1, VAR_12->value), VAR_9);
   FUNC_1 (VAR_8);
 }
      else
 break;
    }
  if (FUNC_2 (VAR_8))
    VAR_10 = FUNC_4 (VAR_8);
  if (VAR_10)
    VAR_11 = FUNC_6 (VAR_10);
  return FUNC_0 (VAR_9, VAR_11);
}
