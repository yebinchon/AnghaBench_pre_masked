
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* val; struct TYPE_7__* var; } ;
typedef TYPE_1__ setvar_node ;
typedef TYPE_1__ setvar_fifo ;


 int FUNC_0 (TYPE_1__*,TYPE_1__,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(
 setvar_fifo * VAR_1
 )
{
 setvar_node * VAR_2;

 if (VAR_1 != ((void*)0)) {
  for (;;) {
   FUNC_0(VAR_2, *VAR_1, VAR_0);
   if (VAR_2 == ((void*)0))
    break;
   FUNC_1(VAR_2->var);
   FUNC_1(VAR_2->val);
   FUNC_1(VAR_2);
  }
  FUNC_1(VAR_1);
 }
}
