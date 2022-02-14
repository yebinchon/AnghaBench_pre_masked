
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int SCR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static int
FUNC_4(
 SCR *VAR_2,
 int VAR_3,
 char *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 char VAR_9[8 * 1024];

 if ((VAR_8 = FUNC_1(VAR_4, VAR_1, 0)) == -1)
  goto err;
 while ((VAR_5 = FUNC_2(VAR_8, VAR_9, sizeof(VAR_9))) > 0)
  for (VAR_7 = 0; VAR_5; VAR_5 -= VAR_6, VAR_7 += VAR_6)
   if ((VAR_6 = FUNC_3(VAR_3, VAR_9 + VAR_7, VAR_5)) < 0)
    goto err;
 if (VAR_5 == 0)
  return (0);

err: FUNC_0(VAR_2, VAR_0, VAR_4, "%s");
 return (1);
}
