
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct type {int dummy; } ;
struct TYPE_2__ {int string_lower_bound; int * string_char_type; } ;


 int FUNC_0 (struct value*) ;
 struct value* FUNC_1 (struct type*) ;
 int VAR_0 ;
 struct type* FUNC_2 (struct type*,int ,struct type*) ;
 struct type* FUNC_3 (struct type*,int ,int,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*) ;

struct value *
FUNC_6 (char *VAR_2)
{
  struct value *VAR_3;
  int VAR_4 = FUNC_5 (VAR_2);
  int VAR_5 = VAR_1->string_lower_bound;
  struct type *VAR_6 =
  FUNC_3 ((struct type *) ((void*)0),
       VAR_0,
       VAR_5, VAR_4 + VAR_5 - 1);
  struct type *VAR_7 =
  FUNC_2 ((struct type *) ((void*)0),
       *VAR_1->string_char_type,
       VAR_6);

  VAR_3 = FUNC_1 (VAR_7);
  FUNC_4 (FUNC_0 (VAR_3), VAR_2, VAR_4);
  return VAR_3;
}
