
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;


 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (int ,int *,scalar_t__) ;

void FUNC_1(
 int VAR_7,
 int VAR_8,
 int VAR_9,
 int VAR_10
 )
{
 int VAR_11;
 int VAR_12, VAR_13;

 if (VAR_9 == VAR_1 || VAR_8 == 0)
  VAR_11 = 10;
 else
  VAR_11 = VAR_8 / 100;
 VAR_13 = 0;
 for (VAR_12 = 0 ; VAR_12 < VAR_7 * 8; VAR_12++) {
  switch (VAR_9) {

  case 129:
   if (VAR_10)
    VAR_3[VAR_2++] = ~VAR_5[VAR_13];
   else
    VAR_3[VAR_2++] = ~VAR_6[VAR_13];
   break;

  case 128:
   if (VAR_10)
    VAR_3[VAR_2++] = ~VAR_6[VAR_13];
   else
    VAR_3[VAR_2++] = ~VAR_5[VAR_13];
   break;

  default:
   VAR_3[VAR_2++] = ~0;
  }
  if (VAR_2 >= VAR_0) {
   FUNC_0(VAR_4, VAR_3, VAR_0);
   VAR_2 = 0;
  }
  VAR_13 = (VAR_13 + VAR_11) % 80;
 }
}
