
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
struct tui_data_element {int content; } ;
struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
struct cleanup {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct type*) ;
 int VAR_1 ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (struct ui_file*,char*,char const*) ;
 struct ui_file* VAR_2 ;
 int FUNC_3 (int ,struct ui_file*,struct frame_info*,int,int) ;
 char* FUNC_4 (struct gdbarch*,int) ;
 struct type* FUNC_5 (struct gdbarch*,int) ;
 int FUNC_6 (struct frame_info*,int,char*) ;
 struct cleanup* FUNC_7 (int ,void*) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (char*,struct type*,float,int,struct ui_file*) ;
 int FUNC_9 (int ,int) ;
 char* FUNC_10 (char*,char) ;
 char* FUNC_11 (struct ui_file*) ;
 int VAR_4 ;
 struct ui_file* FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void
FUNC_15 (struct gdbarch *VAR_5, struct frame_info *VAR_6,
                     struct tui_data_element *VAR_7, int VAR_8)
{
  struct ui_file *VAR_9;
  struct ui_file *VAR_10;
  const char *VAR_11;
  struct cleanup *VAR_12;
  char *VAR_13, *VAR_14;
  int VAR_15;
  struct type *VAR_16 = FUNC_5 (VAR_5, VAR_8);

  VAR_11 = FUNC_4 (VAR_5, VAR_8);
  if (VAR_11 == 0)
    {
      return;
    }

  VAR_3 = 0;
  VAR_10 = VAR_2;
  VAR_9 = FUNC_12 (256);
  VAR_2 = VAR_9;
  VAR_12 = FUNC_7 (VAR_4, (void*) VAR_10);
  if (FUNC_0 (VAR_16) != 0 && 0)
    {
      char VAR_17[VAR_0];
      int VAR_18;

      VAR_18 = FUNC_9 (VAR_1, VAR_8);
      FUNC_2 (VAR_9, "%-14s ", VAR_11);
      FUNC_6 (VAR_6, VAR_8, VAR_17);
      FUNC_8 (VAR_17, VAR_16, 'f', VAR_18, VAR_9);
    }
  else
    {
      FUNC_3 (VAR_1, VAR_9,
                                    VAR_6, VAR_8, 1);
    }


  VAR_13 = FUNC_11 (VAR_9);


  VAR_14 = FUNC_10 (VAR_13, '\n');
  if (VAR_14 && VAR_14[1] == 0)
    *VAR_14 = 0;

  FUNC_13 (VAR_7->content);
  VAR_7->content = FUNC_14 (VAR_13);
  FUNC_1 (VAR_12);
}
