
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_softc {int sc_devnode; int sc_dev; } ;
struct make_dev_args {int mda_mode; int mda_unit; struct smb_softc* mda_si_drv1; int mda_gid; int mda_uid; int * mda_devsw; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct smb_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct make_dev_args*) ;
 int FUNC_3 (struct make_dev_args*,int *,char*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 struct smb_softc *VAR_4;
 struct make_dev_args VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_3);
 VAR_4->sc_dev = VAR_3;

 FUNC_2(&VAR_5);
 VAR_5.mda_devsw = &VAR_2;
 VAR_5.mda_unit = FUNC_1(VAR_3);
 VAR_5.mda_uid = VAR_1;
 VAR_5.mda_gid = VAR_0;
 VAR_5.mda_mode = 0600;
 VAR_5.mda_si_drv1 = VAR_4;
 VAR_6 = FUNC_3(&VAR_5, &VAR_4->sc_devnode, "smb%d", VAR_5.mda_unit);
 return (VAR_6);
}
