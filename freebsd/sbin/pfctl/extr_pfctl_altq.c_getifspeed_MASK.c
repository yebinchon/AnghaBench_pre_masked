
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ifreq {scalar_t__ ifr_data; int ifr_name; } ;
struct if_data {scalar_t__ ifi_baudrate; } ;
typedef int ifr ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct ifreq*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ,scalar_t__) ;
 int FUNC_5 (int ,char*,int) ;

u_int32_t
FUNC_6(char *VAR_1)
{
 int VAR_2;
 struct ifreq VAR_3;
 struct if_data VAR_4;

 VAR_2 = FUNC_3();
 FUNC_0(&VAR_3, sizeof(VAR_3));
 if (FUNC_5(VAR_3.ifr_name, VAR_1, sizeof(VAR_3.ifr_name)) >=
     sizeof(VAR_3.ifr_name))
  FUNC_2(1, "getifspeed: strlcpy");
 VAR_3.ifr_data = (caddr_t)&VAR_4;
 if (FUNC_4(VAR_2, VAR_0, (caddr_t)&VAR_3) == -1)
  FUNC_1(1, "SIOCGIFDATA");
 return ((u_int32_t)VAR_4.ifi_baudrate);
}
