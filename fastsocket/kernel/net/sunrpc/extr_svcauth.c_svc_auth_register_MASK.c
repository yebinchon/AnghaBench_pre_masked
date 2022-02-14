
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_ops {int dummy; } ;
typedef size_t rpc_authflavor_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct auth_ops** VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(rpc_authflavor_t VAR_4, struct auth_ops *VAR_5)
{
 int VAR_6 = -VAR_0;
 FUNC_0(&VAR_3);
 if (VAR_4 < VAR_1 && VAR_2[VAR_4] == ((void*)0)) {
  VAR_2[VAR_4] = VAR_5;
  VAR_6 = 0;
 }
 FUNC_1(&VAR_3);
 return VAR_6;
}
