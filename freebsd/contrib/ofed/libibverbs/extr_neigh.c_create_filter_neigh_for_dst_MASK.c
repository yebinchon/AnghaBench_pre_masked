
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_neigh {int dummy; } ;
struct nl_addr {int dummy; } ;


 struct rtnl_neigh* FUNC_0 () ;
 int FUNC_1 (struct rtnl_neigh*,struct nl_addr*) ;
 int FUNC_2 (struct rtnl_neigh*,int) ;

__attribute__((used)) static struct rtnl_neigh *FUNC_3(struct nl_addr *VAR_0,
            int VAR_1)
{
 struct rtnl_neigh *VAR_2;

 VAR_2 = FUNC_0();
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 FUNC_2(VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_0);

 return VAR_2;
}
