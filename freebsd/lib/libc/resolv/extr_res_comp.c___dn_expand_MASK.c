
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int const*,int const*,int const*,char*,size_t) ;

int
FUNC_1(const u_char *VAR_0, const u_char *VAR_1, const u_char *VAR_2,
   char *VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, (size_t)VAR_4);

 if (VAR_5 > 0 && VAR_3[0] == '.')
  VAR_3[0] = '\0';
 return (VAR_5);
}
