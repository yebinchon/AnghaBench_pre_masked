
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int inc ;
typedef size_t Boolean ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 int * FUNC_1 (char*,char const) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t const) ;

__attribute__((used)) static Boolean
FUNC_3(const char *VAR_1, Boolean VAR_2)
{
 static const char VAR_3[] = "include";
 static const size_t VAR_4 = sizeof(VAR_3) - 1;


 int VAR_5 = FUNC_1(&("ds-"[VAR_2]), *VAR_1) != ((void*)0);

 if (FUNC_2(VAR_1 + VAR_5, VAR_3, VAR_4) != 0)
  return VAR_0;


 return !VAR_2 || FUNC_0((unsigned char)VAR_1[VAR_4 + VAR_5]);
}
