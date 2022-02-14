
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u_int16_t ;
struct volume_tag {int dummy; } ;
struct read_element_status_device_id {size_t designator_length; int piv_assoc_designator_type; int prot_code_set; scalar_t__ designator; } ;
struct TYPE_9__ {int dt_scsi_flags; int dt_scsi_addr; } ;
struct TYPE_10__ {TYPE_4__ scsi_2; } ;
struct TYPE_7__ {struct read_element_status_device_id devid; } ;
struct TYPE_6__ {struct read_element_status_device_id devid; } ;
struct TYPE_8__ {TYPE_2__ vol_tags_and_devid; struct read_element_status_device_id devid; TYPE_1__ pvol_and_devid; struct volume_tag pvoltag; struct volume_tag* voltag; } ;
struct read_element_status_descriptor {int flags1; int flags2; TYPE_5__ dt_or_obsolete; TYPE_3__ voltag_devid; int ssea; int sense_qual; int sense_code; int eaddr; } ;
struct changer_element_status {size_t ces_int_addr; size_t ces_addr; size_t ces_type; int ces_flags; size_t ces_source_addr; size_t ces_source_type; char* ces_designator; size_t ces_designator_length; int ces_scsi_id; int ces_scsi_lun; int ces_protocol_id; int ces_designator_type; int ces_assoc; int ces_code_set; int ces_pvoltag; int ces_sensequal; int ces_sensecode; } ;
struct ch_softc {size_t* sc_firsts; size_t* sc_counts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int) ;
 size_t VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ) ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (void*,void*,size_t) ;
 int FUNC_5 (int *,struct volume_tag*) ;
 int FUNC_6 (char*,size_t) ;
 size_t FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct ch_softc *VAR_18,
      u_int16_t VAR_19,
      struct read_element_status_descriptor *VAR_20,
      struct changer_element_status *VAR_21,
      int VAR_22)
{
 u_int16_t VAR_23 = FUNC_7(VAR_20->eaddr);
 u_int16_t VAR_24;
 struct volume_tag *VAR_25 = ((void*)0), *VAR_26 = ((void*)0);
 struct read_element_status_device_id *VAR_27 = ((void*)0);

 VAR_21->ces_int_addr = VAR_23;

 for (VAR_24 = VAR_7; VAR_24 <= VAR_6; VAR_24++) {
  if ((VAR_18->sc_firsts[VAR_24] <= VAR_23)
      && ((VAR_18->sc_firsts[VAR_24] + VAR_18->sc_counts[VAR_24])
   > VAR_23)) {
   VAR_21->ces_addr = VAR_23 - VAR_18->sc_firsts[VAR_24];
   VAR_21->ces_type = VAR_24;
   break;
  }
 }

 VAR_21->ces_flags = VAR_20->flags1;

 VAR_21->ces_sensecode = VAR_20->sense_code;
 VAR_21->ces_sensequal = VAR_20->sense_qual;

 if (VAR_20->flags2 & VAR_12)
  VAR_21->ces_flags |= VAR_0;

 if (VAR_20->flags2 & VAR_15) {

  VAR_23 = FUNC_7(VAR_20->ssea);


  for (VAR_24 = VAR_7; VAR_24 <= VAR_6; VAR_24++) {
   if ((VAR_18->sc_firsts[VAR_24] <= VAR_23)
       && ((VAR_18->sc_firsts[VAR_24] + VAR_18->sc_counts[VAR_24])
    > VAR_23)) {
    VAR_21->ces_source_addr =
     VAR_23 - VAR_18->sc_firsts[VAR_24];
    VAR_21->ces_source_type = VAR_24;
    VAR_21->ces_flags |= VAR_5;
    break;
   }
  }

  if (!(VAR_21->ces_flags & VAR_5))
   FUNC_6("ch: warning: could not map element source "
          "address %ud to a valid element type\n",
          VAR_23);
 }




 if (VAR_19 & VAR_14)
  VAR_25 = &VAR_20->voltag_devid.pvoltag;
 if (VAR_19 & VAR_8)
  VAR_26 = (VAR_19 & VAR_14) ?
      &VAR_20->voltag_devid.voltag[1] :&VAR_20->voltag_devid.pvoltag;




 if (VAR_22 >= VAR_17) {
  if ((VAR_19 & VAR_14) ^
      (VAR_19 & VAR_8))
   VAR_27 = &VAR_20->voltag_devid.pvol_and_devid.devid;
  else if (!(VAR_19 & VAR_14) &&
    !(VAR_19 & VAR_8))
   VAR_27 = &VAR_20->voltag_devid.devid;
  else
   VAR_27 = &VAR_20->voltag_devid.vol_tags_and_devid.devid;
 }

 if (VAR_25)
  FUNC_5(&(VAR_21->ces_pvoltag), VAR_25);
 if (VAR_26)
  FUNC_5(&(VAR_21->ces_pvoltag), VAR_26);
 if (VAR_27 != ((void*)0)) {
  if (VAR_27->designator_length > 0) {
   FUNC_4((void *)VAR_27->designator,
         (void *)VAR_21->ces_designator,
         VAR_27->designator_length);
   VAR_21->ces_designator_length = VAR_27->designator_length;






   VAR_21->ces_designator[VAR_27->designator_length]= '\0';
  }
  if (VAR_27->piv_assoc_designator_type &
      VAR_13) {
   VAR_21->ces_flags |= VAR_2;
   VAR_21->ces_protocol_id =
       FUNC_3(
       VAR_27->prot_code_set);
  }
  VAR_21->ces_code_set =
      FUNC_1(VAR_27->prot_code_set);
  VAR_21->ces_assoc = FUNC_0(
      VAR_27->piv_assoc_designator_type);
  VAR_21->ces_designator_type = FUNC_2(
      VAR_27->piv_assoc_designator_type);
 } else if (VAR_22 > VAR_16) {

  VAR_21->ces_designator_length = 0;
  VAR_21->ces_designator[0] = '\0';
  VAR_21->ces_protocol_id = VAR_3;
 }

 if (VAR_22 <= VAR_16) {
  if (VAR_20->dt_or_obsolete.scsi_2.dt_scsi_flags &
      VAR_9) {
   VAR_21->ces_flags |= VAR_4;
   VAR_21->ces_scsi_id =
       VAR_20->dt_or_obsolete.scsi_2.dt_scsi_addr;
  }

  if (VAR_20->dt_or_obsolete.scsi_2.dt_scsi_addr &
      VAR_11) {
   VAR_21->ces_flags |= VAR_1;
   VAR_21->ces_scsi_lun =
       VAR_20->dt_or_obsolete.scsi_2.dt_scsi_flags &
       VAR_10;
  }
 }
}
