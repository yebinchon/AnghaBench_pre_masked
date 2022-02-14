
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct bitmap {int dummy; } ;
typedef int bbuf ;
typedef struct bitmap BIGNUM ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (struct bitmap*,int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct bitmap*,int *) ;
 int FUNC_6 (struct bitmap*) ;
 int FUNC_7 (struct bitmap*,int) ;
 int FUNC_8 (struct bitmap*) ;
 int FUNC_9 (struct bitmap*,int) ;
 struct bitmap* FUNC_10 () ;
 int FUNC_11 (struct bitmap*) ;
 int FUNC_12 (struct bitmap*) ;
 int FUNC_13 (struct bitmap*,int) ;
 int VAR_0 ;
 int FUNC_14 () ;
 int FUNC_15 (char*) ;
 int FUNC_16 (struct bitmap*,int) ;
 int FUNC_17 (struct bitmap*) ;
 int FUNC_18 (struct bitmap*,int *,size_t) ;
 scalar_t__ FUNC_19 (struct bitmap*) ;
 size_t FUNC_20 (struct bitmap*) ;
 struct bitmap* FUNC_21 () ;
 int FUNC_22 (struct bitmap*,int) ;
 int FUNC_23 (struct bitmap*,int) ;
 int FUNC_24 (struct bitmap*,int *,int) ;
 int FUNC_25 (struct bitmap*) ;
 int FUNC_26 (int *,int,int) ;
 int FUNC_27 (char*,int,int,int) ;

void
FUNC_28(void)
{
 struct bitmap *VAR_1;
 BIGNUM *VAR_2;
 size_t VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7;
 u_char VAR_8[1024], VAR_9[1024];
 int VAR_10;

 FUNC_15("bitmap_new");
 VAR_1 = FUNC_21();
 FUNC_3(VAR_1, ((void*)0));
 VAR_2 = FUNC_10();
 FUNC_3(VAR_2, ((void*)0));
 FUNC_14();

 FUNC_15("bitmap_set_bit / bitmap_test_bit");
 for (VAR_4 = -1; VAR_4 < VAR_0; VAR_4++) {
  for (VAR_5 = -1; VAR_5 < VAR_0; VAR_5++) {
   for (VAR_6 = -1; VAR_6 < VAR_0; VAR_6++) {
    FUNC_25(VAR_1);
    FUNC_6(VAR_2);

    FUNC_27("set %d/%d/%d", VAR_4, VAR_5, VAR_6);

    if (VAR_4 >= 0) {
     FUNC_0(FUNC_22(VAR_1, VAR_4), 0);
     FUNC_0(FUNC_13(VAR_2, VAR_4), 1);
    }
    if (VAR_5 >= 0) {
     FUNC_0(FUNC_22(VAR_1, VAR_5), 0);
     FUNC_0(FUNC_13(VAR_2, VAR_5), 1);
    }
    if (VAR_6 >= 0) {
     FUNC_0(FUNC_22(VAR_1, VAR_6), 0);
     FUNC_0(FUNC_13(VAR_2, VAR_6), 1);
    }


    FUNC_27("match %d/%d/%d", VAR_4, VAR_5, VAR_6);
    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
     FUNC_0(FUNC_9(VAR_2, VAR_7),
         FUNC_23(VAR_1, VAR_7));
    }


    FUNC_27("length %d/%d/%d", VAR_4, VAR_5, VAR_6);
    FUNC_0(FUNC_11(VAR_2),
        (int)FUNC_19(VAR_1));
    FUNC_0(FUNC_12(VAR_2),
        (int)FUNC_20(VAR_1));


    FUNC_27("serialise %d/%d/%d",
        VAR_4, VAR_5, VAR_6);
    VAR_3 = FUNC_20(VAR_1);
    FUNC_26(VAR_8, 0xfc, sizeof(VAR_8));
    FUNC_0(FUNC_24(VAR_1, VAR_8,
        sizeof(VAR_8)), 0);
    for (VAR_7 = VAR_3; VAR_7 < (int)sizeof(VAR_8); VAR_7++)
     FUNC_4(VAR_8[VAR_7], 0xfc);
    VAR_10 = FUNC_5(VAR_2, VAR_9);
    FUNC_1(VAR_10, 0);
    FUNC_0(VAR_10, (int)VAR_3);
    FUNC_2(VAR_8, VAR_9, VAR_3);


    FUNC_27("deserialise %d/%d/%d",
        VAR_4, VAR_5, VAR_6);
    FUNC_25(VAR_1);
    FUNC_0(FUNC_18(VAR_1, VAR_9,
        VAR_3), 0);
    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
     FUNC_0(FUNC_9(VAR_2, VAR_7),
         FUNC_23(VAR_1, VAR_7));
    }


    FUNC_27("clear %d/%d/%d",
        VAR_4, VAR_5, VAR_6);
    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
     FUNC_0(FUNC_22(VAR_1, VAR_7), 0);
     FUNC_0(FUNC_13(VAR_2, VAR_7), 1);
    }
    if (VAR_4 >= 0) {
     FUNC_16(VAR_1, VAR_4);
     FUNC_7(VAR_2, VAR_4);
    }
    if (VAR_5 >= 0) {
     FUNC_16(VAR_1, VAR_5);
     FUNC_7(VAR_2, VAR_5);
    }
    if (VAR_6 >= 0) {
     FUNC_16(VAR_1, VAR_6);
     FUNC_7(VAR_2, VAR_6);
    }
    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
     FUNC_0(FUNC_9(VAR_2, VAR_7),
         FUNC_23(VAR_1, VAR_7));
    }
   }
  }
 }
 FUNC_17(VAR_1);
 FUNC_8(VAR_2);
 FUNC_14();
}
