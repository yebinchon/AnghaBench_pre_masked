
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_3__* decl_t ;
struct TYPE_11__ {TYPE_2__* automaton_decl; scalar_t__ corresponding_automaton_num; } ;
struct TYPE_10__ {int decls_num; TYPE_3__** decls; } ;
struct TYPE_9__ {scalar_t__ mode; } ;
struct TYPE_8__ {TYPE_1__* corresponding_automaton; } ;
struct TYPE_7__ {scalar_t__ automaton_order_num; } ;


 TYPE_5__* FUNC_0 (TYPE_3__*) ;
 TYPE_4__* VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  decl_t VAR_2;
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0->decls_num; VAR_3++)
    {
      VAR_2 = VAR_0->decls [VAR_3];
      if (VAR_2->mode == VAR_1)
 {
   if (FUNC_0 (VAR_2)->automaton_decl == ((void*)0)
       || (FUNC_0 (VAR_2)->automaton_decl->corresponding_automaton
    == ((void*)0)))

     FUNC_0 (VAR_2)->corresponding_automaton_num = 0;
   else
     FUNC_0 (VAR_2)->corresponding_automaton_num
       = (FUNC_0 (VAR_2)->automaton_decl
                 ->corresponding_automaton->automaton_order_num);
 }
    }
}
