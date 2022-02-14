
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_12 ;







 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int* VAR_26 ;
 int * VAR_27 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  int VAR_28;

  for (VAR_28 = 0; VAR_28 < VAR_14; VAR_28++)
    {
      switch (FUNC_0 (VAR_28))
 {
 case 130:
 case 129:
 case 132:
   if (FUNC_1 (VAR_28) <= 4)
     VAR_26[VAR_28] = 1 << (int) VAR_18;
   else if (FUNC_1 (VAR_28) == 8)
     VAR_26[VAR_28] = 1 << (int) VAR_5;
   else if (FUNC_1 (VAR_28) == 16)
     VAR_26[VAR_28] = 1 << (int) VAR_22;
   else if (FUNC_1 (VAR_28) == 32)
     VAR_26[VAR_28] = 1 << (int) VAR_16;
   else
     VAR_26[VAR_28] = 0;
   break;
 case 128:
   if (FUNC_1 (VAR_28) <= 4)
     VAR_26[VAR_28] = 1 << (int)VAR_17;
   else if (FUNC_1 (VAR_28) == 8)
     VAR_26[VAR_28] = 1 << (int)VAR_4;
   break;
 case 131:
 case 133:
   if (FUNC_1 (VAR_28) <= 4)
     VAR_26[VAR_28] = 1 << (int) VAR_17;
   else if (FUNC_1 (VAR_28) == 8)
     VAR_26[VAR_28] = 1 << (int) VAR_4;
   else if (FUNC_1 (VAR_28) == 16)
     VAR_26[VAR_28] = 1 << (int) VAR_21;
   else if (FUNC_1 (VAR_28) == 32)
     VAR_26[VAR_28] = 1 << (int) VAR_15;
   else
     VAR_26[VAR_28] = 0;
   break;
 case 134:
   if (VAR_28 == (int) VAR_2 || VAR_28 == (int) VAR_0)
     VAR_26[VAR_28] = 1 << (int) VAR_1;
   else
     VAR_26[VAR_28] = 1 << (int) VAR_3;
   break;
 default:
   VAR_26[VAR_28] = 0;
   break;
 }
    }

  if (VAR_19)
    VAR_25 = VAR_24;
  else
    VAR_25 = VAR_23;


  for (VAR_28 = 0; VAR_28 < VAR_7; VAR_28++)
    {
      if (VAR_28 < 16 && VAR_20)
 VAR_27[VAR_28] = VAR_12;
      else if (VAR_28 < 32 || VAR_28 == VAR_10)
 VAR_27[VAR_28] = VAR_11;
      else if (VAR_28 < 64)
 VAR_27[VAR_28] = VAR_9;
      else if (VAR_28 < 96)
 VAR_27[VAR_28] = VAR_6;
      else if (VAR_28 < 100)
 VAR_27[VAR_28] = VAR_8;
      else
 VAR_27[VAR_28] = VAR_13;
    }
}
