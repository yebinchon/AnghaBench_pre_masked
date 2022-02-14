
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct etherswitch_softc {int sc_dev; } ;
struct cdev {struct etherswitch_softc* si_drv1; } ;
typedef int etherswitch_vlangroup_t ;
struct TYPE_4__ {int val; int reg; } ;
typedef TYPE_1__ etherswitch_reg_t ;
struct TYPE_5__ {int es_port; } ;
typedef TYPE_2__ etherswitch_portid_t ;
typedef int etherswitch_port_t ;
struct TYPE_6__ {int val; int reg; int phy; } ;
typedef TYPE_3__ etherswitch_phyreg_t ;
typedef int etherswitch_info_t ;
typedef int etherswitch_conf_t ;
typedef int device_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,int ,int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int *,scalar_t__,int) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static int
FUNC_20(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3, int VAR_4, struct thread *VAR_5)
{
 struct etherswitch_softc *VAR_6 = VAR_1->si_drv1;
 device_t VAR_7 = VAR_6->sc_dev;
 device_t VAR_8 = FUNC_19(VAR_7);
 etherswitch_conf_t VAR_9;
 etherswitch_info_t *VAR_10;
 etherswitch_reg_t *VAR_11;
 etherswitch_phyreg_t *VAR_12;
 etherswitch_portid_t *VAR_13;
 int VAR_14 = 0;

 switch (VAR_2) {
 case 139:
  VAR_10 = FUNC_5(VAR_8);
  FUNC_17(VAR_10, VAR_3, sizeof(etherswitch_info_t));
  break;

 case 136:
  VAR_11 = (etherswitch_reg_t *)VAR_3;
  FUNC_8(VAR_8);
  VAR_11->val = FUNC_10(VAR_8, VAR_11->reg);
  FUNC_14(VAR_8);
  break;

 case 129:
  VAR_11 = (etherswitch_reg_t *)VAR_3;
  FUNC_8(VAR_8);
  VAR_14 = FUNC_16(VAR_8, VAR_11->reg, VAR_11->val);
  FUNC_14(VAR_8);
  break;

 case 137:
  VAR_14 = FUNC_6(VAR_8, (etherswitch_port_t *)VAR_3);
  break;

 case 130:
  VAR_14 = FUNC_12(VAR_8, (etherswitch_port_t *)VAR_3);
  break;

 case 133:
  VAR_14 = FUNC_7(VAR_8, (etherswitch_vlangroup_t *)VAR_3);
  break;

 case 128:
  VAR_14 = FUNC_13(VAR_8, (etherswitch_vlangroup_t *)VAR_3);
  break;

 case 138:
  VAR_12 = (etherswitch_phyreg_t *)VAR_3;
  VAR_12->val = FUNC_9(VAR_8, VAR_12->phy, VAR_12->reg);
  break;

 case 131:
  VAR_12 = (etherswitch_phyreg_t *)VAR_3;
  VAR_14 = FUNC_15(VAR_8, VAR_12->phy, VAR_12->reg, VAR_12->val);
  break;

 case 140:
  FUNC_18(&VAR_9, sizeof(etherswitch_conf_t));
  VAR_14 = FUNC_4(VAR_8, &VAR_9);
  FUNC_17(&VAR_9, VAR_3, sizeof(etherswitch_conf_t));
  break;

 case 132:
  VAR_14 = FUNC_11(VAR_8, (etherswitch_conf_t *)VAR_3);
  break;

 case 142:
  VAR_14 = FUNC_2(VAR_8);
  break;

 case 141:
  VAR_13 = (etherswitch_portid_t *)VAR_3;
  VAR_14 = FUNC_3(VAR_8, VAR_13->es_port);
  break;

 case 135:
  VAR_14 = FUNC_0(VAR_8, (void *) VAR_3);
  break;

 case 134:
  VAR_14 = FUNC_1(VAR_8, (void *) VAR_3);
  break;

 default:
  VAR_14 = VAR_0;
 }

 return (VAR_14);
}
