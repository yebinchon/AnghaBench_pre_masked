
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {scalar_t__ ifr_data; int ifr_name; } ;
struct ifaddrs {char* ifa_name; struct ifaddrs* ifa_next; } ;
struct if_data {int dummy; } ;
typedef int ifr ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ifreq*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (struct ifaddrs*) ;
 int FUNC_5 (struct ifaddrs**) ;
 int FUNC_6 (int,int ,scalar_t__) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,char*,int) ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*,scalar_t__) ;

int
FUNC_11(char *VAR_3)
{
 int VAR_4;
 struct ifreq VAR_5;
 struct if_data VAR_6;

 if ((VAR_4 = FUNC_7(VAR_0, VAR_2, 0)) == -1)
  FUNC_2(1, "socket");
 FUNC_0(&VAR_5, sizeof(VAR_5));
 if (FUNC_8(VAR_5.ifr_name, VAR_3, sizeof(VAR_5.ifr_name)) >=
  sizeof(VAR_5.ifr_name))
   FUNC_3(1, "main ifr_name: strlcpy");
 VAR_5.ifr_data = (caddr_t)&VAR_6;
 if (FUNC_6(VAR_4, VAR_1, (caddr_t)&VAR_5) == -1)
  return (0);
 if (FUNC_1(VAR_4))
  FUNC_2(1, "close");

 return (1);

}
