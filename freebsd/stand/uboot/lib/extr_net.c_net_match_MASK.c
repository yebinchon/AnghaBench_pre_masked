
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {int dummy; } ;


 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(struct netif *VAR_0, void *VAR_1)
{
 char **VAR_2 = (char **)VAR_1;

 if (FUNC_0("net", *VAR_2, 3) == 0)
  return (1);

 FUNC_1("net_match: could not match network device\n");
 return (0);
}
