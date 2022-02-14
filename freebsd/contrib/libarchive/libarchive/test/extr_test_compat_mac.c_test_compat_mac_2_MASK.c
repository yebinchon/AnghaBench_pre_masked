
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 void* FUNC_2 (struct archive_entry*,size_t*) ;
 size_t FUNC_3 (struct archive_entry*) ;
 size_t FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 size_t FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive_entry*) ;
 int FUNC_8 (struct archive*,int ) ;
 int FUNC_9 (struct archive*) ;
 size_t FUNC_10 (struct archive*) ;
 size_t FUNC_11 (struct archive*) ;
 struct archive* FUNC_12 () ;
 int FUNC_13 (struct archive*,struct archive_entry**) ;
 int FUNC_14 (struct archive*,char*,int) ;
 int FUNC_15 (struct archive*,char*) ;
 int FUNC_16 (struct archive*) ;
 int FUNC_17 (struct archive*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int,size_t) ;
 int FUNC_20 (struct archive*,int,int ) ;
 int FUNC_21 (char*,void const*,int) ;
 int FUNC_22 (char*,int ) ;
 int FUNC_23 (char*) ;

__attribute__((used)) static void
FUNC_24(void)
{
 char VAR_4[] = "test_compat_mac-2.tar.Z";
 struct archive_entry *VAR_5;
 struct archive *VAR_6;
 const void *VAR_7;
 size_t VAR_8;

 FUNC_18((VAR_6 = FUNC_12()) != ((void*)0));
 FUNC_20(VAR_6, VAR_3, FUNC_16(VAR_6));
 FUNC_20(VAR_6, VAR_3, FUNC_17(VAR_6));
 FUNC_20(VAR_6, VAR_3, FUNC_15(VAR_6, "mac-ext"));
 FUNC_23(VAR_4);
 FUNC_20(VAR_6, VAR_3, FUNC_14(VAR_6, VAR_4, 10240));

 FUNC_20(VAR_6, VAR_3, FUNC_13(VAR_6, &VAR_5));
 FUNC_22("./", FUNC_5(VAR_5));
 FUNC_19(1303628303, FUNC_4(VAR_5));
 FUNC_19(501, FUNC_6(VAR_5));
 FUNC_22("tim", FUNC_7(VAR_5));
 FUNC_19(20, FUNC_0(VAR_5));
 FUNC_22("staff", FUNC_1(VAR_5));
 FUNC_19(040755, FUNC_3(VAR_5));

 VAR_7 = FUNC_2(VAR_5, &VAR_8);
 FUNC_18(VAR_7 == ((void*)0));
 FUNC_19(0, VAR_8);

 FUNC_20(VAR_6, VAR_3, FUNC_13(VAR_6, &VAR_5));
 FUNC_22("./mydir/", FUNC_5(VAR_5));
 FUNC_19(1303628303, FUNC_4(VAR_5));
 FUNC_19(501, FUNC_6(VAR_5));
 FUNC_22("tim", FUNC_7(VAR_5));
 FUNC_19(20, FUNC_0(VAR_5));
 FUNC_22("staff", FUNC_1(VAR_5));
 FUNC_19(040755, FUNC_3(VAR_5));

 VAR_7 = FUNC_2(VAR_5, &VAR_8);
 FUNC_18(VAR_7 != ((void*)0));
 FUNC_19(267, VAR_8);
 FUNC_21("\x00\x05\x16\x07\x00\x02\x00\x00Mac OS X", VAR_7, 16);

 FUNC_20(VAR_6, VAR_3, FUNC_13(VAR_6, &VAR_5));
 FUNC_22("./myfile", FUNC_5(VAR_5));
 FUNC_19(1303628303, FUNC_4(VAR_5));
 FUNC_19(501, FUNC_6(VAR_5));
 FUNC_22("tim", FUNC_7(VAR_5));
 FUNC_19(20, FUNC_0(VAR_5));
 FUNC_22("staff", FUNC_1(VAR_5));
 FUNC_19(0100644, FUNC_3(VAR_5));

 VAR_7 = FUNC_2(VAR_5, &VAR_8);
 FUNC_18(VAR_7 != ((void*)0));
 FUNC_19(267, VAR_8);
 FUNC_21("\x00\x05\x16\x07\x00\x02\x00\x00Mac OS X", VAR_7, 16);


 FUNC_20(VAR_6, VAR_0, FUNC_13(VAR_6, &VAR_5));


 FUNC_19(FUNC_8(VAR_6, 0), VAR_1);
 FUNC_19(FUNC_9(VAR_6), VAR_2);

 FUNC_19(VAR_3, FUNC_10(VAR_6));
 FUNC_19(VAR_3, FUNC_11(VAR_6));
}
