
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
 int FUNC_0 (struct archive_entry*,char*) ;
 int FUNC_1 (struct archive_entry*) ;
 struct archive_entry* FUNC_2 () ;
 int FUNC_3 (struct archive_entry*,int ) ;
 int FUNC_4 (struct archive_entry*,char*) ;
 int FUNC_5 (struct archive_entry*,int) ;
 char* FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*) ;
 int FUNC_8 (struct archive*,char*,int) ;
 int FUNC_9 (struct archive*) ;
 struct archive* FUNC_10 () ;
 int FUNC_11 (struct archive*,struct archive_entry**) ;
 int FUNC_12 (struct archive*,char*,size_t) ;
 int FUNC_13 (struct archive*) ;
 int FUNC_14 (struct archive*) ;
 int FUNC_15 (struct archive*) ;
 int FUNC_16 (struct archive*) ;
 int FUNC_17 (struct archive*,char*,int) ;
 int FUNC_18 (struct archive*) ;
 int FUNC_19 (struct archive*,struct archive_entry*) ;
 struct archive* FUNC_20 () ;
 int FUNC_21 (struct archive*,char*,size_t,size_t*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int,int ) ;
 int FUNC_24 (struct archive*,int,int) ;
 int FUNC_25 (char const*,char*,int) ;
 int FUNC_26 (char*) ;
 char* FUNC_27 (size_t) ;
 int FUNC_28 (struct archive*) ;
 int FUNC_29 (struct archive*) ;
 int FUNC_30 (struct archive*) ;

__attribute__((used)) static void
FUNC_31(int (*VAR_4)(struct archive *))
{
 char VAR_5[64];
 struct archive_entry *VAR_6;
 struct archive *VAR_7;
 size_t VAR_8;
 size_t VAR_9 = 1000000;
 char *VAR_10;
 const char *VAR_11;

 VAR_10 = FUNC_27(VAR_9);


 FUNC_22((VAR_7 = FUNC_20()) != ((void*)0));
 FUNC_24(VAR_7, VAR_3, (*VAR_4)(VAR_7));
 FUNC_24(VAR_7, VAR_3, FUNC_15(VAR_7));
 FUNC_24(VAR_7, VAR_3, FUNC_21(VAR_7, VAR_10, VAR_9, &VAR_8));




 FUNC_22((VAR_6 = FUNC_2()) != ((void*)0));
 FUNC_4(VAR_6, "test");
 FUNC_3(VAR_6, VAR_1);
 FUNC_24(VAR_7, VAR_3, FUNC_19(VAR_7, VAR_6));
 FUNC_1(VAR_6);
 FUNC_24(VAR_7, 9, FUNC_17(VAR_7, "12345678", 9));
 FUNC_24(VAR_7, VAR_3, FUNC_16(VAR_7));
 FUNC_23(VAR_3, FUNC_18(VAR_7));




 FUNC_22((VAR_7 = FUNC_10()) != ((void*)0));
 FUNC_24(VAR_7, VAR_3, FUNC_14(VAR_7));
 FUNC_24(VAR_7, VAR_3, FUNC_13(VAR_7));
 FUNC_24(VAR_7, VAR_3, FUNC_12(VAR_7, VAR_10, VAR_8));

 FUNC_24(VAR_7, VAR_3, FUNC_11(VAR_7, &VAR_6));
 FUNC_24(VAR_7, 9, FUNC_8(VAR_7, VAR_5, 10));
 FUNC_25(VAR_5, "12345678", 9);
 FUNC_24(VAR_7, VAR_3, FUNC_7(VAR_7));
 FUNC_23(VAR_3, FUNC_9(VAR_7));


 FUNC_22((VAR_7 = FUNC_20()) != ((void*)0));
 FUNC_24(VAR_7, VAR_3, (*VAR_4)(VAR_7));
 FUNC_24(VAR_7, VAR_3, FUNC_15(VAR_7));
 FUNC_24(VAR_7, VAR_3, FUNC_21(VAR_7, VAR_10, VAR_9, &VAR_8));


 FUNC_22((VAR_6 = FUNC_2()) != ((void*)0));
 FUNC_4(VAR_6, "test");
 FUNC_3(VAR_6, VAR_1);
 FUNC_24(VAR_7, VAR_3, FUNC_19(VAR_7, VAR_6));
 FUNC_1(VAR_6);
 FUNC_24(VAR_7, 9, FUNC_17(VAR_7, "12345678", 9));


 FUNC_22((VAR_6 = FUNC_2()) != ((void*)0));
 FUNC_4(VAR_6, "test2");
 FUNC_3(VAR_6, VAR_1);
 FUNC_24(VAR_7, VAR_2, FUNC_19(VAR_7, VAR_6));
 VAR_11 = FUNC_6(VAR_7);
 FUNC_25(VAR_11, "Raw format only supports one entry per archive", 47);
 FUNC_1(VAR_6);

 FUNC_24(VAR_7, VAR_3, FUNC_16(VAR_7));
 FUNC_23(VAR_3, FUNC_18(VAR_7));


 FUNC_22((VAR_7 = FUNC_20()) != ((void*)0));
 FUNC_24(VAR_7, VAR_3, (*VAR_4)(VAR_7));
 FUNC_24(VAR_7, VAR_3, FUNC_15(VAR_7));
 FUNC_24(VAR_7, VAR_3, FUNC_21(VAR_7, VAR_10, VAR_9, &VAR_8));


 FUNC_22((VAR_6 = FUNC_2()) != ((void*)0));
 FUNC_0(VAR_6, "dir");
 FUNC_3(VAR_6, VAR_0);
 FUNC_5(VAR_6, 512);
 FUNC_24(VAR_7, VAR_2, FUNC_19(VAR_7, VAR_6));
 VAR_11 = FUNC_6(VAR_7);
 FUNC_25(VAR_11, "Raw format only supports filetype AE_IFREG", 43);
 FUNC_1(VAR_6);

 FUNC_24(VAR_7, VAR_3, FUNC_16(VAR_7));
 FUNC_23(VAR_3, FUNC_18(VAR_7));

 FUNC_26(VAR_10);
}
