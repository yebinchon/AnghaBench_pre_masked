
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
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ui_file*,char*,...) ;
 int FUNC_3 (int ,struct ui_file*) ;
 int FUNC_4 (struct frame_info*,int,char*) ;
 int FUNC_5 (struct gdbarch*,int) ;
 struct gdbarch* FUNC_6 (struct frame_info*) ;
 int FUNC_7 (struct ui_file*,struct frame_info*,int) ;
 int FUNC_8 (char*,int ,char,int ,struct ui_file*) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static void
FUNC_10 (struct ui_file *VAR_6, struct frame_info *VAR_7,
       int VAR_8, int VAR_9)
{
  struct gdbarch *VAR_10 = FUNC_6 (VAR_7);
  char VAR_11[VAR_1];
  int VAR_12;

  if (FUNC_1 (FUNC_5 (VAR_10, VAR_8)) == VAR_4)
    {
      FUNC_7 (VAR_6, VAR_7, VAR_8);
      return;
    }


  if (!FUNC_4 (VAR_7, VAR_8, VAR_11))
    {
      FUNC_2 (VAR_6, "%s: [Invalid]", FUNC_0 (VAR_8));
      return;
    }

  FUNC_3 (FUNC_0 (VAR_8), VAR_6);





  if (VAR_8 < VAR_2)
    FUNC_2 (VAR_6, "(r%d): ", VAR_8);
  else
    FUNC_2 (VAR_6, ": ");

  if (VAR_3 == VAR_0)
    VAR_12 =
      FUNC_9 (VAR_5,
       VAR_8) - FUNC_9 (VAR_5, VAR_8);
  else
    VAR_12 = 0;

  FUNC_8 (VAR_11 + VAR_12,
     FUNC_5 (VAR_10, VAR_8), 'x', 0,
     VAR_6);
}
