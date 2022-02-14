
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; scalar_t__ sa_flags; int sa_mask; } ;
typedef int fenv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,struct sigaction*,int *) ;
 int FUNC_14 (int *) ;
 int* VAR_9 ;
 int VAR_10 ;
 int FUNC_15 (int*) ;

__attribute__((used)) static void
FUNC_16(void)
{
 fenv_t VAR_11;

 struct sigaction VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned VAR_17;

 FUNC_14(&VAR_12.sa_mask);
 VAR_12.sa_flags = 0;
 VAR_12.sa_handler = VAR_10;
 for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
  for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++) {
   VAR_13 = VAR_9[VAR_17];

   if (VAR_13 == VAR_4)
    VAR_16 = VAR_2 | VAR_5;
   else
    VAR_16 = VAR_0 ^ VAR_13;






   switch(FUNC_11()) {
   case 0:





    if (VAR_14 == 1)
     FUNC_3((FUNC_5(VAR_13) &
         VAR_0) == 0);
    FUNC_12(VAR_16);
    FUNC_3(FUNC_8(VAR_3) == 0);
    FUNC_3(FUNC_7(&VAR_11) == 0);
    FUNC_3(FUNC_9(VAR_1) == 0);
    FUNC_12(VAR_13);
    FUNC_3(FUNC_8(VAR_6) == 0);

    if (VAR_14 == 1)
     FUNC_3(FUNC_13(VAR_8, &VAR_12, ((void*)0)) ==
         0);
    FUNC_3(FUNC_10(&VAR_11) == 0);
    FUNC_3(FUNC_6() == VAR_3);
    FUNC_3(FUNC_9(VAR_0) ==
        (VAR_13 | VAR_16));

    FUNC_3(VAR_14 == 0);
    FUNC_2(0);
   default:
    FUNC_3(FUNC_15(&VAR_15) > 0);




    if (!FUNC_1(VAR_15))
     FUNC_4(1, "child aborted\n");
    FUNC_3(FUNC_0(VAR_15) == 0);
    break;
   case -1:
    FUNC_3(0);
   }
  }
 }
 FUNC_3(FUNC_9(VAR_1) == 0);
}
