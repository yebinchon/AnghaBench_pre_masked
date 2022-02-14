
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rtnl_link {int dummy; } ;
struct nl_object {int dummy; } ;
struct nl_cache {int dummy; } ;


 void* FUNC_0 (struct nl_cache*,struct nl_object*) ;
 struct rtnl_link* FUNC_1 () ;
 int FUNC_2 (struct rtnl_link*,int ) ;
 int FUNC_3 (struct rtnl_link*) ;
 int FUNC_4 (struct rtnl_link*,int) ;

__attribute__((used)) static struct rtnl_link * FUNC_5(struct nl_cache *VAR_0, int VAR_1, u64 VAR_2)
{
 struct rtnl_link *VAR_3;
 void *VAR_4;

 VAR_3 = FUNC_1();
 if (!VAR_3)
  return ((void*)0);

 FUNC_4(VAR_3, VAR_1);
 FUNC_2(VAR_3, VAR_2);

 VAR_4 = FUNC_0(VAR_0, (struct nl_object *) VAR_3);
 FUNC_3(VAR_3);

 return (struct rtnl_link *) VAR_4;
}
