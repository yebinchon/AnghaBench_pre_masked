
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
typedef struct archive archive ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*,char*) ;
 scalar_t__ FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 scalar_t__ FUNC_4 (struct archive_entry*) ;
 scalar_t__ FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 struct archive_entry* FUNC_7 () ;
 int FUNC_8 (struct archive_entry*) ;
 int FUNC_9 (struct archive_entry*,int ) ;
 int FUNC_10 (struct archive_entry*,int) ;
 int FUNC_11 (struct archive_entry*,int,int) ;
 int FUNC_12 (struct archive_entry*,int) ;
 scalar_t__ FUNC_13 (struct archive_entry*) ;
 int FUNC_14 (struct archive_entry*) ;
 int * FUNC_15 (struct archive*) ;
 int FUNC_16 (struct archive*) ;
 int FUNC_17 (struct archive*,char*,int) ;
 scalar_t__ FUNC_18 (struct archive*) ;
 struct archive* FUNC_19 () ;
 int FUNC_20 (struct archive*,struct archive_entry**) ;
 scalar_t__ FUNC_21 (struct archive*,char*,size_t) ;
 scalar_t__ FUNC_22 (struct archive*) ;
 scalar_t__ FUNC_23 (struct archive*) ;
 scalar_t__ FUNC_24 (struct archive*) ;
 int FUNC_25 (struct archive*) ;
 int FUNC_26 (struct archive*,char*,int) ;
 scalar_t__ FUNC_27 (struct archive*) ;
 scalar_t__ FUNC_28 (struct archive*,struct archive_entry*) ;
 struct archive* FUNC_29 () ;
 scalar_t__ FUNC_30 (struct archive*,char*,size_t,size_t*) ;
 int FUNC_31 (int) ;
 int FUNC_32 (int) ;
 int FUNC_33 (int,scalar_t__) ;
 int FUNC_34 (struct archive*,int,int) ;
 int FUNC_35 (char*,char*,int) ;
 int FUNC_36 (char*,int ) ;
 int FUNC_37 (char*) ;
 int FUNC_38 (char*) ;
 char* FUNC_39 (size_t) ;
 scalar_t__ FUNC_40 (char*,char*,int) ;
 int FUNC_41 (char*,char*) ;
 char* FUNC_42 (char*) ;
 int FUNC_43 (struct archive*) ;

