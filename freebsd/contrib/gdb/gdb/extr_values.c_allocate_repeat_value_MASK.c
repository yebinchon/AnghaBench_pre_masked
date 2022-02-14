
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct type {int dummy; } ;
struct TYPE_2__ {int string_lower_bound; } ;


 struct value* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct type*,struct type*,struct type*) ;
 struct type* FUNC_2 (struct type*,int ,int,int) ;
 TYPE_1__* VAR_1 ;

struct value *
FUNC_3 (struct type *VAR_2, int VAR_3)
{
  int VAR_4 = VAR_1->string_lower_bound;


  struct type *VAR_5
  = FUNC_2 ((struct type *) ((void*)0), VAR_0,
         VAR_4, VAR_3 + VAR_4 - 1);


  return FUNC_0 (FUNC_1 ((struct type *) ((void*)0),
         VAR_2, VAR_5));
}
