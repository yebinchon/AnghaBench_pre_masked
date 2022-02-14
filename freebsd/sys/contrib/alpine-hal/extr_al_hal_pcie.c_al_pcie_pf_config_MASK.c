
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_pcie_port {int port_id; } ;
struct al_pcie_pf_config_params {int pf_num; struct al_pcie_port* pcie_port; } ;
typedef struct al_pcie_pf {int pf_num; struct al_pcie_port* pcie_port; } const al_pcie_pf ;


 int VAR_0 ;
 int FUNC_0 (struct al_pcie_pf_config_params const*) ;
 int FUNC_1 (char*,int ,int ,...) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct al_pcie_port*) ;
 int FUNC_4 (struct al_pcie_pf_config_params const*,struct al_pcie_pf_config_params const*) ;

int
FUNC_5(
 struct al_pcie_pf *VAR_1,
 const struct al_pcie_pf_config_params *VAR_2)
{
 struct al_pcie_port *VAR_3;
 int VAR_4 = 0;

 FUNC_0(VAR_1);
 FUNC_0(VAR_2);

 VAR_3 = VAR_1->pcie_port;

 if (!FUNC_3(VAR_3)) {
  FUNC_2("PCIe %d: port not enabled, cannot configure port\n", VAR_3->port_id);
  return -VAR_0;
 }

 FUNC_1("PCIe %d: pf %d config\n", VAR_3->port_id, VAR_1->pf_num);

 if (VAR_2)
  VAR_4 = FUNC_4(VAR_1, VAR_2);
 if (VAR_4)
  goto done;

done:
 FUNC_1("PCIe %d: pf %d config %s\n",
  VAR_3->port_id, VAR_1->pf_num, VAR_4 ? "failed" : "done");

 return VAR_4;
}
