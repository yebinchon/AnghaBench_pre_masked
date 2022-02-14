
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;







 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int FUNC_1 (int ) ;
 int VAR_13 ;

 int VAR_14 ;
 int VAR_15 ;



__attribute__((used)) static void
FUNC_2 (int VAR_16, int VAR_17)
{
  int VAR_18 = 0;
  FUNC_0 (VAR_3);
  if (VAR_14 & VAR_3)
    VAR_18 += 8;
  switch (VAR_16)
    {
    case 137:
      FUNC_0 (0);
      if (VAR_14)
 FUNC_1 (VAR_12[VAR_7.reg + VAR_18]);
      else
 FUNC_1 (VAR_11[VAR_7.reg + VAR_18]);
      break;
    case 128:
      FUNC_1 (VAR_8[VAR_7.reg + VAR_18]);
      break;
    case 136:
      FUNC_1 (VAR_9[VAR_7.reg + VAR_18]);
      break;
    case 130:
      FUNC_1 (VAR_10[VAR_7.reg + VAR_18]);
      break;
    case 129:
    case 135:
    case 134:
    case 133:
    case 132:
      FUNC_0 (VAR_4);
      if (VAR_14 & VAR_4)
 FUNC_1 (VAR_10[VAR_7.reg + VAR_18]);
      else if ((VAR_17 & VAR_0) || VAR_16 != 129)
 FUNC_1 (VAR_9[VAR_7.reg + VAR_18]);
      else
 FUNC_1 (VAR_8[VAR_7.reg + VAR_18]);
      VAR_15 |= (VAR_13 & VAR_2);
      break;
    case 131:
      if (VAR_5 == VAR_6)
 FUNC_1 (VAR_10[VAR_7.reg + VAR_18]);
      else
 FUNC_1 (VAR_9[VAR_7.reg + VAR_18]);
      break;
    default:
      FUNC_1 (VAR_1);
      break;
    }
}
