
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*) ;
 struct archive* FUNC_1 () ;
 int FUNC_2 (struct archive*,struct archive_entry**) ;
 int FUNC_3 (struct archive*,char const*,int) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct archive*,int ,int ) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static void
FUNC_9(void)
{
 const char *VAR_2 = "test_read_format_7zip_malformed2.7z";
 struct archive *VAR_3;
 struct archive_entry *VAR_4;

 FUNC_8(VAR_2);

 FUNC_6((VAR_3 = FUNC_1()) != ((void*)0));
 FUNC_7(VAR_3, VAR_1, FUNC_4(VAR_3));
 FUNC_7(VAR_3, VAR_1, FUNC_5(VAR_3));
 FUNC_7(VAR_3, VAR_1, FUNC_3(VAR_3, VAR_2, 10240));
 FUNC_7(VAR_3, VAR_0, FUNC_2(VAR_3, &VAR_4));
 FUNC_7(VAR_3, VAR_1, FUNC_0(VAR_3));
}
