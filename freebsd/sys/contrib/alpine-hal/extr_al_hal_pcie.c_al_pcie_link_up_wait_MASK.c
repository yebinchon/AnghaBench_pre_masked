
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct al_pcie_port {int port_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,...) ;
 scalar_t__ FUNC_1 (struct al_pcie_port*,int *) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct al_pcie_port *VAR_3, uint32_t VAR_4)
{
 int VAR_5 = VAR_4 * VAR_1;

 while (VAR_5-- > 0) {
  if (FUNC_1(VAR_3, ((void*)0))) {
   FUNC_0("PCIe_%d: <<<<<<<<< Link up >>>>>>>>>\n", VAR_3->port_id);
   return 0;
  } else
   FUNC_0("PCIe_%d: No link up, %d attempts remaining\n",
    VAR_3->port_id, VAR_5);

  FUNC_2(VAR_0);
 }
 FUNC_0("PCIE_%d: link is not established in time\n",
    VAR_3->port_id);

 return VAR_2;
}
