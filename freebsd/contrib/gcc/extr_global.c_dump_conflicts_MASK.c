
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t reg; int size; int hard_reg_preferences; int hard_reg_conflicts; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 TYPE_1__* VAR_1 ;
 size_t* VAR_2 ;
 int FUNC_2 (int *,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t* VAR_5 ;
 scalar_t__* VAR_6 ;

__attribute__((used)) static void
FUNC_3 (FILE *VAR_7)
{
  int VAR_8;
  int VAR_9;
  int VAR_10;
  VAR_10 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
    {
      if (VAR_6[VAR_1[VAR_2[VAR_8]].reg] >= 0)
 continue;
      VAR_10++;
    }
  FUNC_2 (VAR_7, ";; %d regs to allocate:", VAR_10);
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
    {
      int VAR_11;
      if (VAR_6[VAR_1[VAR_2[VAR_8]].reg] >= 0)
 continue;
      FUNC_2 (VAR_7, " %d", VAR_1[VAR_2[VAR_8]].reg);
      for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
 if (VAR_5[VAR_11] == VAR_2[VAR_8]
     && VAR_11 != VAR_1[VAR_2[VAR_8]].reg)
   FUNC_2 (VAR_7, "+%d", VAR_11);
      if (VAR_1[VAR_2[VAR_8]].size != 1)
 FUNC_2 (VAR_7, " (%d)", VAR_1[VAR_2[VAR_8]].size);
    }
  FUNC_2 (VAR_7, "\n");

  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
    {
      int VAR_12;
      FUNC_2 (VAR_7, ";; %d conflicts:", VAR_1[VAR_8].reg);
      for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
 if (FUNC_0 (VAR_12, VAR_8))
   FUNC_2 (VAR_7, " %d", VAR_1[VAR_12].reg);
      for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
 if (FUNC_1 (VAR_1[VAR_8].hard_reg_conflicts, VAR_12))
   FUNC_2 (VAR_7, " %d", VAR_12);
      FUNC_2 (VAR_7, "\n");

      VAR_9 = 0;
      for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
 if (FUNC_1 (VAR_1[VAR_8].hard_reg_preferences, VAR_12))
   VAR_9 = 1;

      if (! VAR_9)
 continue;
      FUNC_2 (VAR_7, ";; %d preferences:", VAR_1[VAR_8].reg);
      for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
 if (FUNC_1 (VAR_1[VAR_8].hard_reg_preferences, VAR_12))
   FUNC_2 (VAR_7, " %d", VAR_12);
      FUNC_2 (VAR_7, "\n");
    }
  FUNC_2 (VAR_7, "\n");
}
