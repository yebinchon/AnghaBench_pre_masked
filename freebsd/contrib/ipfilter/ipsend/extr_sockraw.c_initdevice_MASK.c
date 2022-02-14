
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; int sa_family; } ;
struct ifreq {int ifr_addr; int ifr_name; } ;
typedef int s ;
typedef int ifr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,int ,struct ifreq*) ;
 int FUNC_4 (struct ifreq*,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,char*,int) ;

int FUNC_8(char *VAR_4, int VAR_5)
{
 struct sockaddr VAR_6;
 struct ifreq VAR_7;
 int VAR_8;

 FUNC_4(&VAR_7, 0, sizeof(VAR_7));
 FUNC_7(VAR_7.ifr_name, VAR_4, sizeof VAR_7.ifr_name);

 if ((VAR_8 = FUNC_6(VAR_0, VAR_3, VAR_1)) < 0)
     {
  FUNC_5("socket(AF_INET, SOCK_RAW, IPPROTO_RAW)");
  return -1;
     }

 if (FUNC_3(VAR_8, VAR_2, &VAR_7) == -1)
     {
  FUNC_5("ioctl SIOCGIFADDR");
  return -1;
     }

 FUNC_2((char *)&VAR_6, sizeof(VAR_6));
 VAR_6.sa_family = VAR_0;
 FUNC_0(&VAR_7.ifr_addr, VAR_6.sa_data, 4);
 if (FUNC_1(VAR_8, &VAR_6, sizeof(VAR_6)) == -1)
  FUNC_5("bind");
 return VAR_8;
}
