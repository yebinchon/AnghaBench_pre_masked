
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ui_file*,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct gdbarch*,int) ;
 int FUNC_6 (struct ui_file*,struct frame_info*,int,int ) ;
 int FUNC_7 (struct ui_file*,struct frame_info*,int) ;
 int FUNC_8 (struct ui_file*,struct frame_info*,int) ;

__attribute__((used)) static void
FUNC_9 (struct gdbarch *VAR_4, struct ui_file *VAR_5,
      struct frame_info *VAR_6, int VAR_7, int VAR_8)
{
  if (VAR_7 != -1)
    {
      FUNC_4 (VAR_7 >= VAR_2);
      if (*(FUNC_0 (VAR_7)) == '\0')
 FUNC_2 ("Not a valid register for the current processor type");

      FUNC_6 (VAR_5, VAR_6, VAR_7, 0);
      FUNC_3 (VAR_5, "\n");
    }
  else

    {
      VAR_7 = VAR_2;
      while (VAR_7 < VAR_2 + VAR_1)
 {
   if (FUNC_1 (FUNC_5 (VAR_4, VAR_7)) ==
       VAR_3)
     {
       if (VAR_8)
  VAR_7 = FUNC_7 (VAR_5, VAR_6, VAR_7);
       else
  VAR_7 += VAR_0;
     }
   else
     VAR_7 = FUNC_8 (VAR_5, VAR_6, VAR_7);
 }
    }
}
