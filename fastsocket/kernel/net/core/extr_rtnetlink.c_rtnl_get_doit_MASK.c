
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link {int * doit; } ;
typedef int * rtnl_doit_func ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct rtnl_link** VAR_2 ;

__attribute__((used)) static rtnl_doit_func FUNC_0(int VAR_3, int VAR_4)
{
 struct rtnl_link *VAR_5;

 if (VAR_3 <= VAR_1)
  VAR_5 = VAR_2[VAR_3];
 else
  VAR_5 = ((void*)0);

 if (VAR_5 == ((void*)0) || VAR_5[VAR_4].doit == ((void*)0))
  VAR_5 = VAR_2[VAR_0];

 return VAR_5 ? VAR_5[VAR_4].doit : ((void*)0);
}
