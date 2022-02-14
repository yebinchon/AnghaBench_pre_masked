
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_data; } ;
struct ifreq {TYPE_1__ ifr_addr; } ;
struct ifnet {int if_type; int if_addrlen; int * if_hw_addr; } ;


 int VAR_0 ;


 int FUNC_0 (int *,int ,int ) ;

int
FUNC_1(struct ifnet *VAR_1, struct ifreq *VAR_2)
{

 if (VAR_1->if_hw_addr == ((void*)0))
  return (VAR_0);

 switch (VAR_1->if_type) {
 case 129:
 case 128:
  FUNC_0(VAR_1->if_hw_addr, VAR_2->ifr_addr.sa_data, VAR_1->if_addrlen);
  return (0);
 default:
  return (VAR_0);
 }
}
