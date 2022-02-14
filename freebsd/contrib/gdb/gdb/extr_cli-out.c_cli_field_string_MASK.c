
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ui_out {int dummy; } ;
typedef enum ui_align { ____Placeholder_ui_align } ui_align ;
struct TYPE_3__ {scalar_t__ suppress_output; } ;
typedef TYPE_1__ cli_out_data ;


 int FUNC_0 () ;
 int FUNC_1 (struct ui_out*,int,char const*,char*,char const*) ;
 int FUNC_2 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (struct ui_out*) ;
 int FUNC_4 (struct ui_out*,int) ;
 int VAR_2 ;

void
FUNC_5 (struct ui_out *VAR_3,
    int VAR_4,
    int VAR_5,
    enum ui_align VAR_6,
    const char *VAR_7,
    const char *VAR_8)
{
  int VAR_9 = 0;
  int VAR_10 = 0;

  cli_out_data *VAR_11 = FUNC_3 (VAR_3);
  if (VAR_11->suppress_output)
    return;

  if ((VAR_6 != VAR_1) && VAR_8)
    {
      VAR_9 = VAR_5 - FUNC_2 (VAR_8);
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
    FUNC_4 (VAR_3, VAR_9);
  if (VAR_8)
    FUNC_1 (VAR_3, VAR_4, VAR_7, "%s", VAR_8);
  if (VAR_10)
    FUNC_4 (VAR_3, VAR_10);

  if (VAR_6 != VAR_1)
    FUNC_0 ();
}
