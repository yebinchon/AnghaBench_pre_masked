
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * filter_pred_fn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;

__attribute__((used)) static filter_pred_fn_t FUNC_0(int VAR_14, int VAR_15,
          int VAR_16)
{
 filter_pred_fn_t VAR_17 = ((void*)0);

 switch (VAR_15) {
 case 8:
  if (VAR_14 == VAR_0 || VAR_14 == VAR_1)
   VAR_17 = VAR_4;
  else if (VAR_16)
   VAR_17 = VAR_8;
  else
   VAR_17 = VAR_12;
  break;
 case 4:
  if (VAR_14 == VAR_0 || VAR_14 == VAR_1)
   VAR_17 = VAR_3;
  else if (VAR_16)
   VAR_17 = VAR_7;
  else
   VAR_17 = VAR_11;
  break;
 case 2:
  if (VAR_14 == VAR_0 || VAR_14 == VAR_1)
   VAR_17 = VAR_2;
  else if (VAR_16)
   VAR_17 = VAR_6;
  else
   VAR_17 = VAR_10;
  break;
 case 1:
  if (VAR_14 == VAR_0 || VAR_14 == VAR_1)
   VAR_17 = VAR_5;
  else if (VAR_16)
   VAR_17 = VAR_9;
  else
   VAR_17 = VAR_13;
  break;
 }

 return VAR_17;
}
