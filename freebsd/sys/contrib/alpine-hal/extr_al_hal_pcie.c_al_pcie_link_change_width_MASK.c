
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct al_pcie_port {int port_id; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

int
FUNC_1(struct al_pcie_port *VAR_1,
         uint8_t VAR_2 __attribute__((__unused__)))
{
 FUNC_0("PCIe %d: link change width not implemented\n",
  VAR_1->port_id);

 return -VAR_0;
}
