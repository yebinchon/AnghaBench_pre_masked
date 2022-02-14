
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct make_dev_args {int mda_mode; struct etherswitch_softc* mda_si_drv1; int mda_gid; int mda_uid; int * mda_devsw; } ;
struct etherswitch_softc {int sc_devnode; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct etherswitch_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int FUNC_3 (struct make_dev_args*) ;
 int FUNC_4 (struct make_dev_args*,int *,char*,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4)
{
 int VAR_5;
 struct etherswitch_softc *VAR_6;
 struct make_dev_args VAR_7;

 VAR_6 = FUNC_0(VAR_4);
 VAR_6->sc_dev = VAR_4;
 FUNC_3(&VAR_7);
 VAR_7.mda_devsw = &VAR_3;
 VAR_7.mda_uid = VAR_2;
 VAR_7.mda_gid = VAR_1;
 VAR_7.mda_mode = 0600;
 VAR_7.mda_si_drv1 = VAR_6;
 VAR_5 = FUNC_4(&VAR_7, &VAR_6->sc_devnode, "etherswitch%d",
     FUNC_1(VAR_4));
 if (VAR_5 != 0) {
  FUNC_2(VAR_4, "failed to create character device\n");
  return (VAR_0);
 }

 return (0);
}
