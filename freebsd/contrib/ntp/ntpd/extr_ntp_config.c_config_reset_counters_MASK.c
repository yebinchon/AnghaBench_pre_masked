
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i; struct TYPE_5__* link; } ;
typedef TYPE_1__ int_node ;
struct TYPE_6__ {int reset_counters; } ;
typedef TYPE_2__ config_tree ;


 int FUNC_0 (int,char*) ;
 TYPE_1__* FUNC_1 (int ) ;







 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static void
FUNC_10(
 config_tree *VAR_0
 )
{
 int_node *VAR_1;

 for (VAR_1 = FUNC_1(VAR_0->reset_counters);
      VAR_1 != ((void*)0);
      VAR_1 = VAR_1->link) {
  switch (VAR_1->i) {
  default:
   FUNC_0(1, ("config_reset_counters %s (%d) invalid\n",
        FUNC_4(VAR_1->i), VAR_1->i));
   break;

  case 134:
   FUNC_5();
   break;

  case 133:
   FUNC_8();
   break;

  case 132:
   FUNC_2();
   break;

  case 131:
   FUNC_3();
   break;

  case 130:
   FUNC_6();
   break;

  case 129:
   FUNC_7();
   break;

  case 128:
   FUNC_9();
   break;
  }
 }
}
