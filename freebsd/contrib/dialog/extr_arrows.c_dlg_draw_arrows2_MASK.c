
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int chtype ;
typedef int WINDOW ;
struct TYPE_2__ {scalar_t__ title; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int,int,int,int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (int *,char*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *,int,int) ;
 int FUNC_14 (int *) ;

void
FUNC_15(WINDOW *VAR_13,
   int VAR_14,
   int VAR_15,
   int VAR_16,
   int VAR_17,
   int VAR_18,
   chtype VAR_19,
   chtype VAR_20)
{
    chtype VAR_21 = FUNC_4(VAR_13);
    int VAR_22, VAR_23;
    int VAR_24 = FUNC_6(VAR_13);
    bool VAR_25 = VAR_8;
    bool VAR_26 = (FUNC_11(VAR_13) == VAR_11);

    FUNC_7(VAR_13, VAR_23, VAR_22);




    if (VAR_10.title && VAR_26 && (VAR_17 - FUNC_5(VAR_13)) < VAR_6) {
 int VAR_27 = (VAR_24 - FUNC_3(VAR_10.title)) / 2;
 int VAR_28 = VAR_16 + 5;
 if (VAR_28 > VAR_27)
     VAR_25 = VAR_3;
    }

    if (VAR_25) {
 (void) FUNC_13(VAR_13, VAR_17, VAR_16);
 if (VAR_14) {
     FUNC_1(VAR_13, FUNC_8(VAR_12, VAR_19));
     (void) FUNC_0(VAR_13, VAR_2);
     (void) FUNC_10(VAR_13, "(-)");
 } else {
     FUNC_1(VAR_13, VAR_19);
     (void) FUNC_12(VAR_13, FUNC_2(VAR_1), VAR_7);
 }
    }
    FUNC_9(VAR_17, VAR_16 - 1, 6, VAR_5);

    (void) FUNC_13(VAR_13, VAR_18, VAR_16);
    if (VAR_15) {
 FUNC_1(VAR_13, FUNC_8(VAR_9, VAR_20));
 (void) FUNC_0(VAR_13, VAR_0);
 (void) FUNC_10(VAR_13, "(+)");
    } else {
 FUNC_1(VAR_13, VAR_20);
 (void) FUNC_12(VAR_13, FUNC_2(VAR_1), VAR_7);
    }
    FUNC_9(VAR_18, VAR_16 - 1, 6, VAR_4);

    (void) FUNC_13(VAR_13, VAR_23, VAR_22);
    FUNC_14(VAR_13);

    FUNC_1(VAR_13, VAR_21);
}
