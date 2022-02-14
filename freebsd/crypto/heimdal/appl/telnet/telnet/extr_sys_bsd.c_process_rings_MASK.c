
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timeval {int member_0; } ;
struct TYPE_7__ {scalar_t__ didnetreceive; scalar_t__ gotDM; } ;
struct TYPE_6__ {char* supply; } ;


 int FUNC_0 (char,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (scalar_t__,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*,int) ;
 TYPE_5__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (int,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (scalar_t__,int ,char*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_10 () ;
 TYPE_1__ VAR_16 ;
 int VAR_17 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (scalar_t__,char*,int) ;
 int FUNC_13 (scalar_t__,char*,int,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 () ;
 char VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_20 (int) ;
 TYPE_1__ VAR_22 ;
 int VAR_23 ;

int
FUNC_21(int VAR_24,
       int VAR_25,
       int VAR_26,
       int VAR_27,
       int VAR_28,
       int VAR_29)
{
    int VAR_30;





    int VAR_31 = 0;
    static struct timeval VAR_32 = { 0 };

    if (VAR_14 >= VAR_4
 || VAR_21 >= VAR_4
 || VAR_20 >= VAR_4)
 FUNC_6 (1, "fd too large");

    if (VAR_25) {
 FUNC_3(VAR_14, &VAR_17);
    }
    if (VAR_28) {
 FUNC_3(VAR_21, &VAR_17);
    }
    if (VAR_27) {
 FUNC_3(VAR_20, &VAR_13);
    }
    if (VAR_24) {
 FUNC_3(VAR_14, &VAR_13);
    }

    if (VAR_26) {
 FUNC_3(VAR_14, &VAR_23);
    }

    if ((VAR_30 = FUNC_16(VAR_4, &VAR_13, &VAR_17, &VAR_23,
   (VAR_29 == 0)? (struct timeval *)0 : &VAR_32)) < 0) {
 if (VAR_30 == -1) {





     if (VAR_10 == VAR_0) {
  return 0;
     }

     FUNC_11("sleep(5) from telnet, after select\r\n");
     FUNC_18(5);
 }
 return 0;
    }




    if (FUNC_2(VAR_14, &VAR_23)) {
 FUNC_1(VAR_14, &VAR_23);
 VAR_7 = 1;
 FUNC_20(1);
    }




    if (FUNC_2(VAR_14, &VAR_13)) {
 int VAR_33;

 FUNC_1(VAR_14, &VAR_13);
 VAR_33 = FUNC_14(&VAR_16);
 if (VAR_7) {
     int VAR_34;
     static int VAR_35 = 0, VAR_36 = 1;

     FUNC_7(VAR_14, VAR_6, (char *)&VAR_34);
     if (VAR_34) {
  VAR_30 = FUNC_13(VAR_14, VAR_16.supply, VAR_33, VAR_5);
  if ((VAR_30 == -1) && (VAR_10 == VAR_1)) {
      VAR_30 = FUNC_13(VAR_14, VAR_16.supply, VAR_33, 0);
      if (VAR_8.didnetreceive < VAR_8.gotDM) {
   VAR_7 = FUNC_19();
      }
  } else if (VAR_36 && VAR_30 > 0) {
      int VAR_37;
      VAR_37 = FUNC_13(VAR_14, VAR_16.supply + VAR_30, VAR_33 - VAR_30, VAR_5);
      if (VAR_37 == VAR_30 &&
    FUNC_9(VAR_16.supply, VAR_16.supply + VAR_30, VAR_37) == 0) {
   VAR_35 = 1;
   VAR_36 = 0;
      } else if (VAR_37 < 0) {
   VAR_35 = 0;
   VAR_36 = 0;
      } else
   VAR_30 += VAR_37;
  }
  if (VAR_35 && VAR_30 > 0) {
      int VAR_38;





      VAR_38 = FUNC_12(VAR_14, VAR_16.supply + VAR_30, VAR_33 - VAR_30);
      if (VAR_38 > 0)
   VAR_30 += VAR_38;
  }
     } else {
  VAR_30 = FUNC_13(VAR_14, VAR_16.supply, VAR_33, 0);
     }
 } else {
     VAR_30 = FUNC_13(VAR_14, VAR_16.supply, VAR_33, 0);
 }
 FUNC_17(VAR_9);



 if (VAR_30 < 0 && VAR_10 == VAR_3) {
     VAR_30 = 0;
 } else if (VAR_30 <= 0) {
     return -1;
 }
 if (VAR_15) {
     FUNC_0('<', VAR_16.supply, VAR_30);
 }
 if (VAR_30)
     FUNC_15(&VAR_16, VAR_30);
 VAR_31 = 1;
    }




    if (FUNC_2(VAR_20, &VAR_13)) {
 FUNC_1(VAR_20, &VAR_13);
 VAR_30 = FUNC_5(VAR_22.supply, FUNC_14(&VAR_22));
 if (VAR_30 < 0 && VAR_10 == VAR_2)
     VAR_30 = 0;
 if (VAR_30 < 0 && VAR_10 == VAR_3) {
     VAR_30 = 0;
 } else {

     if ((VAR_30 == 0) && FUNC_4(VAR_12) && FUNC_8(VAR_20)) {

  *VAR_22.supply = VAR_18;
  VAR_30 = 1;
     }
     if (VAR_30 <= 0) {
  return -1;
     }
     if (VAR_19) {
  FUNC_0('<', VAR_22.supply, VAR_30);
     }
     FUNC_15(&VAR_22, VAR_30);
 }
 VAR_31 = 1;
    }

    if (FUNC_2(VAR_14, &VAR_17)) {
 FUNC_1(VAR_14, &VAR_17);
 VAR_31 |= FUNC_10();
    }
    if (FUNC_2(VAR_21, &VAR_17)) {
 FUNC_1(VAR_21, &VAR_17);
 VAR_31 |= (FUNC_20(VAR_7|VAR_11) > 0);
    }

    return VAR_31;
}
