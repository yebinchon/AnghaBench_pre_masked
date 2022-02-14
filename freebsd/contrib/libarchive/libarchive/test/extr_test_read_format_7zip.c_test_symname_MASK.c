
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
 int VAR_5 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*,int ) ;
 int FUNC_8 (struct archive*) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*,char*,int) ;
 int FUNC_11 (struct archive*) ;
 int FUNC_12 (struct archive*) ;
 struct archive* FUNC_13 () ;
 int FUNC_14 (struct archive*,struct archive_entry**) ;
 int FUNC_15 (struct archive*,char const*,int) ;
 int FUNC_16 (struct archive*) ;
 int FUNC_17 (struct archive*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int,int ) ;
 int FUNC_20 (struct archive*,int,int ) ;
 int FUNC_21 (char*,char*,int) ;
 int FUNC_22 (char*,int ) ;
 int FUNC_23 (char const*) ;

__attribute__((used)) static void
FUNC_24()
{
 const char *VAR_6 = "test_read_format_7zip_symbolic_name.7z";
 struct archive_entry *VAR_7;
 struct archive *VAR_8;
 char VAR_9[128];

 FUNC_23(VAR_6);
 FUNC_18((VAR_8 = FUNC_13()) != ((void*)0));
 FUNC_20(VAR_8, VAR_5, FUNC_16(VAR_8));
 FUNC_20(VAR_8, VAR_5, FUNC_17(VAR_8));
 FUNC_20(VAR_8, VAR_5,
     FUNC_15(VAR_8, VAR_6, 10240));


 FUNC_20(VAR_8, VAR_5, FUNC_14(VAR_8, &VAR_7));
 FUNC_19((VAR_1 | 0644), FUNC_1(VAR_7));
 FUNC_22("file1", FUNC_3(VAR_7));
 FUNC_19(86401, FUNC_2(VAR_7));
 FUNC_19(32, FUNC_4(VAR_7));
 FUNC_19(FUNC_0(VAR_7), 0);
 FUNC_20(VAR_8, FUNC_12(VAR_8), 0);
 FUNC_19(32, FUNC_10(VAR_8, VAR_9, sizeof(VAR_9)));
 FUNC_21(VAR_9, "hellohellohello\nhellohellohello\n", 32);


 FUNC_20(VAR_8, VAR_5, FUNC_14(VAR_8, &VAR_7));
 FUNC_19((VAR_0 | 0755), FUNC_1(VAR_7));
 FUNC_22("symlinkfile", FUNC_3(VAR_7));
 FUNC_22("file1", FUNC_5(VAR_7));
 FUNC_19(86401, FUNC_2(VAR_7));
 FUNC_19(FUNC_0(VAR_7), 0);
 FUNC_20(VAR_8, FUNC_12(VAR_8), 0);

 FUNC_19(2, FUNC_6(VAR_8));


 FUNC_20(VAR_8, VAR_2, FUNC_14(VAR_8, &VAR_7));


 FUNC_20(VAR_8, VAR_3, FUNC_7(VAR_8, 0));
 FUNC_20(VAR_8, VAR_4, FUNC_8(VAR_8));


 FUNC_19(VAR_5, FUNC_9(VAR_8));
 FUNC_19(VAR_5, FUNC_11(VAR_8));
}
