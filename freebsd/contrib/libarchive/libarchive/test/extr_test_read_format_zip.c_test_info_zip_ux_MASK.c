
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int dummy; } ;


 int VAR_0 ;
 struct archive* FUNC_0 () ;
 int FUNC_1 (struct archive*,char const*,int) ;
 int FUNC_2 (struct archive*) ;
 int FUNC_3 (struct archive*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct archive*,int ,int ) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct archive*,char*,size_t,int) ;
 char* FUNC_9 (size_t*,char const*) ;
 int FUNC_10 (struct archive*,int) ;

__attribute__((used)) static void
FUNC_11(void)
{
 const char *VAR_1 = "test_read_format_zip_ux.zip";
 struct archive *VAR_2;
 char *VAR_3;
 size_t VAR_4;

 FUNC_6(VAR_1);


 FUNC_4((VAR_2 = FUNC_0()) != ((void*)0));
 FUNC_5(VAR_2, VAR_0, FUNC_2(VAR_2));
 FUNC_5(VAR_2, VAR_0, FUNC_3(VAR_2));
 FUNC_5(VAR_2, VAR_0, FUNC_1(VAR_2, VAR_1, 10240));
 FUNC_10(VAR_2, 1);


 VAR_3 = FUNC_9(&VAR_4, VAR_1);
 FUNC_4((VAR_2 = FUNC_0()) != ((void*)0));
 FUNC_5(VAR_2, VAR_0, FUNC_2(VAR_2));
 FUNC_5(VAR_2, VAR_0, FUNC_3(VAR_2));
 FUNC_5(VAR_2, VAR_0, FUNC_8(VAR_2, VAR_3, VAR_4, 108));
 FUNC_10(VAR_2, 0);
 FUNC_7(VAR_3);
}
