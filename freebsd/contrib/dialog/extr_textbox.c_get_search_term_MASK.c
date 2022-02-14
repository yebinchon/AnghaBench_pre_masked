
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;
typedef int DLG_KEYS_BINDING ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_8 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ,int,int,int ,int ,int ) ;
 scalar_t__ FUNC_7 (char*,int*,int,int,int) ;
 int FUNC_8 (int *,int*) ;
 int* FUNC_9 (char const*) ;
 int FUNC_10 (char const*,int,int ) ;
 int * FUNC_11 (int *,int,int,int,int) ;
 int FUNC_12 (int *,char*,int *) ;
 int FUNC_13 (int *,char*,int,int ,int,int,int,int,int) ;
 int FUNC_14 (int *,int,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_18 (int *,char const*,int const) ;
 int FUNC_19 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_20(WINDOW *VAR_13, char *VAR_14, int VAR_15, int VAR_16)
{

    static DLG_KEYS_BINDING VAR_17[] = {
 129,
 130,
 131,
 132
    };


    int VAR_18, VAR_19;
    int VAR_20, VAR_21;
    int VAR_22, VAR_23;
    int VAR_24 = 0;
    int VAR_25 = 0;
    int VAR_26 = 0;
    bool VAR_27 = VAR_8;
    int VAR_28 = VAR_3;
    const char *VAR_29 = FUNC_2("Search");
    int VAR_30 = FUNC_4(VAR_29);
    const int *VAR_31;
    int VAR_32;
    WINDOW *VAR_33;

    FUNC_14(VAR_13, VAR_19, VAR_18);

    VAR_22 = 1 + (2 * VAR_7);
    VAR_23 = VAR_30 + (2 * (VAR_7 + 2));
    VAR_23 = FUNC_0(VAR_23, 30);
    VAR_23 = FUNC_1(VAR_23, FUNC_15(VAR_13) - 2 * VAR_7);
    VAR_30 = FUNC_1(VAR_30, VAR_23 - (2 * (VAR_7 + 1)));

    VAR_20 = (VAR_16 - VAR_23) / 2;
    VAR_21 = (VAR_15 - VAR_22) / 2;
    VAR_33 = FUNC_11(VAR_13,
      VAR_22, VAR_23,
      VAR_19 + VAR_21, VAR_18 + VAR_20);
    FUNC_16(VAR_33, VAR_8);
    FUNC_12(VAR_33, "searchbox", VAR_17);

    FUNC_6(VAR_33, 0, 0, VAR_22, VAR_23,
    VAR_9,
    VAR_11,
    VAR_10);
    FUNC_3(VAR_33, VAR_12);
    (void) FUNC_19(VAR_33, 0, (VAR_23 - VAR_30) / 2);

    VAR_31 = FUNC_9(VAR_29);
    VAR_32 = FUNC_10(VAR_29, VAR_30, 0);
    (void) FUNC_18(VAR_33, VAR_29 + VAR_31[0], VAR_31[VAR_32] - VAR_31[0]);

    VAR_23 -= 2;
    VAR_24 = FUNC_4(VAR_14);

    while (VAR_28 == VAR_3) {
 if (!VAR_27) {
     VAR_25 = FUNC_8(VAR_33, &VAR_26);
     if (VAR_26) {
  switch (VAR_26) {

  case 128:
      VAR_28 = VAR_0;
      continue;

  case 133:
      VAR_28 = VAR_2;
      continue;
  }
     } else if (VAR_25 == VAR_5) {
  VAR_28 = VAR_1;
  continue;
     } else if (VAR_25 == VAR_4) {
  FUNC_17(50);
  continue;
     }
 }
 if (FUNC_7(VAR_14, &VAR_24, VAR_25, VAR_26, VAR_27)) {
     FUNC_13(VAR_33, VAR_14, VAR_24, VAR_9,
       1, 1, VAR_23, VAR_6, VAR_27);
     VAR_27 = VAR_6;
 }
    }
    FUNC_5(VAR_33);
    return VAR_28;
}
