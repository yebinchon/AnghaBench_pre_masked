
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ phandle_t ;
struct TYPE_7__ {int swid; int sw_addr; int phy_base; int num_ports; int sx; scalar_t__ node; int dev; } ;
typedef TYPE_1__ e6000sw_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;






 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,int*,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_9 (int ,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_4)
{
 e6000sw_softc_t *VAR_5;
 const char *VAR_6;
 phandle_t VAR_7;

 VAR_5 = FUNC_5(VAR_4);
 VAR_7 = FUNC_9(FUNC_2("/"),
     "marvell,mv88e6085");
 if (VAR_7 == 0) {
  VAR_7 = FUNC_9(FUNC_2("/"),
      "marvell,mv88e6190");

  if (VAR_7 == 0)
   return (VAR_1);





  VAR_5->swid = 130;
 }

 if (VAR_3)
  FUNC_6(VAR_4, "Found switch_node: 0x%x\n", VAR_7);

 VAR_5->dev = VAR_4;
 VAR_5->node = VAR_7;

 if (FUNC_3(VAR_5->node, "reg", &VAR_5->sw_addr,
     sizeof(VAR_5->sw_addr)) < 0)
  return (VAR_1);
 if (VAR_5->sw_addr < 0 || VAR_5->sw_addr > 32)
  return (VAR_1);





 FUNC_11(&VAR_5->sx, "e6000sw_tmp");
 FUNC_0(VAR_5);
 VAR_5->swid = FUNC_8(VAR_5, FUNC_4(VAR_5, 0), VAR_2) & 0xfff0;
 FUNC_1(VAR_5);
 FUNC_10(&VAR_5->sx);

 switch (VAR_5->swid) {
 case 133:
  VAR_6 = "Marvell 88E6141";
  VAR_5->phy_base = 0x10;
  VAR_5->num_ports = 6;
  break;
 case 129:
  VAR_6 = "Marvell 88E6341";
  VAR_5->phy_base = 0x10;
  VAR_5->num_ports = 6;
  break;
 case 128:
  VAR_6 = "Marvell 88E6352";
  VAR_5->num_ports = 7;
  break;
 case 132:
  VAR_6 = "Marvell 88E6172";
  VAR_5->num_ports = 7;
  break;
 case 131:
  VAR_6 = "Marvell 88E6176";
  VAR_5->num_ports = 7;
  break;
 case 130:
  VAR_6 = "Marvell 88E6190";
  VAR_5->num_ports = 11;
  break;
 default:
  FUNC_6(VAR_4, "Unrecognized device, id 0x%x.\n", VAR_5->swid);
  return (VAR_1);
 }

 FUNC_7(VAR_4, VAR_6);

 return (VAR_0);
}
