
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifgroupreq {int ifgr_name; } ;
typedef int ifgr ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct ifgroupreq*,int ,int) ;
 int FUNC_4 (int ,char const*,int ) ;

int
FUNC_5(const char *VAR_4)
{
 int VAR_5;
 struct ifgroupreq VAR_6;

 if (VAR_4 == ((void*)0) || !VAR_4[0])
  return (0);

 VAR_5 = FUNC_1();

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 FUNC_4(VAR_6.ifgr_name, VAR_4, VAR_1);
 if (FUNC_2(VAR_5, VAR_2, (caddr_t)&VAR_6) == -1) {
  if (VAR_3 == VAR_0)
   return (0);
  else
   FUNC_0(1, "SIOCGIFGMEMB");
 }

 return (1);
}
