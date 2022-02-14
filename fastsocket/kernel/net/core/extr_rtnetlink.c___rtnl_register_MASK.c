
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link {scalar_t__ calcit; scalar_t__ dumpit; scalar_t__ doit; } ;
typedef scalar_t__ rtnl_dumpit_func ;
typedef scalar_t__ rtnl_doit_func ;
typedef scalar_t__ rtnl_calcit_func ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rtnl_link* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int) ;
 struct rtnl_link** VAR_4 ;

int FUNC_3(int VAR_5, int VAR_6,
      rtnl_doit_func VAR_7, rtnl_dumpit_func VAR_8,
      rtnl_calcit_func VAR_9)
{
 struct rtnl_link *VAR_10;
 int VAR_11;

 FUNC_0(VAR_5 < 0 || VAR_5 > VAR_3);
 VAR_11 = FUNC_2(VAR_6);

 VAR_10 = VAR_4[VAR_5];
 if (VAR_10 == ((void*)0)) {
  VAR_10 = FUNC_1(VAR_2, sizeof(*VAR_10), VAR_1);
  if (VAR_10 == ((void*)0))
   return -VAR_0;

  VAR_4[VAR_5] = VAR_10;
 }

 if (VAR_7)
  VAR_10[VAR_11].doit = VAR_7;

 if (VAR_8)
  VAR_10[VAR_11].dumpit = VAR_8;

 if (VAR_9)
  VAR_10[VAR_11].calcit = VAR_9;

 return 0;
}
