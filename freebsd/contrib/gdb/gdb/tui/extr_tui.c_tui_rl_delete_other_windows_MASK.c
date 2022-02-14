
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tui_register_display_type { ____Placeholder_tui_register_display_type } tui_register_display_type ;
typedef enum tui_layout_type { ____Placeholder_tui_layout_type } tui_layout_type ;







 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3 (int VAR_2, int VAR_3)
{
  if (!VAR_1)
    FUNC_1 (0 , 0 );

  if (VAR_1)
    {
      enum tui_layout_type VAR_4;
      enum tui_register_display_type VAR_5 = VAR_0;

      VAR_4 = FUNC_0 ();


      switch (VAR_4)
 {
 case 130:
 case 129:
 case 128:
 default:
   VAR_4 = 130;
   break;

 case 132:
 case 131:
   VAR_4 = 132;
   break;
 }
      FUNC_2 (VAR_4, VAR_5);
    }
  return 0;
}
