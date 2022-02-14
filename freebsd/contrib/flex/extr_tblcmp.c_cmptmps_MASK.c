
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int*,int,scalar_t__,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t* VAR_9 ;
 int VAR_10 ;
 int* VAR_11 ;
 scalar_t__ VAR_12 ;

void FUNC_3 ()
{
 int VAR_13[VAR_0 + 1];
 int *VAR_14 = VAR_13, VAR_15, VAR_16;
 int VAR_17, VAR_18;

 VAR_7 = VAR_6 * VAR_4 + VAR_8;

 if (VAR_12) {



  VAR_5 = FUNC_0 (VAR_10, VAR_9, VAR_4);
 }

 else
  VAR_5 = VAR_4;

 while (VAR_3 + VAR_6 + 1 >= VAR_2)
  FUNC_1 ();



 for (VAR_15 = 1; VAR_15 <= VAR_6; ++VAR_15) {

  VAR_17 = 0;

  for (VAR_16 = 1; VAR_16 <= VAR_4; ++VAR_16) {
   VAR_18 = VAR_11[VAR_4 * VAR_15 + VAR_16];

   if (VAR_12) {




    if (VAR_9[VAR_16] > 0) {
     VAR_14[VAR_9[VAR_16]] = VAR_18;

     if (VAR_18 > 0)
      ++VAR_17;
    }
   }

   else {
    VAR_14[VAR_16] = VAR_18;

    if (VAR_18 > 0)
     ++VAR_17;
   }
  }
  FUNC_2 (VAR_14, VAR_5, VAR_3 + VAR_15 + 1, VAR_1,
    VAR_17);
 }
}
