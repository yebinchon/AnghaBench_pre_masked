
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int FUNC_0 (char const*,char*,int*,int*,int*) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, char *VAR_1)
{
 int VAR_2, VAR_3;
 u_int VAR_4, VAR_5;

 if (FUNC_1(VAR_0) > 2 && VAR_0[0] == '0' && VAR_0[1] == 'x') {

  VAR_2 = FUNC_0(VAR_0 + 2, "%x.%x%n", &VAR_4, &VAR_5, &VAR_3);
  if (VAR_2 != 2 || (size_t)VAR_3 != FUNC_1(VAR_0 + 2))
   return (0);
 } else {

  VAR_2 = FUNC_0(VAR_0, "%d.%d%n", &VAR_4, &VAR_5, &VAR_3);
  if (VAR_2 != 2 || (size_t)VAR_3 != FUNC_1(VAR_0))
   return (0);
 }
 VAR_1[0] = VAR_4 >> 24;
 VAR_1[1] = VAR_4 >> 16;
 VAR_1[2] = VAR_4 >> 8;
 VAR_1[3] = VAR_4 >> 0;
 VAR_1[4] = VAR_5 >> 24;
 VAR_1[5] = VAR_5 >> 16;
 VAR_1[6] = VAR_5 >> 8;
 VAR_1[7] = VAR_5 >> 0;
 return (1);
}
