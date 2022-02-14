
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ccb {int csio; } ;
typedef int u_int8_t ;
typedef int u_int16_t ;
struct scsi_send_volume_tag_parameters {char* vitf; int minvsn; } ;
struct TYPE_2__ {int cv_serial; int cv_volid; } ;
struct changer_set_voltag_request {size_t csvr_type; int csvr_addr; int csvr_flags; TYPE_1__ csvr_voltag; } ;
struct ch_softc {int* sc_counts; int* sc_firsts; int device_stats; } ;
struct cam_periph {scalar_t__ softc; } ;
typedef int ssvtp ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct scsi_send_volume_tag_parameters*,int) ;
 union ccb* FUNC_1 (struct cam_periph*,int ) ;
 int FUNC_2 (union ccb*,int ,int ,int ,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int,int ,int ,int,int ,struct scsi_send_volume_tag_parameters*,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (union ccb*) ;

__attribute__((used)) static int
FUNC_9(struct cam_periph *VAR_19,
     struct changer_set_voltag_request *VAR_20)
{
 union ccb *VAR_21;
 struct ch_softc *VAR_22;
 u_int16_t VAR_23;
 u_int8_t VAR_24;
 struct scsi_send_volume_tag_parameters VAR_25;
 int VAR_26;
 int VAR_27;

 VAR_26 = 0;
 VAR_22 = (struct ch_softc *)VAR_19->softc;

 FUNC_0(&VAR_25, sizeof(VAR_25));
 for (VAR_27=0; VAR_27<sizeof(VAR_25.vitf); VAR_27++) {
  VAR_25.vitf[VAR_27] = ' ';
 }




 if (VAR_20->csvr_type > VAR_2)
  return VAR_6;
 if (VAR_20->csvr_addr > (VAR_22->sc_counts[VAR_20->csvr_type] - 1))
  return VAR_7;

 VAR_23 = VAR_22->sc_firsts[VAR_20->csvr_type] + VAR_20->csvr_addr;

 if (VAR_20->csvr_flags & VAR_4) {
  switch (VAR_20->csvr_flags & VAR_5) {
  case 128:
   VAR_24 = VAR_9;
   break;
  case 129:
   VAR_24 = VAR_11;
   break;
  case 130:
   VAR_24 = VAR_13;
   break;
  default:
   VAR_26 = VAR_6;
   goto out;
  }
 } else {
  switch (VAR_20->csvr_flags & VAR_5) {
  case 128:
   VAR_24 = VAR_10;
   break;
  case 129:
   VAR_24 = VAR_12;
   break;
  case 130:
   VAR_24 = VAR_14;
   break;
  default:
   VAR_26 = VAR_6;
   goto out;
  }
 }

 FUNC_3(VAR_25.vitf, VAR_20->csvr_voltag.cv_volid,
        FUNC_4(FUNC_7(VAR_20->csvr_voltag.cv_volid), sizeof(VAR_25.vitf)));
 FUNC_6(VAR_20->csvr_voltag.cv_serial, VAR_25.minvsn);

 VAR_21 = FUNC_1(VAR_19, VAR_0);

 FUNC_5(&VAR_21->csio,
                      1,
                     VAR_17,
                         VAR_8,
                              VAR_23,
                               VAR_24,
                         &VAR_25,
                        VAR_16,
                      VAR_3);

 VAR_26 = FUNC_2(VAR_21, VAR_18, VAR_1,
                      VAR_15,
      VAR_22->device_stats);

 FUNC_8(VAR_21);

 out:
 return VAR_26;
}
