
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; scalar_t__ sa_flags; int sa_mask; } ;


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
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,struct sigaction*,int *) ;
 int FUNC_12 (int *) ;
 int* VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (int*) ;

__attribute__((used)) static void
FUNC_14(void)
{
 struct sigaction VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned VAR_16;

 FUNC_2((FUNC_6() & VAR_0) == 0);
 FUNC_2((FUNC_5(VAR_4|VAR_5) & VAR_0) == 0);
 FUNC_2((FUNC_5(VAR_6) & VAR_0) ==
     (VAR_4 | VAR_5));
 FUNC_2((FUNC_4(VAR_5) & VAR_0) ==
     (VAR_4 | VAR_5 | VAR_6));
 FUNC_2((FUNC_6() & VAR_0) == (VAR_4 | VAR_6));
 FUNC_2((FUNC_4(VAR_1) & VAR_0) ==
     (VAR_4 | VAR_6));
 FUNC_2((FUNC_6() & VAR_0) == 0);

 FUNC_12(&VAR_11.sa_mask);
 VAR_11.sa_flags = 0;
 VAR_11.sa_handler = VAR_10;
 for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
  for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
   VAR_12 = VAR_9[VAR_16];

   if (VAR_12 == VAR_3)
    VAR_14 = VAR_2 | VAR_4;
   else
    VAR_14 = VAR_0 ^ VAR_12;






   switch(FUNC_9()) {
   case 0:
    FUNC_2((FUNC_6() & VAR_0) == 0);
    FUNC_2((FUNC_5(VAR_12)
        & VAR_0) == 0);
    FUNC_2(FUNC_6() == VAR_12);
    FUNC_10(VAR_14);
    FUNC_2(FUNC_7(VAR_14) == 0);
    FUNC_2(FUNC_8(VAR_0) == VAR_14);

    FUNC_2(FUNC_11(VAR_8, &VAR_11, ((void*)0)) == 0);
    switch (VAR_13) {
    case 0:
     FUNC_10(VAR_12);
    case 1:
     FUNC_7(VAR_12);
    default:
     FUNC_2(0);
    }
    FUNC_2(0);
   default:
    FUNC_2(FUNC_13(&VAR_15) > 0);




    if (!FUNC_1(VAR_15))
     FUNC_3(1, "child aborted\n");
    FUNC_2(FUNC_0(VAR_15) == 0);
    break;
   case -1:
    FUNC_2(0);
   }
  }
 }
 FUNC_2(FUNC_8(VAR_1) == 0);
}
