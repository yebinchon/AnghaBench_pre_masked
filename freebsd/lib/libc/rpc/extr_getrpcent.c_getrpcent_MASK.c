
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union key {scalar_t__ number; } ;
struct rpcent {int dummy; } ;


 struct rpcent* FUNC_0 (int ,union key) ;
 int VAR_0 ;

struct rpcent *
FUNC_1(void)
{
 union key VAR_1;

 VAR_1.number = 0;

 return (FUNC_0(VAR_0, VAR_1));
}
