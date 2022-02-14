
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gprovider {int dummy; } ;
struct gmesh {int dummy; } ;


 struct gprovider* FUNC_0 (struct gmesh*,char const*) ;
 char* FUNC_1 (struct gmesh*,struct gprovider*,char*) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static char *
FUNC_3(struct gmesh *VAR_0, const char *VAR_1)
{
 struct gprovider *VAR_2;
 const char *VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 VAR_3 = FUNC_1(VAR_0, VAR_2, "efimedia");
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 return FUNC_2(VAR_3);
}
