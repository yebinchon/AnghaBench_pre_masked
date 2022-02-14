
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, int VAR_2)
{
 int VAR_3;

 while ((VAR_3 = FUNC_0(&VAR_0)) != 0) {
  if (VAR_3 == -1)
   goto err;
  FUNC_1(VAR_2);
 }
 return (0);
err:
 FUNC_2(VAR_1);
 return (1);
}
