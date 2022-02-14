
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum reload_type { ____Placeholder_reload_type } reload_type ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {int when_needed; int opnum; size_t mode; scalar_t__ reg_rtx; } ;
typedef int HARD_REG_SET ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 () ;
 unsigned int** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 TYPE_1__* VAR_13 ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3 (unsigned int VAR_14, int VAR_15,
    enum reload_type VAR_16, enum machine_mode VAR_17)
{
  unsigned int VAR_18 = VAR_0[VAR_14][VAR_17];
  unsigned int VAR_19, VAR_20, VAR_21;
  int VAR_22;




  int VAR_23 = 0;
  int VAR_24 = 0;
  HARD_REG_SET *VAR_25;

  switch (VAR_16)
    {
    case 128:
      VAR_25 = &VAR_2;
      break;

    case 136:
      VAR_25 = &VAR_5[VAR_15];
      break;

    case 138:
      VAR_23 = 1;
      VAR_25 = &VAR_3[VAR_15];
      break;

    case 129:
      VAR_25 = &VAR_12[VAR_15];
      break;

    case 131:
      VAR_23 = 1;
      VAR_25 = &VAR_10[VAR_15];
      break;

    case 133:
      VAR_25 = &VAR_7;
      break;

    case 134:
      VAR_24 = 1;
      VAR_25 = &VAR_8;
      break;

    case 132:
      VAR_25 = &VAR_9;
      VAR_24 = 1;
      break;

    case 137:
      VAR_25 = &VAR_4[VAR_15];
      break;

    case 130:
      VAR_25 = &VAR_11[VAR_15];
      break;

    case 135:
      VAR_25 = &VAR_6;
      break;
    default:
      FUNC_1 ();
    }
  VAR_19 = VAR_14;
  VAR_20 = VAR_14 + VAR_18;
  if (VAR_23 || VAR_24)
    {
      for (VAR_22 = VAR_1 - 1; VAR_22 >= 0; VAR_22--)
 {
   if (VAR_13[VAR_22].when_needed == VAR_16
       && (VAR_24 || VAR_13[VAR_22].opnum == VAR_15)
       && VAR_13[VAR_22].reg_rtx)
     {
       unsigned int VAR_26 = FUNC_2 (VAR_13[VAR_22].reg_rtx);
       unsigned int VAR_27
  = (VAR_26
     + VAR_0[VAR_26][VAR_13[VAR_22].mode]);



       if (VAR_26 <= VAR_19 && VAR_27 > VAR_19)
  VAR_19 = VAR_27;


       if (VAR_26 > VAR_19 && VAR_26 < VAR_20)
  VAR_20 = VAR_26;
     }
 }
    }

  for (VAR_21 = VAR_19; VAR_21 < VAR_20; VAR_21++)
    FUNC_0 (*VAR_25, VAR_21);
}
