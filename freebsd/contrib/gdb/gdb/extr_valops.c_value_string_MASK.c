
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct type {int dummy; } ;
struct TYPE_2__ {int string_lower_bound; scalar_t__ c_style_arrays; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct value*) ;
 int FUNC_1 (int) ;
 struct value* FUNC_2 (struct type*) ;
 int VAR_0 ;
 struct type* FUNC_3 (struct type*,int ,int,int) ;
 struct type* FUNC_4 (struct type*,struct type*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_5 (int ,char*,int) ;
 struct value* FUNC_6 (struct type*,int ,int *) ;
 int FUNC_7 (int ,char*,int) ;

struct value *
FUNC_8 (char *VAR_2, int VAR_3)
{
  struct value *VAR_4;
  int VAR_5 = VAR_1->string_lower_bound;
  struct type *VAR_6 = FUNC_3 ((struct type *) ((void*)0),
           VAR_0,
           VAR_5, VAR_3 + VAR_5 - 1);
  struct type *VAR_7
  = FUNC_4 ((struct type *) ((void*)0), VAR_6);
  CORE_ADDR VAR_8;

  if (VAR_1->c_style_arrays == 0)
    {
      VAR_4 = FUNC_2 (VAR_7);
      FUNC_5 (FUNC_0 (VAR_4), VAR_2, VAR_3);
      return VAR_4;
    }





  VAR_8 = FUNC_1 (VAR_3);
  FUNC_7 (VAR_8, VAR_2, VAR_3);

  VAR_4 = FUNC_6 (VAR_7, VAR_8, ((void*)0));
  return (VAR_4);
}
