
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_authops {size_t au_flavor; } ;
typedef size_t rpc_authflavor_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct rpc_authops const** VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(const struct rpc_authops *VAR_5)
{
 rpc_authflavor_t VAR_6;
 int VAR_7 = -VAR_1;

 if ((VAR_6 = VAR_5->au_flavor) >= VAR_2)
  return -VAR_0;
 FUNC_0(&VAR_4);
 if (VAR_3[VAR_6] == VAR_5) {
  VAR_3[VAR_6] = ((void*)0);
  VAR_7 = 0;
 }
 FUNC_1(&VAR_4);
 return VAR_7;
}
