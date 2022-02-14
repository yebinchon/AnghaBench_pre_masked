
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct netconfig {int dummy; } ;
typedef int rpcvers_t ;
typedef int rpcprog_t ;
typedef int bool_t ;


 int VAR_0 ;
 struct netconfig* FUNC_0 (char*) ;
 int FUNC_1 (struct netconfig*) ;
 int FUNC_2 (int ,int ,struct netconfig*) ;

bool_t
FUNC_3(u_long VAR_1, u_long VAR_2)
{
 struct netconfig *VAR_3;
 bool_t VAR_4 = VAR_0;
 bool_t VAR_5 = VAR_0;

 VAR_3 = FUNC_0("udp");
 if (VAR_3 != ((void*)0)) {
  VAR_4 = FUNC_2((rpcprog_t)VAR_1, (rpcvers_t)VAR_2,
      VAR_3);
  FUNC_1(VAR_3);
 }
 VAR_3 = FUNC_0("tcp");
 if (VAR_3 != ((void*)0)) {
  VAR_5 = FUNC_2((rpcprog_t)VAR_1, (rpcvers_t)VAR_2,
      VAR_3);
  FUNC_1(VAR_3);
 }





 return (VAR_5 || VAR_4);
}
