
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int flagword ;
typedef int bfd ;
struct TYPE_2__ {int e_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2 (bfd *VAR_22)
{
  flagword VAR_23;

  switch (FUNC_0 (VAR_22))
    {
    default:
    case 152:
      VAR_23 = VAR_2;
      break;

    case 151:
      VAR_23 = VAR_2 | VAR_11;
      break;

    case 137:
      VAR_23 = VAR_3;
      break;

    case 150:
    case 145:
    case 144:
    case 143:
      VAR_23 = VAR_4;
      break;

    case 149:
      VAR_23 = VAR_4 | VAR_12;
      break;

    case 148:
      VAR_23 = VAR_4 | VAR_13;
      break;

    case 147:
      VAR_23 = VAR_4 | VAR_14;
      break;

    case 146:
      VAR_23 = VAR_4 | VAR_15;
      break;

    case 142:
      VAR_23 = VAR_4 | VAR_16;
      break;

    case 139:
      VAR_23 = VAR_7 | VAR_17;
      break;

    case 138:
      VAR_23 = VAR_7 | VAR_18;
      break;

    case 134:
      VAR_23 = VAR_7 | VAR_19;
      break;

    case 140:
    case 136:
    case 135:
    case 154:
    case 153:
      VAR_23 = VAR_7;
      break;

    case 141:
      VAR_23 = VAR_8;
      break;

    case 133:
      VAR_23 = VAR_10 | VAR_20;
      break;

    case 132:
      VAR_23 = VAR_9 | VAR_21;
      break;

    case 131:
      VAR_23 = VAR_5;
      break;

    case 129:
      VAR_23 = VAR_9;
      break;

    case 130:
      VAR_23 = VAR_6;
      break;

    case 128:
      VAR_23 = VAR_10;
      break;
    }
  FUNC_1 (VAR_22)->e_flags &= ~(VAR_0 | VAR_1);
  FUNC_1 (VAR_22)->e_flags |= VAR_23;

}
