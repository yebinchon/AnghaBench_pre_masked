
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct url_ent {int dummy; } ;
struct url {int dummy; } ;


 int FUNC_0 (struct url*) ;
 struct url_ent* FUNC_1 (struct url*,char const*) ;
 struct url* FUNC_2 (char const*) ;

struct url_ent *
FUNC_3(const char *VAR_0, const char *VAR_1)
{
 struct url *VAR_2;
 struct url_ent *VAR_3;

 if ((VAR_2 = FUNC_2(VAR_0)) == ((void*)0))
  return (((void*)0));

 VAR_3 = FUNC_1(VAR_2, VAR_1);

 FUNC_0(VAR_2);
 return (VAR_3);
}
