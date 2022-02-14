
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*,char*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 struct archive_entry* FUNC_7 () ;
 int FUNC_8 (struct archive_entry*) ;
 int FUNC_9 (struct archive_entry*,int) ;
 int FUNC_10 (struct archive_entry*,int,int ) ;
 int FUNC_11 (struct archive_entry*,int) ;
 int FUNC_12 (struct archive_entry*) ;
 int FUNC_13 (struct archive*) ;
 int FUNC_14 (struct archive*,char*,int) ;
 int FUNC_15 (struct archive*) ;
 int FUNC_16 (struct archive*) ;
 struct archive* FUNC_17 () ;
 int FUNC_18 (struct archive*,struct archive_entry**) ;
 int FUNC_19 (struct archive*,char*,int) ;
 int FUNC_20 (struct archive*) ;
 int FUNC_21 (struct archive*) ;
 int FUNC_22 (struct archive*) ;
 int FUNC_23 (struct archive*) ;
 int FUNC_24 (struct archive*,char*,int) ;
 int FUNC_25 (struct archive*) ;
 int FUNC_26 (struct archive*,struct archive_entry*) ;
 struct archive* FUNC_27 () ;
 int FUNC_28 (struct archive*,char*) ;
 int FUNC_29 (struct archive*) ;
 int FUNC_30 (int) ;
 int FUNC_31 (int,int ) ;
 int FUNC_32 (struct archive*,int,int ) ;
 int FUNC_33 (char*,char*,int) ;
 int FUNC_34 (char*,int ) ;

__attribute__((used)) static void
FUNC_35(void)
{
 char VAR_4[64];
 struct archive_entry *VAR_5;
 struct archive *VAR_6;


 FUNC_30((VAR_6 = FUNC_27()) != ((void*)0));
 FUNC_32(VAR_6, VAR_2, FUNC_29(VAR_6));
 FUNC_32(VAR_6, VAR_2, FUNC_22(VAR_6));
 FUNC_32(VAR_6, VAR_2,
     FUNC_28(VAR_6, L"test.tar"));




 FUNC_30((VAR_5 = FUNC_7()) != ((void*)0));
 FUNC_10(VAR_5, 1, 0);
 FUNC_1(VAR_5, L"file");
 FUNC_9(VAR_5, VAR_3 | 0755);
 FUNC_11(VAR_5, 8);
 FUNC_32(VAR_6, VAR_2, FUNC_26(VAR_6, VAR_5));
 FUNC_3(VAR_5);
 FUNC_32(VAR_6, 8, FUNC_24(VAR_6, "12345678", 9));




 FUNC_30((VAR_5 = FUNC_7()) != ((void*)0));
 FUNC_1(VAR_5, L"file2");
 FUNC_9(VAR_5, VAR_3 | 0755);
 FUNC_11(VAR_5, 819200);
 FUNC_32(VAR_6, VAR_2, FUNC_26(VAR_6, VAR_5));
 FUNC_3(VAR_5);


 FUNC_32(VAR_6, VAR_2, FUNC_23(VAR_6));
 FUNC_31(VAR_2, FUNC_25(VAR_6));




 FUNC_30((VAR_6 = FUNC_17()) != ((void*)0));
 FUNC_32(VAR_6, VAR_2, FUNC_21(VAR_6));
 FUNC_32(VAR_6, VAR_2, FUNC_20(VAR_6));
 FUNC_32(VAR_6, VAR_2,
     FUNC_19(VAR_6, L"test.tar", 512));

 FUNC_32(VAR_6, VAR_2, FUNC_18(VAR_6, &VAR_5));
 FUNC_31(1, FUNC_5(VAR_5));
 FUNC_31(0, FUNC_6(VAR_5));
 FUNC_31(0, FUNC_0(VAR_5));
 FUNC_31(0, FUNC_2(VAR_5));
 FUNC_34(L"file", FUNC_8(VAR_5));
 FUNC_30((VAR_3 | 0755) == FUNC_4(VAR_5));
 FUNC_31(8, FUNC_12(VAR_5));
 FUNC_32(VAR_6, 8, FUNC_14(VAR_6, VAR_4, 10));
 FUNC_33(VAR_4, "12345678", 8);

 FUNC_32(VAR_6, VAR_2, FUNC_18(VAR_6, &VAR_5));
 FUNC_34(L"file2", FUNC_8(VAR_5));
 FUNC_30((VAR_3 | 0755) == FUNC_4(VAR_5));
 FUNC_31(819200, FUNC_12(VAR_5));
 FUNC_32(VAR_6, VAR_2, FUNC_15(VAR_6));


 FUNC_32(VAR_6, VAR_0, FUNC_18(VAR_6, &VAR_5));
 FUNC_32(VAR_6, VAR_2, FUNC_13(VAR_6));
 FUNC_31(VAR_2, FUNC_16(VAR_6));




 FUNC_30((VAR_6 = FUNC_17()) != ((void*)0));
 FUNC_32(VAR_6, VAR_2, FUNC_21(VAR_6));
 FUNC_32(VAR_6, VAR_2, FUNC_20(VAR_6));
 FUNC_32(VAR_6, VAR_1,
     FUNC_19(VAR_6, L"nonexistent.tar", 512));
 FUNC_32(VAR_6, VAR_2, FUNC_13(VAR_6));
 FUNC_31(VAR_2, FUNC_16(VAR_6));

}
