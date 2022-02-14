
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ valueT ;
typedef int symbolS ;
typedef scalar_t__ segT ;
typedef int operatorT ;
typedef scalar_t__ offsetT ;
typedef int fragS ;
struct TYPE_3__ {scalar_t__ X_add_number; int X_op; int * X_add_symbol; int * X_op_symbol; } ;
typedef TYPE_1__ expressionS ;
typedef scalar_t__ bfd_vma ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,scalar_t__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int **,scalar_t__*,scalar_t__*,int **) ;
 scalar_t__ VAR_4 ;

int
FUNC_3 (expressionS *VAR_5)
{

  valueT VAR_6 = VAR_5->X_add_number;
  symbolS *VAR_7 = VAR_5->X_add_symbol;
  symbolS *VAR_8 = VAR_5->X_op_symbol;
  operatorT VAR_9 = VAR_5->X_op;
  valueT VAR_10, VAR_11;
  segT VAR_12, VAR_13;
  fragS *VAR_14, *VAR_15;
  bfd_vma VAR_16;

  switch (VAR_9)
    {
    default:
      return 0;

    case 147:
    case 133:
      VAR_10 = 0;
      break;

    case 130:
    case 129:
      if (!FUNC_2 (&VAR_7, &VAR_10, &VAR_12, &VAR_14))
 return 0;

      break;

    case 128:
    case 149:
    case 139:
      if (!FUNC_2 (&VAR_7, &VAR_10, &VAR_12, &VAR_14))
 return 0;

      if (VAR_12 != VAR_1)
 return 0;

      if (VAR_9 == 139)
 VAR_10 = !VAR_10;
      else if (VAR_9 == 128)
 VAR_10 = -VAR_10;
      else
 VAR_10 = ~VAR_10;
      VAR_9 = 147;
      break;

    case 135:
    case 146:
    case 136:
    case 141:
    case 132:
    case 150:
    case 148:
    case 151:
    case 152:
    case 153:
    case 131:
    case 145:
    case 134:
    case 137:
    case 142:
    case 144:
    case 143:
    case 140:
    case 138:
      if (!FUNC_2 (&VAR_7, &VAR_10, &VAR_12, &VAR_14)
   || !FUNC_2 (&VAR_8, &VAR_11, &VAR_13, &VAR_15))
 return 0;



      if (VAR_9 == 153)
 {
   if (VAR_13 == VAR_1)
     {
       VAR_6 += VAR_11;
       VAR_9 = 130;
       break;
     }
   else if (VAR_12 == VAR_1)
     {
       VAR_6 += VAR_10;
       VAR_10 = VAR_11;
       VAR_12 = VAR_13;
       VAR_7 = VAR_8;
       VAR_9 = 130;
       break;
     }
 }
      else if (VAR_9 == 131)
 {
   if (VAR_13 == VAR_1)
     {
       VAR_6 -= VAR_11;
       VAR_9 = 130;
       break;
     }
 }
      VAR_16 = 0;
      if (!(VAR_12 == VAR_1
        && VAR_13 == VAR_1)
   && !(VAR_9 == 145 || VAR_9 == 134)
   && !((VAR_9 == 131
  || VAR_9 == 137 || VAR_9 == 142 || VAR_9 == 144 || VAR_9 == 143)
        && VAR_12 == VAR_13
        && (VAR_2
     || FUNC_1 (VAR_14, VAR_15, &VAR_16))
        && (VAR_12 != VAR_3 || VAR_10 == VAR_11)
        && (VAR_12 != VAR_4 || VAR_7 == VAR_8)))
 {
   if ((VAR_12 == VAR_1 && VAR_10 == 0)
       || (VAR_13 == VAR_1 && VAR_11 == 0))
     {
       if (VAR_9 == 151 || VAR_9 == 150)
  {
    if (VAR_13 != VAR_1 || VAR_11 != 0)
      {
        VAR_12 = VAR_13;
        VAR_10 = VAR_11;
        VAR_7 = VAR_8;
      }
    VAR_9 = 130;
    break;
  }
       else if (VAR_9 == 141 || VAR_9 == 132)
  {
    if (VAR_12 != VAR_1 || VAR_10 != 0)
      {
        VAR_9 = 130;
        break;
      }
  }
       else if (VAR_9 != 135
         && VAR_9 != 148 && VAR_9 != 152)
         return 0;
     }
   else if (VAR_9 == 135
     && VAR_12 == VAR_1 && VAR_10 == 1)
     {
       VAR_12 = VAR_13;
       VAR_10 = VAR_11;
       VAR_7 = VAR_8;
       VAR_9 = 130;
       break;
     }
   else if ((VAR_9 == 135 || VAR_9 == 146)
     && VAR_13 == VAR_1 && VAR_11 == 1)
     {
       VAR_9 = 130;
       break;
     }
   else if (VAR_10 != VAR_11
     || ((VAR_12 != VAR_3 || VAR_13 != VAR_3)
         && (VAR_12 != VAR_4
      || VAR_13 != VAR_4
      || VAR_7 != VAR_8)))
     return 0;
   else if (VAR_9 == 152 || VAR_9 == 150)
     {
       VAR_9 = 130;
       break;
     }
   else if (VAR_9 != 151 && VAR_9 != 148)
     return 0;
 }

      VAR_11 += VAR_16 / VAR_0;
      switch (VAR_9)
 {
 case 153: VAR_10 += VAR_11; break;
 case 131: VAR_10 -= VAR_11; break;
 case 135: VAR_10 *= VAR_11; break;
 case 146:
   if (VAR_11 == 0)
     return 0;
   VAR_10 = (offsetT) VAR_10 / (offsetT) VAR_11;
   break;
 case 136:
   if (VAR_11 == 0)
     return 0;
   VAR_10 = (offsetT) VAR_10 % (offsetT) VAR_11;
   break;
 case 141: VAR_10 <<= VAR_11; break;
 case 132: VAR_10 >>= VAR_11; break;
 case 150: VAR_10 |= VAR_11; break;
 case 148: VAR_10 |= ~VAR_11; break;
 case 151: VAR_10 ^= VAR_11; break;
 case 152: VAR_10 &= VAR_11; break;
 case 145:
 case 134:
   VAR_10 = (VAR_10 == VAR_11
    && VAR_12 == VAR_13
    && (VAR_2 || VAR_14 == VAR_15)
    && (VAR_12 != VAR_4
        || VAR_7 == VAR_8)
    ? ~ (valueT) 0 : 0);
   if (VAR_9 == 134)
     VAR_10 = ~VAR_10;
   break;
 case 137:
   VAR_10 = (offsetT) VAR_10 < (offsetT) VAR_11 ? ~ (valueT) 0 : 0;
   break;
 case 142:
   VAR_10 = (offsetT) VAR_10 <= (offsetT) VAR_11 ? ~ (valueT) 0 : 0;
   break;
 case 144:
   VAR_10 = (offsetT) VAR_10 >= (offsetT) VAR_11 ? ~ (valueT) 0 : 0;
   break;
 case 143:
   VAR_10 = (offsetT) VAR_10 > (offsetT) VAR_11 ? ~ (valueT) 0 : 0;
   break;
 case 140: VAR_10 = VAR_10 && VAR_11; break;
 case 138: VAR_10 = VAR_10 || VAR_11; break;
 default: FUNC_0 ();
 }

      VAR_9 = 147;
      break;
    }

  if (VAR_9 == 130)
    {
      if (VAR_12 == VAR_1)
 VAR_9 = 147;
      else if (VAR_12 == VAR_3 && VAR_6 == 0)
 VAR_9 = 133;
      else if (VAR_7 != VAR_5->X_add_symbol)
 VAR_6 += VAR_10;
      VAR_5->X_add_symbol = VAR_7;
    }
  VAR_5->X_op = VAR_9;

  if (VAR_9 == 147 || VAR_9 == 133)
    VAR_6 += VAR_10;
  VAR_5->X_add_number = VAR_6;

  return 1;
}
