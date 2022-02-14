
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
typedef struct archive archive ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_entry*) ;
 struct archive_entry* FUNC_1 () ;
 int FUNC_2 (struct archive_entry*,int ) ;
 int FUNC_3 (struct archive_entry*,char*) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*,char*,int) ;
 int FUNC_6 (struct archive*) ;
 struct archive* FUNC_7 () ;
 int FUNC_8 (struct archive*,struct archive_entry**) ;
 int FUNC_9 (struct archive*,char*,size_t) ;
 int FUNC_10 (struct archive*) ;
 int FUNC_11 (struct archive*) ;
 int FUNC_12 (struct archive*) ;
 int FUNC_13 (struct archive*) ;
 int FUNC_14 (struct archive*,char*,int) ;
 int FUNC_15 (struct archive*) ;
 int FUNC_16 (struct archive*,struct archive_entry*) ;
 struct archive* FUNC_17 () ;
 int FUNC_18 (struct archive*,char*,size_t,size_t*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int,int ) ;
 int FUNC_21 (struct archive*,int,int) ;
 int FUNC_22 (char*,char*,int) ;
 int FUNC_23 (char*) ;
 char* FUNC_24 (size_t) ;
 int FUNC_25 (struct archive*) ;

__attribute__((used)) static void
FUNC_26(int (*VAR_2)(struct archive *))
{
 char VAR_3[64];
 struct archive_entry *VAR_4;
 struct archive *VAR_5;
 size_t VAR_6;
 size_t VAR_7 = 1000000;
 char *VAR_8;

 VAR_8 = FUNC_24(VAR_7);


 FUNC_19((VAR_5 = FUNC_17()) != ((void*)0));
 FUNC_21(VAR_5, VAR_1, (*VAR_2)(VAR_5));
 FUNC_21(VAR_5, VAR_1, FUNC_12(VAR_5));
 FUNC_21(VAR_5, VAR_1, FUNC_18(VAR_5, VAR_8, VAR_7, &VAR_6));




 FUNC_19((VAR_4 = FUNC_1()) != ((void*)0));
 FUNC_3(VAR_4, "test");
 FUNC_2(VAR_4, VAR_0);
 FUNC_21(VAR_5, VAR_1, FUNC_16(VAR_5, VAR_4));
 FUNC_0(VAR_4);
 FUNC_21(VAR_5, 9, FUNC_14(VAR_5, "12345678", 9));
 FUNC_21(VAR_5, VAR_1, FUNC_13(VAR_5));
 FUNC_20(VAR_1, FUNC_15(VAR_5));




 FUNC_19((VAR_5 = FUNC_7()) != ((void*)0));
 FUNC_21(VAR_5, VAR_1, FUNC_11(VAR_5));
 FUNC_21(VAR_5, VAR_1, FUNC_10(VAR_5));
 FUNC_21(VAR_5, VAR_1, FUNC_9(VAR_5, VAR_8, VAR_6));

 FUNC_21(VAR_5, VAR_1, FUNC_8(VAR_5, &VAR_4));
 FUNC_21(VAR_5, 37, FUNC_5(VAR_5, VAR_3, 64));
 FUNC_22(VAR_3, "begin-base64 644 -\nMTIzNDU2NzgA\n====\n", 37);
 FUNC_21(VAR_5, VAR_1, FUNC_4(VAR_5));
 FUNC_20(VAR_1, FUNC_6(VAR_5));

 FUNC_23(VAR_8);
}
