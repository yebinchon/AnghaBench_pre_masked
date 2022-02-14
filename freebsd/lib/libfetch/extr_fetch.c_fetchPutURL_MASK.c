
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct url {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (struct url*) ;
 struct url* FUNC_1 (char const*) ;
 int * FUNC_2 (struct url*,char const*) ;

FILE *
FUNC_3(const char *VAR_0, const char *VAR_1)
{
 struct url *VAR_2;
 FILE *VAR_3;

 if ((VAR_2 = FUNC_1(VAR_0)) == ((void*)0))
  return (((void*)0));

 VAR_3 = FUNC_2(VAR_2, VAR_1);

 FUNC_0(VAR_2);
 return (VAR_3);
}
