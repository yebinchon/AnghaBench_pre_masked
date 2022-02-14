
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
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*) ;
 struct archive* FUNC_8 () ;
 int FUNC_9 (struct archive*,struct archive_entry**) ;
 int FUNC_10 (struct archive*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct archive*,int ,int ) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (struct archive*,char*,size_t,int) ;
 char* FUNC_18 (size_t*,char const*) ;

__attribute__((used)) static void
FUNC_19(void)
{
 const char *VAR_4 = "test_read_format_zip_symlink.zip";
 char *VAR_5;
 size_t VAR_6;
 struct archive *VAR_7;
 struct archive_entry *VAR_8;

 FUNC_15(VAR_4);
 VAR_5 = FUNC_18(&VAR_6, VAR_4);


 FUNC_11((VAR_7 = FUNC_8()) != ((void*)0));
 FUNC_13(VAR_7, VAR_3, FUNC_10(VAR_7));
 FUNC_13(VAR_7, VAR_3, FUNC_17(VAR_7, VAR_5, VAR_6, 1));

 FUNC_13(VAR_7, VAR_3, FUNC_9(VAR_7, &VAR_8));
 FUNC_14("file", FUNC_2(VAR_8));
 FUNC_12(VAR_1, FUNC_0(VAR_8));
 FUNC_12(FUNC_1(VAR_8), 0);
 FUNC_13(VAR_7, FUNC_7(VAR_7), 0);

 FUNC_13(VAR_7, VAR_3, FUNC_9(VAR_7, &VAR_8));
 FUNC_14("symlink", FUNC_2(VAR_8));
 FUNC_12(VAR_0, FUNC_0(VAR_8));
 FUNC_12(0, FUNC_3(VAR_8));
 FUNC_14("file", FUNC_4(VAR_8));
 FUNC_12(FUNC_1(VAR_8), 0);
 FUNC_13(VAR_7, FUNC_7(VAR_7), 0);

 FUNC_13(VAR_7, VAR_2, FUNC_9(VAR_7, &VAR_8));
 FUNC_13(VAR_7, VAR_3, FUNC_5(VAR_7));
 FUNC_13(VAR_7, VAR_3, FUNC_6(VAR_7));

 FUNC_16(VAR_5);
}
