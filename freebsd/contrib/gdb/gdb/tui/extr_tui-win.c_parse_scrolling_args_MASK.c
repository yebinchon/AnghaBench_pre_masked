
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_visible; } ;
struct tui_win_info {TYPE_1__ generic; } ;
struct TYPE_4__ {scalar_t__* list; } ;


 struct tui_win_info* VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;
 char FUNC_4 (char) ;
 struct tui_win_info* FUNC_5 (char*) ;
 TYPE_2__* FUNC_6 () ;
 struct tui_win_info* FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11 (char *VAR_1, struct tui_win_info * * VAR_2,
        int *VAR_3)
{
  if (VAR_3)
    *VAR_3 = 0;
  *VAR_2 = FUNC_7 ();





  if (VAR_1 != (char *) ((void*)0))
    {
      char *VAR_4, *VAR_5;


      VAR_4 = VAR_5 = FUNC_10 (VAR_1);
      if (FUNC_1 (*VAR_5))
 {
   char *VAR_6;

   VAR_6 = VAR_5;
   VAR_5 = FUNC_2 (VAR_5, ' ');
   if (VAR_5 != (char *) ((void*)0))
     {
       *VAR_5 = (char) 0;
       if (VAR_3)
  *VAR_3 = FUNC_0 (VAR_6);
       VAR_5++;
     }
   else if (VAR_3)
     *VAR_3 = FUNC_0 (VAR_6);
 }


      if (VAR_5 != (char *) ((void*)0))
 {
   char *VAR_7;
   int VAR_8;

   if (*VAR_5 == ' ')
     while (*(++VAR_5) == ' ')
       ;

   if (*VAR_5 != (char) 0)
     VAR_7 = VAR_5;
   else
     VAR_7 = "?";


   for (VAR_8 = 0; VAR_8 < FUNC_3 (VAR_7); VAR_8++)
     VAR_7[VAR_8] = FUNC_4 (VAR_7[VAR_8]);
   *VAR_2 = FUNC_5 (VAR_7);

   if (*VAR_2 == (struct tui_win_info *) ((void*)0) ||
       !(*VAR_2)->generic.is_visible)
     FUNC_8 ("Invalid window specified. \nThe window name specified must be valid and visible.\n");

   else if (*VAR_2 == VAR_0)
     *VAR_2 = (struct tui_win_info *) (FUNC_6 ())->list[0];
 }
      FUNC_9 (VAR_4);
    }
}
