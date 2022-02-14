
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
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 struct gdbarch* VAR_7 ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (struct ui_file*,char*,...) ;
 int FUNC_4 (struct frame_info*,int,char*) ;
 int FUNC_5 (struct gdbarch*,int) ;
 struct gdbarch* FUNC_6 (struct frame_info*) ;
 int FUNC_7 (struct gdbarch*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct gdbarch*,int) ;

__attribute__((used)) static int
FUNC_10 (struct ui_file *VAR_8, struct frame_info *VAR_9,
         int VAR_10)
{
  struct gdbarch *VAR_11 = FUNC_6 (VAR_9);

  char VAR_12[VAR_1];
  int VAR_13 = (FUNC_7 (VAR_11) == 8 ? 4 : 8);
  int VAR_14, VAR_15;
  int VAR_16;


  FUNC_3 (VAR_8, "     ");
  for (VAR_14 = 0, VAR_16 = VAR_10;
       VAR_14 < VAR_13 && VAR_16 < VAR_4 + VAR_3; VAR_16++)
    {
      if (*FUNC_0 (VAR_16) == '\0')
 continue;
      if (FUNC_1 (FUNC_5 (VAR_11, VAR_16)) ==
   VAR_6)
 break;
      FUNC_3 (VAR_8,
   FUNC_7 (VAR_7) == 8 ? "%17s" : "%9s",
   FUNC_0 (VAR_16));
      VAR_14++;
    }

  if ((VAR_10 % VAR_4) < VAR_2)
    FUNC_3 (VAR_8, "\n R%-4d", VAR_10 % VAR_4);
  else
    FUNC_3 (VAR_8, "\n      ");


  for (VAR_14 = 0, VAR_16 = VAR_10;
       VAR_14 < VAR_13 && VAR_16 < VAR_4 + VAR_3; VAR_16++)
    {
      if (*FUNC_0 (VAR_16) == '\0')
 continue;
      if (FUNC_1 (FUNC_5 (VAR_11, VAR_16)) ==
   VAR_6)
 break;

      if (!FUNC_4 (VAR_9, VAR_16, VAR_12))
 FUNC_2 ("can't read register %d (%s)", VAR_16, FUNC_0 (VAR_16));

      for (VAR_15 = 0;
    VAR_15 < (FUNC_7 (VAR_7)
     - FUNC_9 (VAR_7, VAR_16)); VAR_15++)
 FUNC_8 ("  ");

      if (VAR_5 == VAR_0)
 for (VAR_15 =
      FUNC_9 (VAR_7,
       VAR_16) - FUNC_9 (VAR_7, VAR_16);
      VAR_15 < FUNC_9 (VAR_7, VAR_16); VAR_15++)
   FUNC_3 (VAR_8, "%02x", (unsigned char) VAR_12[VAR_15]);
      else
 for (VAR_15 = FUNC_9 (VAR_7, VAR_16) - 1;
      VAR_15 >= 0; VAR_15--)
   FUNC_3 (VAR_8, "%02x", (unsigned char) VAR_12[VAR_15]);
      FUNC_3 (VAR_8, " ");
      VAR_14++;
    }
  if (VAR_14 > 0)
    FUNC_3 (VAR_8, "\n");

  return VAR_16;
}
