
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtnl_dumpit_func ;
typedef int rtnl_doit_func ;
typedef int rtnl_calcit_func ;


 scalar_t__ FUNC_0 (int,int,int ,int ,int ) ;
 int FUNC_1 (char*,int,int) ;

void FUNC_2(int VAR_0, int VAR_1,
     rtnl_doit_func VAR_2, rtnl_dumpit_func VAR_3,
     rtnl_calcit_func VAR_4)
{
 if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4) < 0)
  FUNC_1("Unable to register rtnetlink message handler, "
        "protocol = %d, message type = %d\n",
        VAR_0, VAR_1);
}
