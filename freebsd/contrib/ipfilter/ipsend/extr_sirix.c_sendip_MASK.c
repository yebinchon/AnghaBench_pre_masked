
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_raw {int sr_ifname; } ;
struct TYPE_2__ {int sa_data; } ;
struct ifreq {TYPE_1__ ifr_addr; int ifr_name; } ;
struct ether_header {int ether_shost; } ;
typedef int sr ;
typedef int ifr ;


 int VAR_0 ;
 int FUNC_0 (int,struct sockaddr_raw*,int*) ;
 int FUNC_1 (int,int ,struct ifreq*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct ifreq*,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int,char*,int) ;

int FUNC_7(int VAR_1, char *VAR_2, int VAR_3)
{
 struct sockaddr_raw VAR_4;
 int VAR_5 = sizeof(VAR_4);
 struct ifreq VAR_6;
 struct ether_header *VAR_7 = (struct ether_header *)VAR_2;

 if (FUNC_0(VAR_1, &VAR_4, &VAR_5) == -1)
     {
  FUNC_4("getsockname");
  return -1;
     }

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 FUNC_5(VAR_6.ifr_name, VAR_4.sr_ifname, sizeof VAR_6.ifr_name);

 if (FUNC_1(VAR_1, VAR_0, &VAR_6) == -1)
     {
  FUNC_4("ioctl SIOCGIFADDR");
  return -1;
     }

 FUNC_2(VAR_7->ether_shost, VAR_6.ifr_addr.sa_data, sizeof(VAR_7->ether_shost));

 if (FUNC_6(VAR_1, VAR_2, VAR_3) == -1)
     {
  FUNC_4("send");
  return -1;
     }

 return VAR_3;
}
