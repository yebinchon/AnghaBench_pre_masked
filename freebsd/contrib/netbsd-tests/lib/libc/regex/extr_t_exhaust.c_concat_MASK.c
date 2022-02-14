
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_0, const char *VAR_1)
{
 size_t VAR_2 = FUNC_3(VAR_0);
 size_t VAR_3 = FUNC_3(VAR_1);
 char *VAR_4 = FUNC_1(VAR_2 + VAR_3 + 1);

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_2(VAR_4, VAR_0);
 FUNC_2(VAR_4 + VAR_2, VAR_1);
 return VAR_4;
}
