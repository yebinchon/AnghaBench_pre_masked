
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; } ;
struct ifaddr {struct sockaddr* ifa_addr; struct sockaddr* ifa_dstaddr; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ifaddr*,int,int,int) ;

int
FUNC_1(struct ifaddr *VAR_3, int VAR_4, int VAR_5)
{
 struct sockaddr *VAR_6;
 int VAR_7 = VAR_2;

 if (VAR_5 & VAR_0) {
  VAR_6 = VAR_3->ifa_dstaddr;
 } else {
  VAR_6 = VAR_3->ifa_addr;
 }

 switch (VAR_6->sa_family) {
 case 128:
 case 129:

  VAR_7 = VAR_1;
  break;
 }
 return (FUNC_0(VAR_3, VAR_4, VAR_5, VAR_7));
}
