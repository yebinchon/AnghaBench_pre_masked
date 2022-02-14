
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ui_file*,char*) ;
 int FUNC_2 (struct gdbarch*,struct ui_file*,struct frame_info*,int,int) ;
 int FUNC_3 (struct gdbarch*,struct ui_file*,struct frame_info*,char const*) ;
 scalar_t__ FUNC_4 (struct gdbarch*) ;
 scalar_t__ FUNC_5 (struct gdbarch*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6 (struct gdbarch *VAR_5, struct ui_file *VAR_6,
     struct frame_info *VAR_7, const char *VAR_8)
{
  if (!VAR_3)
    FUNC_0 ("The program has no registers now.");
  if (VAR_2 == ((void*)0))
    FUNC_0 ("No selected frame.");

  if (FUNC_4 (VAR_5))
    FUNC_3 (VAR_5, VAR_6, VAR_7, VAR_8);
  else
    {
      int VAR_9;
      int VAR_10 = 0;

      for (VAR_9 = 0; VAR_9 < VAR_1 + VAR_0; VAR_9++)
 {
   if (FUNC_5 (VAR_5, VAR_9, VAR_4))
     {
       VAR_10 = 1;
       FUNC_2 (VAR_5, VAR_6, VAR_7, VAR_9, 1);
     }
 }
      if (!VAR_10)
 FUNC_1 (VAR_6, "No vector information\n");
    }
}
