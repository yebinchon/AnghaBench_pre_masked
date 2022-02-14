
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timeval {int member_1; int member_0; } ;
typedef int fd_set ;
typedef int fd_mask ;
struct TYPE_7__ {scalar_t__ didnetreceive; scalar_t__ gotDM; } ;
struct TYPE_6__ {char* supply; } ;


 int FUNC_0 (char,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*,int) ;
 TYPE_5__ VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int,char*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int *) ;
 int VAR_13 ;
 int FUNC_8 (int,int ) ;
 int * VAR_14 ;
 int FUNC_9 (int,int ,char*) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;
 int FUNC_13 (int *,int ,int) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_14 () ;
 TYPE_1__ VAR_17 ;
 int * VAR_18 ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (int,char*,int) ;
 int FUNC_17 (int,char*,int,int ) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*,int) ;
 int FUNC_20 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int) ;
 char* FUNC_24 (scalar_t__) ;
 char VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_25 (int) ;
 TYPE_1__ VAR_23 ;
 int * VAR_24 ;

int
FUNC_26(int VAR_25, int VAR_26, int VAR_27, int VAR_28, int VAR_29, int VAR_30)
{
    int VAR_31;
    int VAR_32 = 0;
    static struct timeval VAR_33 = { 0, 0 };
    int VAR_34 = -1;
    int VAR_35;

    if ((VAR_26 || VAR_25 || VAR_27) && VAR_15 > VAR_34)
 VAR_34 = VAR_15;

    if (VAR_29 && VAR_22 > VAR_34)
 VAR_34 = VAR_22;
    if (VAR_28 && VAR_21 > VAR_34)
 VAR_34 = VAR_21;
    VAR_35 = FUNC_8(VAR_34+1, VAR_5) * sizeof(fd_mask);
    if (VAR_35 > VAR_11) {
 if (VAR_14)
     FUNC_7(VAR_14);
 if (VAR_18)
     FUNC_7(VAR_18);
 if (VAR_24)
     FUNC_7(VAR_24);

 VAR_11 = VAR_35;
 if ((VAR_14 = (fd_set *)FUNC_11(VAR_11)) == ((void*)0))
     FUNC_6(1, "malloc");
 if ((VAR_18 = (fd_set *)FUNC_11(VAR_11)) == ((void*)0))
     FUNC_6(1, "malloc");
 if ((VAR_24 = (fd_set *)FUNC_11(VAR_11)) == ((void*)0))
     FUNC_6(1, "malloc");
 FUNC_13(VAR_14, 0, VAR_11);
 FUNC_13(VAR_18, 0, VAR_11);
 FUNC_13(VAR_24, 0, VAR_11);
    }

    if (VAR_26)
 FUNC_3(VAR_15, VAR_18);
    if (VAR_29)
 FUNC_3(VAR_22, VAR_18);
    if (VAR_28)
 FUNC_3(VAR_21, VAR_14);
    if (VAR_25)
 FUNC_3(VAR_15, VAR_14);
    if (VAR_27)
 FUNC_3(VAR_15, VAR_24);
    if ((VAR_31 = FUNC_20(VAR_34 + 1, VAR_14, VAR_18, VAR_24,
      (VAR_30 == 0)? (struct timeval *)0 : &VAR_33)) < 0) {
 if (VAR_31 == -1) {





     if (VAR_10 == VAR_0) {
  return 0;
     }

     FUNC_15("sleep(5) from telnet, after select: %s\r\n", FUNC_24(VAR_10));
     FUNC_22(5);
 }
 return 0;
    }




    if (FUNC_2(VAR_15, VAR_24)) {
 FUNC_1(VAR_15, VAR_24);
 VAR_7 = 1;
 (void) FUNC_25(1);
    }




    if (FUNC_2(VAR_15, VAR_14)) {
 int VAR_36;

 FUNC_1(VAR_15, VAR_14);
 VAR_36 = FUNC_18(&VAR_17);
 if (VAR_7) {
     int VAR_37;
     static int VAR_38 = 0, VAR_39 = 1;

     FUNC_9(VAR_15, VAR_6, (char *)&VAR_37);
     if (VAR_37) {
  VAR_31 = FUNC_17(VAR_15, VAR_17.supply, VAR_36, VAR_4);
  if ((VAR_31 == -1) && (VAR_10 == VAR_1)) {
      VAR_31 = FUNC_17(VAR_15, VAR_17.supply, VAR_36, 0);
      if (VAR_8.didnetreceive < VAR_8.gotDM) {
   VAR_7 = FUNC_23(VAR_15);
      }
  } else if (VAR_39 && VAR_31 > 0) {
      int VAR_40;
      VAR_40 = FUNC_17(VAR_15, VAR_17.supply + VAR_31, VAR_36 - VAR_31, VAR_4);
      if (VAR_40 == VAR_31 &&
   FUNC_12(VAR_17.supply, VAR_17.supply + VAR_31, VAR_40) == 0) {
   VAR_38 = 1;
   VAR_39 = 0;
      } else if (VAR_40 < 0) {
   VAR_38 = 0;
   VAR_39 = 0;
      } else
   VAR_31 += VAR_40;
  }
  if (VAR_38 && VAR_31 > 0) {
      int VAR_41;





      VAR_41 = FUNC_16(VAR_15, VAR_17.supply + VAR_31, VAR_36 - VAR_31);
      if (VAR_41 > 0)
   VAR_31 += VAR_41;
  }
     } else {
  VAR_31 = FUNC_17(VAR_15, VAR_17.supply, VAR_36, 0);
     }
 } else {
     VAR_31 = FUNC_17(VAR_15, VAR_17.supply, VAR_36, 0);
 }
 FUNC_21(VAR_9);



 if (VAR_31 < 0 && VAR_10 == VAR_3) {
     VAR_31 = 0;
 } else if (VAR_31 <= 0) {
     return -1;
 }
 if (VAR_16) {
     FUNC_0('<', VAR_17.supply, VAR_31);
 }
 if (VAR_31)
     FUNC_19(&VAR_17, VAR_31);
 VAR_32 = 1;
    }




    if (FUNC_2(VAR_21, VAR_14)) {
 FUNC_1(VAR_21, VAR_14);
 VAR_31 = FUNC_5(VAR_23.supply, FUNC_18(&VAR_23));
 if (VAR_31 < 0 && VAR_10 == VAR_2)
     VAR_31 = 0;
 if (VAR_31 < 0 && VAR_10 == VAR_3) {
     VAR_31 = 0;
 } else {

     if ((VAR_31 == 0) && FUNC_4(VAR_13) && FUNC_10(VAR_21)) {

  *VAR_23.supply = VAR_19;
  VAR_31 = 1;
     }
     if (VAR_31 <= 0) {
  return -1;
     }
     if (VAR_20) {
  FUNC_0('<', VAR_23.supply, VAR_31);
     }
     FUNC_19(&VAR_23, VAR_31);
 }
 VAR_32 = 1;
    }

    if (FUNC_2(VAR_15, VAR_18)) {
 FUNC_1(VAR_15, VAR_18);
 VAR_32 |= FUNC_14();
    }
    if (FUNC_2(VAR_22, VAR_18)) {
 FUNC_1(VAR_22, VAR_18);
 VAR_32 |= (FUNC_25(VAR_7|VAR_12) > 0);
    }

    return VAR_32;
}
