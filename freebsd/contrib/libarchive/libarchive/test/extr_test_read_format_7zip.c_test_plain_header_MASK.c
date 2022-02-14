
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int buff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive*,int ) ;
 int FUNC_7 (struct archive*) ;
 int FUNC_8 (struct archive*) ;
 int FUNC_9 (struct archive*,char*,int) ;
 int FUNC_10 (struct archive*) ;
 int FUNC_11 (struct archive*) ;
 struct archive* FUNC_12 () ;
 int FUNC_13 (struct archive*,struct archive_entry**) ;
 int FUNC_14 (struct archive*,char const*,int) ;
 int FUNC_15 (struct archive*) ;
 int FUNC_16 (struct archive*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int,int ) ;
 int FUNC_19 (struct archive*,int,int ) ;
 int FUNC_20 (char*,char*,int) ;
 int FUNC_21 (char*,int ) ;
 int FUNC_22 (char const*) ;

__attribute__((used)) static void
FUNC_23(const char *VAR_5)
{
 struct archive_entry *VAR_6;
 struct archive *VAR_7;
 char VAR_8[128];

 FUNC_22(VAR_5);
 FUNC_17((VAR_7 = FUNC_12()) != ((void*)0));
 FUNC_19(VAR_7, VAR_4, FUNC_15(VAR_7));
 FUNC_19(VAR_7, VAR_4, FUNC_16(VAR_7));
 FUNC_19(VAR_7, VAR_4,
     FUNC_14(VAR_7, VAR_5, 10240));


 FUNC_19(VAR_7, VAR_4, FUNC_13(VAR_7, &VAR_6));
 FUNC_18((VAR_0 | 0644), FUNC_1(VAR_6));
 FUNC_21("file1", FUNC_3(VAR_6));
 FUNC_18(1322058763, FUNC_2(VAR_6));
 FUNC_18(2844, FUNC_4(VAR_6));
 FUNC_18(FUNC_0(VAR_6), 0);
 FUNC_19(VAR_7, FUNC_11(VAR_7), 0);
 FUNC_18(sizeof(VAR_8), FUNC_9(VAR_7, VAR_8, sizeof(VAR_8)));
 FUNC_20(VAR_8, "The libarchive distribution ", 28);

 FUNC_18(1, FUNC_5(VAR_7));


 FUNC_19(VAR_7, VAR_1, FUNC_13(VAR_7, &VAR_6));


 FUNC_19(VAR_7, VAR_2, FUNC_6(VAR_7, 0));
 FUNC_19(VAR_7, VAR_3, FUNC_7(VAR_7));


 FUNC_18(VAR_4, FUNC_8(VAR_7));
 FUNC_18(VAR_4, FUNC_10(VAR_7));
}
