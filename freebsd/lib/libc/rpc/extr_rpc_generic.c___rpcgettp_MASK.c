
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netconfig {int dummy; } ;
struct __rpc_sockinfo {int dummy; } ;


 int FUNC_0 (int,struct __rpc_sockinfo*) ;
 int FUNC_1 (struct __rpc_sockinfo*,char const**) ;
 struct netconfig* FUNC_2 (char*) ;

struct netconfig *
FUNC_3(int VAR_0)
{
 const char *VAR_1;
 struct __rpc_sockinfo VAR_2;

 if (!FUNC_0(VAR_0, &VAR_2))
  return ((void*)0);

 if (!FUNC_1(&VAR_2, &VAR_1))
  return ((void*)0);


 return FUNC_2((char *)VAR_1);
}