__attribute__((used)) static void
FUNC_44(int (*VAR_6)(struct archive *))
{
 char VAR_7[64];
 struct archive_entry *VAR_8;
 struct archive *VAR_9;
 char *VAR_10;
 size_t VAR_11;
 size_t VAR_12 = 1000000;
 char *VAR_13;
 int VAR_14 = 0;

 VAR_13 = FUNC_39(VAR_12);


 FUNC_31((VAR_9 = FUNC_29()) != ((void*)0));
 FUNC_32(0 == (*VAR_6)(VAR_9));
 FUNC_32(0 == FUNC_24(VAR_9));
 FUNC_32(0 == FUNC_30(VAR_9, VAR_13, VAR_12, &VAR_11));




 FUNC_31((VAR_8 = FUNC_7()) != ((void*)0));
 FUNC_11(VAR_8, 1, 10);
 FUNC_31(1 == FUNC_5(VAR_8));
 FUNC_31(10 == FUNC_6(VAR_8));
 VAR_10 = FUNC_42("file");
 FUNC_1(VAR_8, VAR_10);
 FUNC_41(VAR_10, "XXXX");
 FUNC_38(VAR_10);
 FUNC_36("file", FUNC_8(VAR_8));
 FUNC_10(VAR_8, VAR_5 | 0755);
 FUNC_31((VAR_5 | 0755) == FUNC_4(VAR_8));
 FUNC_12(VAR_8, 8);

 FUNC_32(0 == FUNC_28(VAR_9, VAR_8));
 FUNC_3(VAR_8);
 FUNC_32(8 == FUNC_26(VAR_9, "12345678", 9));




 FUNC_31((VAR_8 = FUNC_7()) != ((void*)0));
 FUNC_11(VAR_8, 1, 10);
 FUNC_31(1 == FUNC_5(VAR_8));
 FUNC_31(10 == FUNC_6(VAR_8));
 VAR_10 = FUNC_42("file2");
 FUNC_1(VAR_8, VAR_10);
 FUNC_41(VAR_10, "XXXX");
 FUNC_38(VAR_10);
 FUNC_36("file2", FUNC_8(VAR_8));
 FUNC_10(VAR_8, VAR_5 | 0755);
 FUNC_31((VAR_5 | 0755) == FUNC_4(VAR_8));
 FUNC_12(VAR_8, 4);

 FUNC_32(0 == FUNC_28(VAR_9, VAR_8));
 FUNC_3(VAR_8);
 FUNC_32(4 == FUNC_26(VAR_9, "1234", 5));




 FUNC_31((VAR_8 = FUNC_7()) != ((void*)0));
 FUNC_1(VAR_8, "name");
 FUNC_12(VAR_8, 0);
 FUNC_9(VAR_8, VAR_0);
 FUNC_33(VAR_2, FUNC_28(VAR_9, VAR_8));
 FUNC_31(FUNC_15(VAR_9) == ((void*)0));
 FUNC_3(VAR_8);




 FUNC_31((VAR_8 = FUNC_7()) != ((void*)0));
 FUNC_1(VAR_8, "name");
 FUNC_14(VAR_8);
 FUNC_9(VAR_8, VAR_0);
 FUNC_33(VAR_1, FUNC_28(VAR_9, VAR_8));
 FUNC_31(FUNC_15(VAR_9) != ((void*)0));
 FUNC_3(VAR_8);




 FUNC_31((VAR_8 = FUNC_7()) != ((void*)0));
 FUNC_1(VAR_8, "name");
 FUNC_12(VAR_8, 0);
 FUNC_33(VAR_1, FUNC_28(VAR_9, VAR_8));
 FUNC_31(FUNC_15(VAR_9) != ((void*)0));
 FUNC_3(VAR_8);




 FUNC_31((VAR_8 = FUNC_7()) != ((void*)0));
 FUNC_12(VAR_8, 0);
 FUNC_9(VAR_8, VAR_0);
 FUNC_33(VAR_1, FUNC_28(VAR_9, VAR_8));
 FUNC_31(FUNC_15(VAR_9) != ((void*)0));
 FUNC_3(VAR_8);




 FUNC_31((VAR_8 = FUNC_7()) != ((void*)0));
 FUNC_11(VAR_8, 11, 110);
 FUNC_1(VAR_8, "dir");
 FUNC_10(VAR_8, VAR_4 | 0755);
 FUNC_12(VAR_8, 512);

 FUNC_32(0 == FUNC_28(VAR_9, VAR_8));
 FUNC_33(0, FUNC_13(VAR_8));
 FUNC_3(VAR_8);
 FUNC_34(VAR_9, 0, FUNC_26(VAR_9, "12345678", 9));



 FUNC_34(VAR_9, VAR_2, FUNC_25(VAR_9));
 FUNC_33(VAR_2, FUNC_27(VAR_9));






 {
  int VAR_15;
  for (VAR_15 = 80; VAR_15 < 150; VAR_15++) {
   if (FUNC_40(VAR_13 + VAR_15, "07070", 5) == 0) {
    VAR_14 = 1;
    VAR_13[VAR_15] = 'X';
    break;
   }
  }
 }
 FUNC_37("Unable to locate the second header for damage-recovery test.");
 FUNC_31(VAR_14 == 1);




 FUNC_31((VAR_9 = FUNC_19()) != ((void*)0));
 FUNC_32(0 == FUNC_23(VAR_9));
 FUNC_32(0 == FUNC_22(VAR_9));
 FUNC_32(0 == FUNC_21(VAR_9, VAR_13, VAR_11));

 if (!FUNC_34(VAR_9, 0, FUNC_20(VAR_9, &VAR_8))) {
  FUNC_18(VAR_9);
  return;
 }

 FUNC_33(1, FUNC_5(VAR_8));

 FUNC_31(0 == FUNC_6(VAR_8));
 FUNC_31(0 == FUNC_0(VAR_8));
 FUNC_31(0 == FUNC_2(VAR_8));
 FUNC_36("file", FUNC_8(VAR_8));
 FUNC_33((VAR_5 | 0755), FUNC_4(VAR_8));
 FUNC_33(8, FUNC_13(VAR_8));
 FUNC_32(8 == FUNC_17(VAR_9, VAR_7, 10));
 FUNC_35(VAR_7, "12345678", 8);
 FUNC_34(VAR_9, VAR_3, FUNC_20(VAR_9, &VAR_8));
 FUNC_36("name", FUNC_8(VAR_8));




 FUNC_34(VAR_9, VAR_2, FUNC_20(VAR_9, &VAR_8));
 FUNC_33(11, FUNC_5(VAR_8));
 FUNC_31(0 == FUNC_6(VAR_8));
 FUNC_31(0 == FUNC_0(VAR_8));
 FUNC_31(0 == FUNC_2(VAR_8));
 FUNC_36("dir", FUNC_8(VAR_8));
 FUNC_33((VAR_4 | 0755), FUNC_4(VAR_8));
 FUNC_33(0, FUNC_13(VAR_8));
 FUNC_34(VAR_9, 0, FUNC_17(VAR_9, VAR_7, 10));


 FUNC_34(VAR_9, 1, FUNC_20(VAR_9, &VAR_8));
 FUNC_34(VAR_9, VAR_2, FUNC_16(VAR_9));
 FUNC_33(VAR_2, FUNC_18(VAR_9));

 FUNC_38(VAR_13);
}
