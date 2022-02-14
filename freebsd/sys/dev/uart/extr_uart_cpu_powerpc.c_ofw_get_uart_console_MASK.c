
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char const*,char*,int) ;

__attribute__((used)) static int
FUNC_2(phandle_t VAR_1, phandle_t *VAR_2, const char *VAR_3,
    const char *VAR_4)
{
 char VAR_5[64];
 phandle_t VAR_6;

 if (FUNC_1(VAR_1, VAR_3, VAR_5, sizeof(VAR_5)) == -1)
  return (VAR_0);
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 == -1)
  return (VAR_0);

 if (VAR_4 != ((void*)0)) {
  if (FUNC_1(VAR_1, VAR_4, VAR_5, sizeof(VAR_5)) == -1)
   return (VAR_0);
  if (FUNC_0(VAR_5) != VAR_6)
   return (VAR_0);
 }

 *VAR_2 = VAR_6;
 return (0);
}
