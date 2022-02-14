
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct url_stat {int dummy; } ;
struct url {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (struct url*) ;
 struct url* FUNC_1 (char const*) ;
 int * FUNC_2 (struct url*,struct url_stat*,char const*) ;

FILE *
FUNC_3(const char *VAR_0, struct url_stat *VAR_1, const char *VAR_2)
{
 struct url *VAR_3;
 FILE *VAR_4;

 if ((VAR_3 = FUNC_1(VAR_0)) == ((void*)0))
  return (((void*)0));

 VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_2);

 FUNC_0(VAR_3);
 return (VAR_4);
}
