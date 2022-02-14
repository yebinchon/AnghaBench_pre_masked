
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3) {
  FUNC_2("fib number %d is ignored", VAR_0);
  return (VAR_3);
 }

 VAR_3 = FUNC_0(*VAR_1, VAR_2, VAR_0);
 return (VAR_3);
}
