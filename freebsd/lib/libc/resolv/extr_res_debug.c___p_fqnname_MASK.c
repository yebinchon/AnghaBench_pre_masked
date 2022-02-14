
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int const*,int const*,int const*,char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

const u_char *
FUNC_3(const u_char *VAR_0, const u_char *VAR_1, int VAR_2, char *VAR_3,
    int VAR_4)
{
 int VAR_5, VAR_6;

 if ((VAR_5 = FUNC_0(VAR_1, VAR_0 + VAR_2, VAR_0, VAR_3, VAR_4)) < 0)
  return (((void*)0));
 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 == 0 || VAR_3[VAR_6 - 1] != '.') {
  if (VAR_6 + 1 >= VAR_4)
   return (((void*)0));
  else
   FUNC_1(VAR_3 + VAR_6, ".");
 }
 return (VAR_0 + VAR_5);
}
