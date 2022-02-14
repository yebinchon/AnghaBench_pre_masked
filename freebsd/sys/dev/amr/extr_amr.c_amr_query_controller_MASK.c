
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amr_softc {int amr_maxdrives; int amr_ld_del_supported; int amr_maxio; TYPE_3__* amr_drive; int amr_maxchan; int amr_dev; int amr_type; scalar_t__ support_ext_cdb; } ;
struct TYPE_5__ {int aa_maxio; int aa_channels; } ;
struct TYPE_4__ {int al_numdrives; int* al_size; int * al_properties; int * al_state; } ;
struct amr_prodinfo {int ae_numldrives; int* ae_drivesize; TYPE_2__ ae_adapter; TYPE_1__ ae_ldrv; scalar_t__ ae_signature; int ap_maxio; int ap_nschan; int * ae_driveprop; int * ae_drivestate; } ;
struct amr_enquiry3 {int ae_numldrives; int* ae_drivesize; TYPE_2__ ae_adapter; TYPE_1__ ae_ldrv; scalar_t__ ae_signature; int ap_maxio; int ap_nschan; int * ae_driveprop; int * ae_drivestate; } ;
struct amr_enquiry {int ae_numldrives; int* ae_drivesize; TYPE_2__ ae_adapter; TYPE_1__ ae_ldrv; scalar_t__ ae_signature; int ap_maxio; int ap_nschan; int * ae_driveprop; int * ae_drivestate; } ;
struct TYPE_6__ {int al_size; int al_properties; int al_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct amr_prodinfo* FUNC_0 (struct amr_softc*,int,int ,int ,int ,int*) ;
 scalar_t__ FUNC_1 (struct amr_softc*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct amr_prodinfo*,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct amr_softc *VAR_12)
{
    struct amr_enquiry3 *VAR_13;
    struct amr_prodinfo *VAR_14;
    struct amr_enquiry *VAR_15;
    int VAR_16;
    int VAR_17;




    VAR_12->support_ext_cdb = FUNC_1(VAR_12);

    if(VAR_12->support_ext_cdb) {
 FUNC_2(2,"supports extended CDBs.");
    }




    if ((VAR_13 = FUNC_0(VAR_12, 2048, VAR_0, VAR_3,
      VAR_4, &VAR_17)) != ((void*)0)) {




 for (VAR_16 = 0; VAR_16 < VAR_13->ae_numldrives; VAR_16++) {
     VAR_12->amr_drive[VAR_16].al_size = VAR_13->ae_drivesize[VAR_16];
     VAR_12->amr_drive[VAR_16].al_state = VAR_13->ae_drivestate[VAR_16];
     VAR_12->amr_drive[VAR_16].al_properties = VAR_13->ae_driveprop[VAR_16];
     FUNC_2(2, "  drive %d: %d state %x properties %x\n", VAR_16, VAR_12->amr_drive[VAR_16].al_size,
    VAR_12->amr_drive[VAR_16].al_state, VAR_12->amr_drive[VAR_16].al_properties);
 }
 FUNC_4(VAR_13, VAR_10);




 if ((VAR_14 = FUNC_0(VAR_12, 2048, VAR_0, VAR_5, 0, &VAR_17)) == ((void*)0)) {
     FUNC_3(VAR_12->amr_dev, "can't obtain product data from controller\n");
     return(1);
 }
 VAR_12->amr_maxdrives = 40;
 VAR_12->amr_maxchan = VAR_14->ap_nschan;
 VAR_12->amr_maxio = VAR_14->ap_maxio;
 VAR_12->amr_type |= VAR_8;
 FUNC_4(VAR_14, VAR_10);

 VAR_14 = FUNC_0(VAR_12, 0, VAR_9, VAR_11, 0, &VAR_17);
 if (VAR_14 != ((void*)0))
     FUNC_4(VAR_14, VAR_10);
 if (!VAR_17) {
     VAR_12->amr_ld_del_supported = 1;
     FUNC_3(VAR_12->amr_dev, "delete logical drives supported by controller\n");
 }
    } else {


 if ((VAR_15 = (struct amr_enquiry *)FUNC_0(VAR_12, 2048, VAR_2, 0, 0, &VAR_17)) == ((void*)0)) {
     if ((VAR_15 = (struct amr_enquiry *)FUNC_0(VAR_12, 2048, VAR_1, 0, 0, &VAR_17)) == ((void*)0)) {
  FUNC_3(VAR_12->amr_dev, "can't obtain configuration data from controller\n");
  return(1);
     }
     VAR_15->ae_signature = 0;
 }




 for (VAR_16 = 0; VAR_16 < VAR_15->ae_ldrv.al_numdrives; VAR_16++) {
     VAR_12->amr_drive[VAR_16].al_size = VAR_15->ae_ldrv.al_size[VAR_16];
     VAR_12->amr_drive[VAR_16].al_state = VAR_15->ae_ldrv.al_state[VAR_16];
     VAR_12->amr_drive[VAR_16].al_properties = VAR_15->ae_ldrv.al_properties[VAR_16];
     FUNC_2(2, "  drive %d: %d state %x properties %x\n", VAR_16, VAR_12->amr_drive[VAR_16].al_size,
    VAR_12->amr_drive[VAR_16].al_state, VAR_12->amr_drive[VAR_16].al_properties);
 }

 VAR_12->amr_maxdrives = 8;
 VAR_12->amr_maxchan = VAR_15->ae_adapter.aa_channels;
 VAR_12->amr_maxio = VAR_15->ae_adapter.aa_maxio;
 FUNC_4(VAR_15, VAR_10);
    }




    for (; VAR_16 < VAR_7; VAR_16++)
 VAR_12->amr_drive[VAR_16].al_size = 0xffffffff;





    VAR_12->amr_maxio = FUNC_5(VAR_12->amr_maxio, VAR_6);

    return(0);
}
