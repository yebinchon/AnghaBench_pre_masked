
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_urec_bb_info {int gen; int kill; } ;
typedef int rtx ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 scalar_t__** VAR_3 ;

__attribute__((used)) static void
FUNC_7 (rtx VAR_4, rtx VAR_5, void *VAR_6)
{
  int VAR_7;
  int VAR_8;
  int VAR_9;
  struct df_urec_bb_info *VAR_10 = (struct df_urec_bb_info*) VAR_6;

  if (FUNC_0 (VAR_4) == VAR_2)
    VAR_4 = FUNC_4 (VAR_4);

  if (!FUNC_3 (VAR_4))
    return;


  VAR_8 = VAR_7 = FUNC_2 (VAR_4);
  if (VAR_7 < VAR_1)
    {
      VAR_8 +=VAR_3[VAR_7][FUNC_1 (VAR_4)];

      for (VAR_9 = VAR_7; VAR_9 < VAR_8; VAR_9++)
 {
   FUNC_6 (VAR_10->kill, VAR_9);

   if (FUNC_0 (VAR_5) != VAR_0)
     FUNC_6 (VAR_10->gen, VAR_9);
   else
     FUNC_5 (VAR_10->gen, VAR_9);
 }
    }
  else
    {
      FUNC_6 (VAR_10->kill, VAR_7);

      if (FUNC_0 (VAR_5) != VAR_0)
 FUNC_6 (VAR_10->gen, VAR_7);
      else
 FUNC_5 (VAR_10->gen, VAR_7);
    }
}
