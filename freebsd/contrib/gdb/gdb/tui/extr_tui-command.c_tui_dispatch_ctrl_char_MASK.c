
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * handle; } ;
struct tui_win_info {TYPE_1__ generic; } ;
typedef int WINDOW ;


 unsigned int VAR_0 ;
 struct tui_win_info* VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char FUNC_4 (char) ;
 int FUNC_5 () ;
 int FUNC_6 (struct tui_win_info*,int) ;
 int FUNC_7 (struct tui_win_info*,int) ;
 int FUNC_8 (struct tui_win_info*,int) ;
 int FUNC_9 (struct tui_win_info*,int) ;
 struct tui_win_info* FUNC_10 () ;
 scalar_t__ FUNC_11 (int *) ;

unsigned int
FUNC_12 (unsigned int VAR_2)
{
  struct tui_win_info *VAR_3 = FUNC_10 ();
  WINDOW *VAR_4 = VAR_1->generic.handle;






  if (VAR_3 == ((void*)0) || VAR_3 == VAR_1)
    return VAR_2;
  else
    {
      unsigned int VAR_5 = 0, VAR_6 = VAR_2;
      int VAR_7;
      char *VAR_8;





      VAR_8 = (char *) FUNC_0 ("TERM");
      for (VAR_7 = 0; (VAR_8 && VAR_8[VAR_7]); VAR_7++)
 VAR_8[VAR_7] = FUNC_4 (VAR_8[VAR_7]);
      if ((FUNC_3 (VAR_8, "XTERM") == 0) && FUNC_2 (VAR_2))
 {
   unsigned int VAR_9 = 0;
   unsigned int VAR_10;

   VAR_10 = 0;
   while (!FUNC_1 (VAR_10))
     {
       VAR_10 = (int) FUNC_11 (VAR_4);
       if (VAR_10 == VAR_0)
  {
    return VAR_2;
  }
       if (!VAR_10)
  break;
       if (VAR_10 == 53)
  VAR_9 = 132;
       else if (VAR_10 == 54)
  VAR_9 = 133;
       else
  {
    return 0;
  }
     }
   VAR_6 = VAR_9;
 }

      switch (VAR_6)
 {
 case 133:
   FUNC_7 (VAR_3, 0);
   break;
 case 132:
   FUNC_6 (VAR_3, 0);
   break;
 case 135:
 case 130:
   FUNC_7 (VAR_3, 1);
   break;
 case 128:
 case 129:
   FUNC_6 (VAR_3, 1);
   break;
 case 131:
   FUNC_8 (VAR_3, 1);
   break;
 case 134:
   FUNC_9 (VAR_3, 1);
   break;
 case '\f':
   FUNC_5 ();
   break;
 default:
   VAR_5 = VAR_6;
   break;
 }
      return VAR_5;
    }
}
