
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive*) ;
 struct archive* FUNC_1 () ;
 int FUNC_2 (struct archive*,struct archive_entry**) ;
 int FUNC_3 (struct archive*,char const*,int) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct archive*,int ,int ) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct archive*,char*,size_t,int) ;
 char* FUNC_11 (size_t*,char const*) ;

__attribute__((used)) static void
FUNC_12(void)
{
 const char *VAR_1 = "test_read_format_zip_malformed1.zip";
 struct archive *VAR_2;
 struct archive_entry *VAR_3;
 char *VAR_4;
 size_t VAR_5;

 FUNC_8(VAR_1);


 FUNC_6((VAR_2 = FUNC_1()) != ((void*)0));
 FUNC_7(VAR_2, VAR_0, FUNC_4(VAR_2));
 FUNC_7(VAR_2, VAR_0, FUNC_5(VAR_2));
 FUNC_7(VAR_2, VAR_0, FUNC_3(VAR_2, VAR_1, 10240));
 FUNC_7(VAR_2, VAR_0, FUNC_2(VAR_2, &VAR_3));
 FUNC_7(VAR_2, VAR_0, FUNC_0(VAR_2));


 VAR_4 = FUNC_11(&VAR_5, VAR_1);
 FUNC_6((VAR_2 = FUNC_1()) != ((void*)0));
 FUNC_7(VAR_2, VAR_0, FUNC_4(VAR_2));
 FUNC_7(VAR_2, VAR_0, FUNC_5(VAR_2));
 FUNC_7(VAR_2, VAR_0, FUNC_10(VAR_2, VAR_4, VAR_5, 31));
 FUNC_7(VAR_2, VAR_0, FUNC_2(VAR_2, &VAR_3));
 FUNC_7(VAR_2, VAR_0, FUNC_0(VAR_2));
 FUNC_9(VAR_4);
}
