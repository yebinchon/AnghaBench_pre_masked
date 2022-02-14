
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
struct TYPE_2__ {scalar_t__ reg_rtx; scalar_t__ in; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int VAR_2 ;
 size_t FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,int) ;
 scalar_t__ FUNC_15 (scalar_t__,int,int) ;
 int FUNC_16 (scalar_t__,int) ;
 int FUNC_17 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_18 (scalar_t__,int ) ;
 int* VAR_4 ;
 scalar_t__ FUNC_19 (scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_20 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 scalar_t__* VAR_9 ;

__attribute__((used)) static void
FUNC_22 (rtx VAR_10, rtx VAR_11, rtx VAR_12)
{
  rtx VAR_13, VAR_14, VAR_15, VAR_16;
  int VAR_17, VAR_18;
  enum rtx_code VAR_19 = FUNC_0 (VAR_11);

  if (VAR_19 != VAR_2)
    {
      const char *VAR_20 = FUNC_1 (VAR_19);
      for (VAR_17 = FUNC_2 (VAR_19) - 1; VAR_17 >= 0; VAR_17--)
 {
   if (VAR_20[VAR_17] == 'e')
     FUNC_22 (VAR_10, FUNC_14 (VAR_11, VAR_17), VAR_12);
   else if (VAR_20[VAR_17] == 'E')
     {
       for (VAR_18 = FUNC_16 (VAR_11, VAR_17) - 1; VAR_18 >= 0; VAR_18--)
  FUNC_22 (VAR_10, FUNC_15 (VAR_11, VAR_17, VAR_18),
       VAR_12);
     }
 }
      return;
    }

  if (VAR_9[FUNC_10 (VAR_11)] < 0)
    return;



  for (VAR_13 = FUNC_9 (VAR_10); VAR_13; VAR_13 = FUNC_9 (VAR_13))
    {
      VAR_19 = FUNC_0 (VAR_13);
      if (VAR_19 == VAR_0 || VAR_19 == VAR_1)
 return;
      if (!FUNC_3 (VAR_13))
 continue;
      if (FUNC_19 (VAR_11, FUNC_8 (VAR_13)))
 break;
      if (FUNC_18 (VAR_11, FUNC_8 (VAR_13)))
 return;
    }
  if (! VAR_13 || FUNC_4 (VAR_13) < VAR_5)
    return;

  VAR_14 = FUNC_21 (VAR_13);
  if (! VAR_14)
    return;
  VAR_15 = FUNC_12 (VAR_14);
  if (!FUNC_11 (VAR_15)
      || ! FUNC_20 (VAR_15, VAR_11))
    return;
  if (! FUNC_19 (VAR_15, FUNC_8 (VAR_10)))
    {


      for (VAR_16 = FUNC_7 (VAR_10); VAR_16; VAR_16 = FUNC_7 (VAR_16))
 {
   if (FUNC_6 (VAR_16))
     break;
   if (! FUNC_3 (VAR_16))
     continue;
   if (FUNC_18 (VAR_15, FUNC_8 (VAR_16)))
     {




       if (VAR_16 == VAR_12)
  {
    for (VAR_18 = VAR_3 - 1; VAR_18 >= 0; VAR_18--)
      if ((VAR_8[VAR_18].reg_rtx == VAR_15 && VAR_6[VAR_18])
   || VAR_7[VAR_18] == VAR_15)
        return;
    for (VAR_18 = VAR_3 - 1; VAR_18 >= 0; VAR_18--)
      if (VAR_8[VAR_18].in && VAR_8[VAR_18].reg_rtx == VAR_15)
        break;
    if (VAR_18 >= 0)
      break;
  }
       return;
     }
   if (FUNC_5 (VAR_16))
     break;



   if (VAR_16 == VAR_12)
     {
       for (VAR_18 = VAR_3 - 1; VAR_18 >= 0; VAR_18--)
  if ((VAR_8[VAR_18].reg_rtx == VAR_15 && VAR_6[VAR_18])
      || VAR_7[VAR_18] == VAR_15)
    return;





     }
   if (FUNC_19 (VAR_15, FUNC_8 (VAR_16)))
     break;
 }
    }
  FUNC_22 (VAR_13, FUNC_13 (VAR_14), VAR_12);
  VAR_4[FUNC_10 (VAR_15)] = -1;
  FUNC_17 (VAR_13);
}
