
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef enum tui_win_type { ____Placeholder_tui_win_type } tui_win_type ;
struct TYPE_8__ {scalar_t__ is_visible; } ;
struct TYPE_9__ {TYPE_1__ generic; } ;




 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__** VAR_3 ;

void
FUNC_8 (void)
{
  enum tui_win_type VAR_4;

  FUNC_0 (VAR_2, VAR_1);
  FUNC_3 (VAR_3);
  for (VAR_4 = 128; VAR_4 < VAR_0; VAR_4++)
    {
      if (VAR_3[VAR_4] && VAR_3[VAR_4]->generic.is_visible)
 {
   switch (VAR_4)
     {
     case 128:
     case 129:
       FUNC_6 (VAR_3[VAR_4]);
       FUNC_1 (VAR_3[VAR_4]);
       FUNC_2 (VAR_3[VAR_4]);
       FUNC_7 (VAR_3[VAR_4]);
       break;
     case 130:
       FUNC_4 ();
       break;
     default:
       break;
     }
 }
    }
  FUNC_5 ();
}
