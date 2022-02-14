
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
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*) ;
 struct archive* FUNC_11 () ;
 int FUNC_12 (struct archive*,struct archive_entry**) ;
 int FUNC_13 (struct archive*,char const*,int) ;
 int FUNC_14 (struct archive*) ;
 int FUNC_15 (struct archive*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int,int ) ;
 int FUNC_18 (struct archive*,int,int ) ;
 int FUNC_19 (char*,int ) ;
 int FUNC_20 (char const*) ;

__attribute__((used)) static void
FUNC_21()
{
 const char *VAR_5 = "test_read_format_7zip_empty_file.7z";
 struct archive_entry *VAR_6;
 struct archive *VAR_7;

 FUNC_20(VAR_5);
 FUNC_16((VAR_7 = FUNC_11()) != ((void*)0));
 FUNC_18(VAR_7, VAR_4, FUNC_14(VAR_7));
 FUNC_18(VAR_7, VAR_4, FUNC_15(VAR_7));
 FUNC_18(VAR_7, VAR_4,
     FUNC_13(VAR_7, VAR_5, 10240));


 FUNC_18(VAR_7, VAR_4, FUNC_12(VAR_7, &VAR_6));
 FUNC_17((VAR_0 | 0644), FUNC_1(VAR_6));
 FUNC_19("empty", FUNC_3(VAR_6));
 FUNC_17(86401, FUNC_2(VAR_6));
 FUNC_17(0, FUNC_4(VAR_6));
 FUNC_17(FUNC_0(VAR_6), 0);
 FUNC_18(VAR_7, FUNC_10(VAR_7), 0);

 FUNC_17(1, FUNC_5(VAR_7));


 FUNC_18(VAR_7, VAR_1, FUNC_12(VAR_7, &VAR_6));


 FUNC_18(VAR_7, VAR_2, FUNC_6(VAR_7, 0));
 FUNC_18(VAR_7, VAR_3, FUNC_7(VAR_7));


 FUNC_17(VAR_4, FUNC_8(VAR_7));
 FUNC_17(VAR_4, FUNC_9(VAR_7));
}
