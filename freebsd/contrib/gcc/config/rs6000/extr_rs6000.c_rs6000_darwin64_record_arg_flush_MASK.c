
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_3__ {int intoffset; int words; int use_stack; } ;
typedef int HOST_WIDE_INT ;
typedef TYPE_1__ CUMULATIVE_ARGS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int,unsigned int) ;
 int FUNC_4 (int,int ,int ) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_5 (CUMULATIVE_ARGS *VAR_9,
      HOST_WIDE_INT VAR_10, rtx VAR_11[], int *VAR_12)
{
  enum machine_mode VAR_13;
  unsigned int VAR_14;
  unsigned int VAR_15, VAR_16;
  int VAR_17, VAR_18, VAR_19;
  rtx VAR_20;

  if (VAR_9->intoffset == -1)
    return;

  VAR_19 = VAR_9->intoffset;
  VAR_9->intoffset = -1;






  if (VAR_19 % VAR_1 != 0)
    {
      VAR_13 = FUNC_4 (VAR_1 - VAR_19 % VAR_1,
     VAR_5, 0);
      if (VAR_13 == VAR_2)
 {




  VAR_19 = VAR_19 & -VAR_1;
  VAR_13 = VAR_8;
 }
    }
  else
    VAR_13 = VAR_8;

  VAR_15 = VAR_19 & -VAR_1;
  VAR_16 = (VAR_10 + VAR_1 - 1) & -VAR_1;
  VAR_18 = (VAR_16 - VAR_15) / VAR_1;
  VAR_17 = VAR_9->words + VAR_19 / VAR_1;

  if (VAR_18 > 0 && VAR_18 > VAR_4 - VAR_17)
    VAR_9->use_stack = 1;

  VAR_18 = FUNC_1 (VAR_18, VAR_4 - VAR_17);
  if (VAR_18 <= 0)
    return;

  VAR_19 /= VAR_0;
  do
    {
      VAR_14 = VAR_3 + VAR_17;
      VAR_20 = FUNC_3 (VAR_13, VAR_14);
      VAR_11[(*VAR_12)++] =
 FUNC_2 (VAR_7, VAR_20, FUNC_0 (VAR_19));

      VAR_17 += 1;
      VAR_19 = (VAR_19 | (VAR_6-1)) + 1;
      VAR_13 = VAR_8;
      VAR_18 -= 1;
    }
  while (VAR_18 > 0);
}
