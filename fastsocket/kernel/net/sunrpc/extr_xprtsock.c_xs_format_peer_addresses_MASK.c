
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {char const** address_strings; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct rpc_xprt*) ;
 int FUNC_1 (struct rpc_xprt*) ;

__attribute__((used)) static void FUNC_2(struct rpc_xprt *VAR_2,
         const char *VAR_3,
         const char *VAR_4)
{
 VAR_2->address_strings[VAR_1] = VAR_3;
 VAR_2->address_strings[VAR_0] = VAR_4;
 FUNC_0(VAR_2);
 FUNC_1(VAR_2);
}
