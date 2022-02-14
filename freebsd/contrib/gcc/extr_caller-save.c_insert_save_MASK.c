
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn_chain {int dead_or_set; } ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HARD_REG_SET ;


 size_t FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (size_t,int) ;
 scalar_t__ FUNC_8 (int,scalar_t__,int ) ;
 scalar_t__** VAR_3 ;
 int VAR_4 ;
 struct insn_chain* FUNC_9 (struct insn_chain*,int,int,scalar_t__) ;
 int VAR_5 ;
 int** VAR_6 ;
 scalar_t__** VAR_7 ;

__attribute__((used)) static int
FUNC_10 (struct insn_chain *VAR_8, int VAR_9, int VAR_10,
      HARD_REG_SET (*VAR_11), enum machine_mode *VAR_12)
{
  int VAR_13;
  unsigned int VAR_14;
  rtx VAR_15 = VAR_1;
  int VAR_16;
  unsigned int VAR_17 = 0;
  struct insn_chain *VAR_18;
  rtx VAR_19;







  FUNC_6 (VAR_7[VAR_10][1]);





  for (VAR_13 = VAR_0; VAR_13 > 0; VAR_13--)
    {
      int VAR_20;
      int VAR_21 = 1;
      if (VAR_7[VAR_10][VAR_13] == 0)
 continue;

      for (VAR_20 = 0; VAR_20 < VAR_13; VAR_20++)
 if (! FUNC_3 (*VAR_11, VAR_10 + VAR_20))
   {
     VAR_21 = 0;
     break;
   }

      if (! VAR_21)
 continue;

      VAR_17 = VAR_13;
      break;
    }

  VAR_19 = VAR_7 [VAR_10][VAR_17];
  if (VAR_12 [VAR_10] != VAR_2
      && VAR_12 [VAR_10] != FUNC_0 (VAR_19)
      && VAR_17 == (unsigned int) VAR_3[VAR_10][VAR_12 [VAR_10]])
    VAR_19 = FUNC_4 (VAR_19, VAR_12[VAR_10], 0);
  else
    VAR_19 = FUNC_5 (VAR_19);
  VAR_15 = FUNC_8 (VAR_2, VAR_19,
       FUNC_7 (FUNC_0 (VAR_19),
      VAR_10));
  VAR_16 = VAR_6[VAR_10][FUNC_0 (VAR_19)];
  VAR_18 = FUNC_9 (VAR_8, VAR_9, VAR_16, VAR_15);


  for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++)
    {
      FUNC_1 (VAR_4, VAR_10 + VAR_14);
      FUNC_2 (&VAR_18->dead_or_set, VAR_10 + VAR_14);
      VAR_5++;
    }


  return VAR_17 - 1;
}
