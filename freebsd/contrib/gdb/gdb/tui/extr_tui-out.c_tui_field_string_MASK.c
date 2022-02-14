
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ line; int start_of_line; scalar_t__ suppress_output; } ;
typedef TYPE_1__ tui_out_data ;
struct ui_out {int dummy; } ;
typedef enum ui_align { ____Placeholder_ui_align } ui_align ;


 int FUNC_0 () ;
 int FUNC_1 (struct ui_out*,int,char const*,char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_5 (struct ui_out*) ;
 int FUNC_6 (struct ui_out*,int) ;
 int VAR_2 ;

void
FUNC_7 (struct ui_out *VAR_3,
    int VAR_4,
    int VAR_5,
    enum ui_align VAR_6,
    const char *VAR_7,
    const char *VAR_8)
{
  int VAR_9 = 0;
  int VAR_10 = 0;

  tui_out_data *VAR_11 = FUNC_5 (VAR_3);
  if (VAR_11->suppress_output)
    return;

  if (VAR_7 && VAR_11->line > 0 && FUNC_2 (VAR_7, "file") == 0)
    {
      VAR_11->start_of_line ++;
      if (VAR_11->line > 0)
        {
          FUNC_4 (VAR_8, VAR_11->line);
        }
      return;
    }

  VAR_11->start_of_line ++;
  if ((VAR_6 != VAR_1) && VAR_8)
    {
      VAR_9 = VAR_5 - FUNC_3 (VAR_8);
      if (VAR_9 <= 0)
 VAR_9 = 0;
      else
 {
   if (VAR_6 == VAR_2)
     VAR_10 = 0;
   else if (VAR_6 == VAR_0)
     {
       VAR_10 = VAR_9;
       VAR_9 = 0;
     }
   else

     {
       VAR_10 = VAR_9 / 2;
       VAR_9 -= VAR_10;
     }
 }
    }

  if (VAR_9)
    FUNC_6 (VAR_3, VAR_9);
  if (VAR_8)
    FUNC_1 (VAR_3, VAR_4, VAR_7, "%s", VAR_8);
  if (VAR_10)
    FUNC_6 (VAR_3, VAR_10);

  if (VAR_6 != VAR_1)
    FUNC_0 ();
}
