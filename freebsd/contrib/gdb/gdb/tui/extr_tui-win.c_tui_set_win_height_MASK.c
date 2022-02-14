
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; int is_visible; } ;
struct tui_win_info {TYPE_1__ generic; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;
 char FUNC_4 (char) ;
 scalar_t__ FUNC_5 (struct tui_win_info*,int) ;
 int FUNC_6 () ;
 struct tui_win_info* FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12 (char *VAR_4, int VAR_5)
{

  FUNC_6 ();
  if (VAR_4 != (char *) ((void*)0))
    {
      char *VAR_6 = FUNC_11 (VAR_4);
      char *VAR_7 = VAR_6;
      char *VAR_8 = (char *) ((void*)0);
      int VAR_9, VAR_10;
      struct tui_win_info * VAR_11;

      VAR_8 = VAR_7;
      VAR_7 = FUNC_2 (VAR_7, ' ');
      if (VAR_7 != (char *) ((void*)0))
 {
   *VAR_7 = (char) 0;




   for (VAR_10 = 0; VAR_10 < FUNC_3 (VAR_8); VAR_10++)
     VAR_8[VAR_10] = FUNC_4 (VAR_8[VAR_10]);
   VAR_11 = FUNC_7 (VAR_8);

   if (VAR_11 == (struct tui_win_info *) ((void*)0) || !VAR_11->generic.is_visible)
     FUNC_9 ("Invalid window specified. \nThe window name specified must be valid and visible.\n");

   else
     {

       while (*(++VAR_7) == ' ')
  ;

       if (*VAR_7 != (char) 0)
  {
    int VAR_12 = VAR_0;
    int VAR_13 = VAR_1;
    int VAR_14;;

    if (*VAR_7 == '+' || *VAR_7 == '-')
      {
        if (*VAR_7 == '-')
   VAR_12 = VAR_1;
        VAR_13 = VAR_0;
        VAR_7++;
      }
    VAR_14 = FUNC_0 (VAR_7);
    if (VAR_14 > 0)
      {
        if (VAR_12)
   VAR_14 *= (-1);
        if (VAR_13)
   VAR_9 = VAR_14;
        else
   VAR_9 = VAR_11->generic.height + VAR_14;




        if (FUNC_5 (VAR_11,
      VAR_9) == VAR_2)
   FUNC_9 ("Invalid window height specified.\n%s",
     VAR_3);
        else
                        FUNC_8 ();
      }
    else
      FUNC_9 ("Invalid window height specified.\n%s",
        VAR_3);
  }
     }
 }
      else
 FUNC_1 (VAR_3);

      if (VAR_6 != (char *) ((void*)0))
 FUNC_10 (VAR_6);
    }
  else
    FUNC_1 (VAR_3);
}
