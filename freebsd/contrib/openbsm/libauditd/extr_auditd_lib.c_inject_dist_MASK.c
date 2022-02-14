
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_0, char *VAR_1, size_t VAR_2)
{
 char *VAR_3;

 VAR_3 = FUNC_3(VAR_0, '/');
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_3 - VAR_0 < (ssize_t)VAR_2);
 FUNC_2(VAR_1, VAR_0, VAR_3 - VAR_0 + 1);
 FUNC_1(VAR_1, "/dist/", VAR_2);
 FUNC_1(VAR_1, VAR_3 + 1, VAR_2);
}
