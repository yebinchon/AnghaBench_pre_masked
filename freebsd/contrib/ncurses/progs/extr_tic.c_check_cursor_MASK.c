
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int term_names; } ;
typedef TYPE_1__ TERMTYPE ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 char* VAR_16 ;
 char* VAR_17 ;
 char* VAR_18 ;
 char* VAR_19 ;
 scalar_t__ FUNC_6 (int ,char) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(TERMTYPE *VAR_20)
{
    int VAR_21;
    char *VAR_22[4];

    if (VAR_11) {
 FUNC_5(VAR_20, "hard_copy");
    } else if (VAR_10) {
 FUNC_5(VAR_20, "generic_type");
    } else if (FUNC_6(VAR_20->term_names, '+') == 0) {
 int VAR_23 = 0;
 int VAR_24 = 0;
 if (FUNC_2(VAR_0))
     ++VAR_23;
 if (FUNC_2(VAR_1))
     VAR_23 = VAR_24 = 10;
 if (FUNC_2(VAR_3))
     ++VAR_23, ++VAR_24;
 if (FUNC_2(VAR_5))
     VAR_23 = VAR_24 = 10;
 if (FUNC_2(VAR_7))
     ++VAR_23, ++VAR_24;
 if (FUNC_2(VAR_19))
     ++VAR_24;
 if (FUNC_2(VAR_2))
     ++VAR_23;
 if (FUNC_2(VAR_8))
     ++VAR_23;
 if (FUNC_2(VAR_4))
     ++VAR_24;
 if (FUNC_2(VAR_6))
     ++VAR_24;
 if (VAR_24 < 2 && VAR_23 < 2) {
     FUNC_3("terminal lacks cursor addressing");
 } else {
     if (VAR_24 < 2)
  FUNC_3("terminal lacks cursor column-addressing");
     if (VAR_23 < 2)
  FUNC_3("terminal lacks cursor row-addressing");
 }
    }


    FUNC_0(VAR_15, VAR_12);
    FUNC_0(VAR_13, VAR_9);
    FUNC_0(VAR_15, VAR_13);


    FUNC_0(VAR_14, VAR_2);
    FUNC_0(VAR_18, VAR_8);
    FUNC_0(VAR_16, VAR_4);
    FUNC_0(VAR_17, VAR_6);





    VAR_21 = 0;
    if (FUNC_2(VAR_14)) {
 VAR_22[VAR_21++] = VAR_14;
    }
    if (FUNC_2(VAR_18)) {
 VAR_22[VAR_21++] = VAR_18;
    }
    if (FUNC_2(VAR_16)) {
 VAR_22[VAR_21++] = VAR_16;
    }
    if (FUNC_2(VAR_17)) {
 VAR_22[VAR_21++] = VAR_17;
    }
    if (VAR_21 == 4) {
 FUNC_4(VAR_22);
    } else if (VAR_21 != 0) {
 FUNC_1(VAR_14);
 FUNC_1(VAR_18);
 FUNC_1(VAR_16);
 FUNC_1(VAR_17);
    }

    VAR_21 = 0;
    if (FUNC_2(VAR_2)) {
 VAR_22[VAR_21++] = VAR_2;
    }
    if (FUNC_2(VAR_8)) {
 VAR_22[VAR_21++] = VAR_8;
    }
    if (FUNC_2(VAR_4)) {
 VAR_22[VAR_21++] = VAR_4;
    }
    if (FUNC_2(VAR_6)) {
 VAR_22[VAR_21++] = VAR_6;
    }
    if (VAR_21 == 4) {
 FUNC_4(VAR_22);
    } else if (VAR_21 != 0) {
 VAR_21 = 0;
 if (FUNC_2(VAR_2) && FUNC_7(VAR_2, "\n"))
     ++VAR_21;
 if (FUNC_2(VAR_4) && FUNC_7(VAR_4, "\b"))
     ++VAR_21;
 if (FUNC_2(VAR_8) && FUNC_8(VAR_8) > 1)
     ++VAR_21;
 if (FUNC_2(VAR_6) && FUNC_8(VAR_6) > 1)
     ++VAR_21;
 if (VAR_21) {
     FUNC_1(VAR_2);
     FUNC_1(VAR_8);
     FUNC_1(VAR_4);
     FUNC_1(VAR_6);
 }
    }
}
