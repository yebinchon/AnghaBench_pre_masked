
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ifreq {int ifr_mtu; int ifr_name; } ;
typedef int ifr ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct ifreq*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*,char*) ;

u_long
FUNC_7(char *VAR_1)
{
 int VAR_2;
 struct ifreq VAR_3;

 VAR_2 = FUNC_3();
 FUNC_0(&VAR_3, sizeof(VAR_3));
 if (FUNC_5(VAR_3.ifr_name, VAR_1, sizeof(VAR_3.ifr_name)) >=
     sizeof(VAR_3.ifr_name))
  FUNC_2(1, "getifmtu: strlcpy");
 if (FUNC_4(VAR_2, VAR_0, (caddr_t)&VAR_3) == -1)



  FUNC_1(1, "SIOCGIFMTU");

 if (VAR_3.ifr_mtu > 0)
  return (VAR_3.ifr_mtu);
 else {
  FUNC_6("could not get mtu for %s, assuming 1500", VAR_1);
  return (1500);
 }
}
