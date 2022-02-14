
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int addr; } ;
typedef TYPE_1__ qlnx_perm_mac_addr_t ;
struct TYPE_6__ {int* primary_mac; } ;
typedef TYPE_2__ qlnx_host_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,char*,int,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_2(qlnx_host_t *VAR_0, qlnx_perm_mac_addr_t *VAR_1)
{
 FUNC_0(VAR_1->addr, sizeof(VAR_1->addr));
 FUNC_1(VAR_1->addr, sizeof(VAR_1->addr),
  "%02x:%02x:%02x:%02x:%02x:%02x",
  VAR_0->primary_mac[0], VAR_0->primary_mac[1], VAR_0->primary_mac[2],
  VAR_0->primary_mac[3], VAR_0->primary_mac[4], VAR_0->primary_mac[5]);

 return;
}
