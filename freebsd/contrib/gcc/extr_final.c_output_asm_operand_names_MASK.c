
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int rtx ;


 char* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int ,int*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_6 (rtx *VAR_2, int *VAR_3, int VAR_4)
{
  int VAR_5 = 0;
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
    {
      int VAR_7;
      rtx VAR_8 = VAR_2[VAR_3[VAR_6]];
      tree VAR_9 = FUNC_4 (VAR_8, &VAR_7);

      FUNC_3 (VAR_1, "%c%s",
        VAR_5 ? ',' : '\t', VAR_5 ? "" : VAR_0);
      VAR_5 = 1;
      if (VAR_9)
 {
   FUNC_3 (VAR_1, "%s",
     VAR_7 ? "*" : "");
   FUNC_5 (VAR_1, VAR_9);
   VAR_5 = 1;
 }
      else if (FUNC_2 (VAR_8) && FUNC_0 (VAR_8)
        && FUNC_0 (VAR_8) != FUNC_1 (VAR_8))
 FUNC_3 (VAR_1, " tmp%i", FUNC_0 (VAR_8));
    }
}
