
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum tui_status { ____Placeholder_tui_status } tui_status ;
typedef enum tui_register_display_type { ____Placeholder_tui_register_display_type } tui_register_display_type ;
typedef enum tui_layout_type { ____Placeholder_tui_layout_type } tui_layout_type ;
struct TYPE_4__ {scalar_t__ regs_display_type; } ;
struct TYPE_5__ {TYPE_1__ data_display_info; } ;
struct TYPE_6__ {TYPE_2__ detail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 char* VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char FUNC_4 (char) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char const*) ;

enum tui_status
FUNC_10 (const char *VAR_19)
{
  enum tui_status VAR_20 = VAR_16;

  if (VAR_19 != (char *) ((void*)0))
    {
      int VAR_21;
      char *VAR_22;
      enum tui_layout_type VAR_23 = VAR_18;
      enum tui_register_display_type VAR_24 = VAR_17;
      enum tui_layout_type VAR_25 = FUNC_5 ();

      VAR_22 = (char *) FUNC_9 (VAR_19);
      for (VAR_21 = 0; (VAR_21 < FUNC_2 (VAR_19)); VAR_21++)
 VAR_22[VAR_21] = FUNC_4 (VAR_22[VAR_21]);


      if (FUNC_2 (VAR_22) <= 1 && (*VAR_22 == 'S' || *VAR_22 == '$'))
 {
   FUNC_7 ("Ambiguous command input.\n");
   VAR_20 = VAR_7;
 }
      else
 {
   if (FUNC_3 (VAR_22, "SRC"))
     VAR_23 = VAR_2;
   else if (FUNC_3 (VAR_22, "ASM"))
     VAR_23 = VAR_0;
   else if (FUNC_3 (VAR_22, "SPLIT"))
     VAR_23 = VAR_4;
   else if (FUNC_3 (VAR_22, "REGS") ||
     FUNC_3 (VAR_22, VAR_12) ||
     FUNC_3 (VAR_22, VAR_11) ||
     FUNC_3 (VAR_22, VAR_8) ||
     FUNC_3 (VAR_22, VAR_15))
     {
       if (VAR_25 == VAR_2 || VAR_25 == VAR_3)
  VAR_23 = VAR_3;
       else
  VAR_23 = VAR_1;






       if (FUNC_3 (VAR_22, VAR_8))
  {
    if (VAR_5->detail.data_display_info.regs_display_type !=
        VAR_13 &&
        VAR_5->detail.data_display_info.regs_display_type !=
        VAR_6)
      VAR_24 = VAR_13;
    else
      VAR_24 =
        VAR_5->detail.data_display_info.regs_display_type;
  }
       else if (FUNC_3 (VAR_22,
          VAR_12))
  VAR_24 = VAR_9;
       else if (FUNC_3 (VAR_22, VAR_11))
  VAR_24 = VAR_10;
       else if (FUNC_3 (VAR_22, VAR_15))
  VAR_24 = VAR_14;
       else if (VAR_5)
  {
    if (VAR_5->detail.data_display_info.regs_display_type !=
        VAR_17)
      VAR_24 =
        VAR_5->detail.data_display_info.regs_display_type;
    else
      VAR_24 = VAR_10;
  }
     }
   else if (FUNC_3 (VAR_22, "NEXT"))
     VAR_23 = FUNC_0 ();
   else if (FUNC_3 (VAR_22, "PREV"))
     VAR_23 = FUNC_1 ();
   else
     VAR_20 = VAR_7;
   FUNC_8 (VAR_22);

   FUNC_6 (VAR_23, VAR_24);
 }
    }
  else
    VAR_20 = VAR_7;

  return VAR_20;
}
