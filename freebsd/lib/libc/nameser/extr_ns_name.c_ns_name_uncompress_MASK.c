
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int const*,int const*,int const*,int *,int) ;

int
FUNC_2(const u_char *VAR_1, const u_char *VAR_2, const u_char *VAR_3,
     char *VAR_4, size_t VAR_5)
{
 u_char VAR_6[VAR_0];
 int VAR_7;

 if ((VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_6, sizeof VAR_6)) == -1)
  return (-1);
 if (FUNC_0(VAR_6, VAR_4, VAR_5) == -1)
  return (-1);
 return (VAR_7);
}
