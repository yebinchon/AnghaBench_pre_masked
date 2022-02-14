
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Lst ;
typedef int Boolean ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int VAR_3 ;
 int FUNC_10 (int ,char*,...) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

Boolean
FUNC_11(Lst VAR_7)
{
    int VAR_8;


    VAR_6 = FUNC_4(VAR_0);

    FUNC_7(VAR_7);
    FUNC_8(VAR_7);

    if (FUNC_0(VAR_1)) {
  FUNC_10(VAR_3, "#***# full graph\n");
  FUNC_9(1);
    }

    if (VAR_5) {





 return (FUNC_6());
    }







    (void)FUNC_6();
    while (!FUNC_5(VAR_6) || VAR_4 > 0) {
 FUNC_1();
 (void)FUNC_6();
    }

    VAR_8 = FUNC_2();





    if (FUNC_0(VAR_1))
  FUNC_10(VAR_3, "done: errors %d\n", VAR_8);
    if (VAR_8 == 0) {
 FUNC_3(VAR_7, VAR_2, &VAR_8);
 if (FUNC_0(VAR_1)) {
     FUNC_10(VAR_3, "done: errors %d\n", VAR_8);
     if (VAR_8)
  FUNC_9(4);
 }
    }
    return VAR_8 != 0;
}
