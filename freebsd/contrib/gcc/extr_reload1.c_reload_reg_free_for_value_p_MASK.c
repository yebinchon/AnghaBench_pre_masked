
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef enum reload_type { ____Placeholder_reload_type } reload_type ;
struct TYPE_2__ {scalar_t__ reg_rtx; scalar_t__ in; scalar_t__ out; int when_needed; int opnum; scalar_t__ out_reg; } ;


 size_t FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 unsigned int** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7 (int VAR_7, int VAR_8, int VAR_9,
        enum reload_type VAR_10, rtx VAR_11, rtx VAR_12,
        int VAR_13, int VAR_14)
{
  int VAR_15;



  int VAR_16 = 0;
  int VAR_17;
  int VAR_18 = 0;

  if (FUNC_3 (VAR_5, VAR_8))
    return 0;

  if (VAR_12 == VAR_2)
    {
      VAR_18 = 1;
      VAR_12 = VAR_1;
    }
  switch (VAR_10)
    {
    case 132:

      VAR_15 = VAR_18 ? 0 : 1;
      break;
    case 128:
      VAR_15 = VAR_18 ? 1 : VAR_0 * 5 + 5;
      break;






    case 138:
      VAR_15 = VAR_9 * 4 + 2;
      break;
    case 136:
      VAR_15 = VAR_9 * 4 + 3;
      break;
    case 137:


      VAR_15 = VAR_18 ? VAR_9 * 4 + 4 : VAR_0 * 4 + 3;
      break;
    case 134:


      VAR_15 = VAR_0 * 4 + 1;
      break;
    case 133:


      VAR_15 = VAR_18 ? VAR_0 * 4 + 2 : VAR_0 * 4 + 3;
      break;
    case 131:
      VAR_15 = VAR_0 * 4 + 4 + VAR_9;
      break;
    case 129:
      VAR_15 = VAR_0 * 4 + 5 + VAR_9;
      break;
    default:
      VAR_15 = VAR_0 * 5 + 5;
    }

  for (VAR_17 = 0; VAR_17 < VAR_4; VAR_17++)
    {
      rtx VAR_19 = VAR_6[VAR_17].reg_rtx;
      if (VAR_19 && FUNC_2 (VAR_19)
   && ((unsigned) VAR_8 - FUNC_6 (VAR_19)
       <= VAR_3[FUNC_1 (VAR_19)][FUNC_0 (VAR_19)] - (unsigned) 1)
   && VAR_17 != VAR_13)
 {
   rtx VAR_20 = VAR_6[VAR_17].in;




   if (FUNC_6 (VAR_19) != VAR_7)
     VAR_20 = VAR_1;
   if (! VAR_20 || ! FUNC_5 (VAR_20, VAR_11)
       || VAR_6[VAR_17].out || VAR_12)
     {
       int VAR_21;
       switch (VAR_6[VAR_17].when_needed)
  {
  case 132:
    VAR_21 = 0;
    break;
  case 138:






    if (VAR_10 == 136 && VAR_13 == VAR_17 + 1
        && VAR_14



        && ! VAR_6[VAR_13].out)
      continue;



    if (VAR_10 == 137 && VAR_9 == VAR_6[VAR_17].opnum
        && VAR_14

        && ! VAR_6[VAR_13].out)
      continue;
    VAR_21 = VAR_6[VAR_17].opnum * 4 + 2;
    break;
  case 136:
    if (VAR_10 == 137 && VAR_9 == VAR_6[VAR_17].opnum
        && VAR_14
        && ! VAR_6[VAR_13].out)
      continue;
    VAR_21 = VAR_6[VAR_17].opnum * 4 + 3;
    break;
  case 137:
    VAR_21 = VAR_6[VAR_17].opnum * 4 + 4;
    VAR_16 = 1;
    break;


  case 134:
    if (VAR_10 == 133 && VAR_13 == VAR_17 + 1
        && VAR_14
        && ! VAR_6[VAR_13].out)
      continue;
    VAR_21 = VAR_0 * 4 + 1;
    break;
  case 133:
    VAR_21 = VAR_0 * 4 + 2;
    VAR_16 = 1;
    break;
  case 135:
    VAR_21 = VAR_0 * 4 + 3;
    break;
  case 130:


    VAR_21 = VAR_0 * 4 + 4;
    break;



  case 131:
    if (VAR_10 == 129 && VAR_13 == VAR_17 + 1
        && VAR_14
        && ! VAR_6[VAR_13].out)
      continue;
    VAR_21 = VAR_0 * 4 + 4 + VAR_6[VAR_17].opnum;
    break;
  case 129:
    VAR_21 = VAR_0 * 4 + 5 + VAR_6[VAR_17].opnum;
    break;
  case 128:


    if (! VAR_6[VAR_17].in || FUNC_5 (VAR_20, VAR_11))
      {
        VAR_21 = VAR_0 * 4 + 4;

        if (FUNC_4 (VAR_6[VAR_17].out))
   VAR_21 = VAR_0 * 4 + 3;

        break;
      }
    VAR_21 = 1;




    if (VAR_12)
      return 0;
    break;
  default:
    return 0;
  }
       if ((VAR_15 >= VAR_21
     && (! VAR_6[VAR_17].in || VAR_6[VAR_17].out
         || ! FUNC_5 (VAR_20, VAR_11)))
    || (VAR_12 && VAR_6[VAR_13].out_reg
        && VAR_21 >= VAR_0 * 4 + 3))
  return 0;
     }
 }
    }


  if (VAR_16 && VAR_12 && FUNC_4 (VAR_12))
    return 0;

  return 1;
}
