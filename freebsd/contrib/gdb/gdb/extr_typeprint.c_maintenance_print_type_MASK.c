
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct type {int dummy; } ;
struct expression {TYPE_1__* elts; } ;
struct cleanup {int dummy; } ;
struct TYPE_2__ {scalar_t__ opcode; struct type* type; } ;


 scalar_t__ VAR_0 ;
 struct type* FUNC_0 (struct value*) ;
 int FUNC_1 (struct cleanup*) ;
 struct value* FUNC_2 (struct expression*) ;
 int VAR_1 ;
 struct cleanup* FUNC_3 (int ,struct expression**) ;
 struct expression* FUNC_4 (char*) ;
 int FUNC_5 (struct type*,int ) ;

void
FUNC_6 (char *VAR_2, int VAR_3)
{
  struct value *VAR_4;
  struct type *VAR_5;
  struct cleanup *VAR_6;
  struct expression *VAR_7;

  if (VAR_2 != ((void*)0))
    {
      VAR_7 = FUNC_4 (VAR_2);
      VAR_6 = FUNC_3 (VAR_1, &VAR_7);
      if (VAR_7->elts[0].opcode == VAR_0)
 {

   VAR_5 = VAR_7->elts[1].type;
 }
      else
 {


   VAR_4 = FUNC_2 (VAR_7);
   VAR_5 = FUNC_0 (VAR_4);
 }
      if (VAR_5 != ((void*)0))
 {
   FUNC_5 (VAR_5, 0);
 }
      FUNC_1 (VAR_6);
    }
}
