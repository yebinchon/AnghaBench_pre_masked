
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ccb {int dummy; } ccb ;
typedef int u_int32_t ;
struct sense_key_table_entry {int action; } ;
struct scsi_inquiry_data {int dummy; } ;
struct ccb_scsiio {int dummy; } ;
struct asc_table_entry {int action; } ;
typedef int scsi_sense_action ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int,int,int,struct scsi_inquiry_data*,struct sense_key_table_entry const**,struct asc_table_entry const**) ;
 int FUNC_1 (union ccb*,int*,int*,int*,int*) ;

scsi_sense_action
FUNC_2(struct ccb_scsiio *VAR_22, struct scsi_inquiry_data *VAR_23,
    u_int32_t VAR_24)
{
 const struct asc_table_entry *VAR_25;
 const struct sense_key_table_entry *VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30;
 scsi_sense_action VAR_31;

 if (!FUNC_1((union ccb *)VAR_22,
     &VAR_27, &VAR_28, &VAR_29, &VAR_30)) {
  VAR_31 = VAR_20 | VAR_12 | VAR_14 | VAR_0;
 } else if ((VAR_27 == VAR_7)
  || (VAR_27 == VAR_8)) {
  VAR_31 = VAR_20|VAR_12|VAR_14;
 } else {
  FUNC_0(VAR_28, VAR_29, VAR_30,
      VAR_23,
      &VAR_26,
      &VAR_25);





  if (VAR_25 != ((void*)0)
   && (VAR_29 != 0 || VAR_30 != 0))
   VAR_31 = VAR_25->action;
  else if (VAR_26 != ((void*)0))
   VAR_31 = VAR_26->action;
  else
   VAR_31 = VAR_20|VAR_12|VAR_14;

  if (VAR_28 == VAR_10) {





   VAR_31 &= ~(VAR_18|VAR_13|VAR_16);
   VAR_31 |= VAR_19|VAR_14;
  } else if (VAR_28 == VAR_9) {
   if ((VAR_24 & VAR_5) != 0)
    VAR_31 &= ~VAR_14;
  } else if (VAR_28 == VAR_11) {
   if ((VAR_24 & VAR_6) != 0
    && (VAR_31 & VAR_18) == VAR_17) {
    VAR_31 &= ~(VAR_18|VAR_13);
    VAR_31 |= VAR_20|VAR_12|
       VAR_14;
   }
   VAR_31 |= VAR_15;
  }
 }
 if ((VAR_31 & VAR_18) >= VAR_21 &&
     (VAR_24 & VAR_2)) {
  VAR_31 &= ~VAR_18;
  VAR_31 |= VAR_17;
 } else if ((VAR_31 & VAR_18) == VAR_20 &&
     (VAR_24 & VAR_3)) {
  VAR_31 &= ~VAR_18;
  VAR_31 |= VAR_17;
 }
 if ((VAR_24 & VAR_4) != 0)
  VAR_31 |= VAR_14;
 else if ((VAR_24 & VAR_1) != 0)
  VAR_31 &= ~VAR_14;

 return (VAR_31);
}
