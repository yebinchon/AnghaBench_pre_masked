
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netconfig {int dummy; } ;
struct __rpc_sockinfo {int si_proto; int si_socktype; int si_af; } ;


 int FUNC_0 (struct netconfig const*,struct __rpc_sockinfo*) ;
 int FUNC_1 (int ,int ,int ) ;

int
FUNC_2(const struct netconfig *VAR_0)
{
 struct __rpc_sockinfo VAR_1;

 if (!FUNC_0(VAR_0, &VAR_1))
  return 0;

 return FUNC_1(VAR_1.si_af, VAR_1.si_socktype, VAR_1.si_proto);
}
