
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct pfctl {int hostid_set; int opts; int hostid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;

int
FUNC_3(struct pfctl *VAR_3, u_int32_t VAR_4)
{
 if ((VAR_2 & VAR_0) == 0)
  return (0);

 FUNC_0(VAR_4);

 VAR_3->hostid = VAR_4;
 VAR_3->hostid_set = 1;

 if (VAR_3->opts & VAR_1)
  FUNC_2("set hostid 0x%08x\n", FUNC_1(VAR_4));

 return (0);
}
