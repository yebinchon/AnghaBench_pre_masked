
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; scalar_t__ type; int height; int * handle; } ;
struct tui_win_info {TYPE_1__ generic; } ;
typedef int WINDOW ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct tui_win_info*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct tui_win_info*,char*) ;
 int FUNC_5 (int *) ;

void
FUNC_6 (struct tui_win_info * VAR_4, int VAR_5)
{
  int VAR_6;
  int VAR_7 = (VAR_4->generic.width - 2) / 2;

  if (VAR_4->generic.handle != (WINDOW *) ((void*)0))
    {
      FUNC_5 (VAR_4->generic.handle);
      FUNC_2 (VAR_4);
      if (VAR_5 == VAR_0)
 {
   char *VAR_8;

   if (VAR_4->generic.type == VAR_3)
     VAR_8 = VAR_2;
   else
     VAR_8 = VAR_1;
   if (FUNC_1 (VAR_8) >= VAR_7)
     VAR_6 = 1;
   else
     VAR_6 = VAR_7 - FUNC_1 (VAR_8);
   FUNC_0 (VAR_4->generic.handle,
       (VAR_4->generic.height / 2),
       VAR_6,
       VAR_8);






   FUNC_4 (VAR_4, VAR_8);
 }
      FUNC_3 (&VAR_4->generic);
    }
}
