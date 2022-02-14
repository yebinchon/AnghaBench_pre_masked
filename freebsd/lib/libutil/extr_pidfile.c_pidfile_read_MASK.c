
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int,char const*,int) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_5, const char *VAR_6, pid_t *VAR_7)
{
 char VAR_8[16], *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_3 | VAR_2);
 if (VAR_11 == -1)
  return (VAR_4);

 VAR_12 = FUNC_2(VAR_11, VAR_8, sizeof(VAR_8) - 1);
 VAR_10 = VAR_4;
 FUNC_0(VAR_11);
 if (VAR_12 == -1)
  return (VAR_10);
 else if (VAR_12 == 0)
  return (VAR_0);
 VAR_8[VAR_12] = '\0';

 *VAR_7 = FUNC_3(VAR_8, &VAR_9, 10);
 if (VAR_9 != &VAR_8[VAR_12])
  return (VAR_1);

 return (0);
}
