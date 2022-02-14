
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfctl {int ifname_set; int opts; int * ifname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int * FUNC_4 (char*) ;

int
FUNC_5(struct pfctl *VAR_3, char *VAR_4)
{

 if ((VAR_2 & VAR_0) == 0)
  return (0);

 if (!FUNC_3(VAR_4, "none")) {
  FUNC_1(VAR_3->ifname);
  VAR_3->ifname = ((void*)0);
 } else {
  VAR_3->ifname = FUNC_4(VAR_4);
  if (!VAR_3->ifname)
   FUNC_0(1, "pfctl_set_logif: strdup");
 }
 VAR_3->ifname_set = 1;

 if (VAR_3->opts & VAR_1)
  FUNC_2("set loginterface %s\n", VAR_4);

 return (0);
}
