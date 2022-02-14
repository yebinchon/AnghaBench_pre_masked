
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,size_t,int,int*,char*,char*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, size_t VAR_2, bool VAR_3, const char **VAR_4, int *VAR_5)
{
 char *VAR_6;
 const char *VAR_7 = *VAR_4;

 if ((VAR_6 = FUNC_1(VAR_7, ':')) != ((void*)0)) {
  *VAR_6++ = '\0';
  *VAR_4 = VAR_6;
 }
 if ((VAR_6 = FUNC_1(VAR_7, '/')) == ((void*)0)) {
  *VAR_5 = VAR_0;
  return 0;
 }

 *VAR_6++ = '\0';
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5, "mask", VAR_6);
}
