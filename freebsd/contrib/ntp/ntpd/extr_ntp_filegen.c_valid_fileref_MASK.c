
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char const*) ;
 char* FUNC_1 (char const*,char const) ;

__attribute__((used)) static int
FUNC_2(
 const char * VAR_4,
 const char * VAR_5
 )
{
 const char *VAR_6;




 if (((void*)0) == VAR_4 || '\0' == VAR_4[0])
  return VAR_1;

 if (((void*)0) == VAR_5)
  return VAR_1;
 for (VAR_6 = VAR_5; VAR_6 != ((void*)0); VAR_6 = FUNC_1(VAR_6, VAR_0)) {
  if ('.' == VAR_6[0] && '.' == VAR_6[1]
      && ('\0' == VAR_6[2] || VAR_0 == VAR_6[2]))
   return VAR_1;
 }

 return VAR_3;
}
