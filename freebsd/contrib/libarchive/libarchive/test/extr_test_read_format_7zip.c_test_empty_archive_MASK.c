
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
 int FUNC_0 (struct archive*) ;
 int FUNC_1 (struct archive*,int ) ;
 int FUNC_2 (struct archive*) ;
 int FUNC_3 (struct archive*) ;
 int FUNC_4 (struct archive*) ;
 struct archive* FUNC_5 () ;
 int FUNC_6 (struct archive*,struct archive_entry**) ;
 int FUNC_7 (struct archive*,char const*,int) ;
 int FUNC_8 (struct archive*) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct archive*,int ,int ) ;
 int FUNC_13 (char const*) ;

__attribute__((used)) static void
FUNC_14()
{
 const char *VAR_4 = "test_read_format_7zip_empty_archive.7z";
 struct archive_entry *VAR_5;
 struct archive *VAR_6;

 FUNC_13(VAR_4);
 FUNC_10((VAR_6 = FUNC_5()) != ((void*)0));
 FUNC_12(VAR_6, VAR_3, FUNC_8(VAR_6));
 FUNC_12(VAR_6, VAR_3, FUNC_9(VAR_6));
 FUNC_12(VAR_6, VAR_3,
     FUNC_7(VAR_6, VAR_4, 10240));


 FUNC_12(VAR_6, VAR_0, FUNC_6(VAR_6, &VAR_5));

 FUNC_11(0, FUNC_0(VAR_6));


 FUNC_12(VAR_6, VAR_1, FUNC_1(VAR_6, 0));
 FUNC_12(VAR_6, VAR_2, FUNC_2(VAR_6));


 FUNC_11(VAR_3, FUNC_3(VAR_6));
 FUNC_11(VAR_3, FUNC_4(VAR_6));
}
