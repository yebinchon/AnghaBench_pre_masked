
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn_chain {int dead_or_set; } ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int ,int) ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (size_t,int) ;
 scalar_t__ FUNC_8 (int,int ,scalar_t__) ;
 scalar_t__** VAR_2 ;
 int VAR_3 ;
 struct insn_chain* FUNC_9 (struct insn_chain*,int,int,scalar_t__) ;
 int VAR_4 ;
 int** VAR_5 ;
 scalar_t__** VAR_6 ;

__attribute__((used)) static int
FUNC_10 (struct insn_chain *VAR_7, int VAR_8, int VAR_9,
  int VAR_10, enum machine_mode *VAR_11)
{
  int VAR_12, VAR_13;
  rtx VAR_14 = VAR_0;
  int VAR_15;
  unsigned int VAR_16 = 0;
  struct insn_chain *VAR_17;
  rtx VAR_18;







  FUNC_6 (VAR_6[VAR_9][1]);





  for (VAR_12 = VAR_10; VAR_12 > 0; VAR_12--)
    {
      int VAR_19;
      int VAR_20 = 1;

      if (VAR_6[VAR_9][VAR_12] == 0)
 continue;

      for (VAR_19 = 0; VAR_19 < VAR_12; VAR_19++)
 if (! FUNC_3 (VAR_3, VAR_9 + VAR_19))
   {
     VAR_20 = 0;
     break;
   }

      if (! VAR_20)
 continue;

      VAR_16 = VAR_12;
      break;
    }

  VAR_18 = VAR_6 [VAR_9][VAR_16];
  if (VAR_11 [VAR_9] != VAR_1
      && VAR_11 [VAR_9] != FUNC_1 (VAR_18)
      && VAR_16 == (unsigned int) VAR_2[VAR_9][VAR_11 [VAR_9]])
    VAR_18 = FUNC_4 (VAR_18, VAR_11[VAR_9], 0);
  else
    VAR_18 = FUNC_5 (VAR_18);
  VAR_14 = FUNC_8 (VAR_1,
       FUNC_7 (FUNC_1 (VAR_18),
      VAR_9), VAR_18);
  VAR_15 = VAR_5[VAR_9][FUNC_1 (VAR_18)];
  VAR_17 = FUNC_9 (VAR_7, VAR_8, VAR_15, VAR_14);


  for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
    {
      FUNC_0 (VAR_3, VAR_9 + VAR_13);
      FUNC_2 (&VAR_17->dead_or_set, VAR_9 + VAR_13);
      VAR_4--;
    }


  return VAR_16 - 1;
}
