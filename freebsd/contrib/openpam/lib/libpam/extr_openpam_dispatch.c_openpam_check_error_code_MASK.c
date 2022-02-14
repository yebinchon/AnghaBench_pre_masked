
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int * VAR_24 ;

__attribute__((used)) static void
FUNC_1(int VAR_25, int VAR_26)
{

 if (VAR_26 == VAR_20 ||
     VAR_26 == VAR_21 ||
     VAR_26 == VAR_18 ||
     VAR_26 == VAR_8 ||
     VAR_26 == VAR_9 ||
     VAR_26 == VAR_17 ||
     VAR_26 == VAR_0)
  return;


 switch (VAR_25) {
 case 132:
  if (VAR_26 == VAR_7 ||
      VAR_26 == VAR_12 ||
      VAR_26 == VAR_2 ||
      VAR_26 == VAR_23 ||
      VAR_26 == VAR_15)
   return;
  break;
 case 128:
  if (VAR_26 == VAR_13 ||
      VAR_26 == VAR_11 ||
      VAR_26 == VAR_23 ||
      VAR_26 == VAR_10)
   return;
  break;
 case 133:
  if (VAR_26 == VAR_23 ||
      VAR_26 == VAR_7 ||
      VAR_26 == VAR_16 ||
      VAR_26 == VAR_1)
   return;
  break;
 case 129:
 case 130:
  if (VAR_26 == VAR_19)
   return;
  break;
 case 131:
  if (VAR_26 == VAR_17 ||
      VAR_26 == VAR_4 ||
      VAR_26 == VAR_6 ||
      VAR_26 == VAR_5 ||
      VAR_26 == VAR_3 ||
      VAR_26 == VAR_22)
   return;
  break;
 }

 FUNC_0(VAR_14, "%s(): unexpected return value %d",
     VAR_24[VAR_25], VAR_26);
}
