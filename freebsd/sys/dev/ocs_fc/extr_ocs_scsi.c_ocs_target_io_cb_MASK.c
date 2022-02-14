
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_12__ {int dif_oper; int dif; } ;
struct TYPE_11__ {int wire_len; int scsi_tgt_cb_arg; scalar_t__ auto_resp; int (* scsi_tgt_cb ) (TYPE_1__*,int ,int,int ) ;int transferred; struct TYPE_11__* ocs; TYPE_4__ hw_dif; } ;
typedef TYPE_1__ ocs_t ;
typedef int ocs_scsi_io_status_e ;
typedef int (* ocs_scsi_io_cb_t ) (TYPE_1__*,int ,int,int ) ;
typedef int ocs_remote_node_t ;
typedef TYPE_1__ ocs_io_t ;
typedef int ocs_hw_io_t ;
typedef TYPE_4__ ocs_hw_dif_info_t ;
typedef int int32_t ;


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
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int,int) ;
 int FUNC_3 (int,TYPE_4__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*,int ,int) ;

__attribute__((used)) static void
FUNC_6(ocs_hw_io_t *VAR_19, ocs_remote_node_t *VAR_20, uint32_t VAR_21,
 int32_t VAR_22, uint32_t VAR_23, void *VAR_24)
{
 ocs_io_t *VAR_25 = VAR_24;
 ocs_t *VAR_26;
 ocs_scsi_io_status_e VAR_27 = VAR_8;
 uint16_t VAR_28;
 uint8_t VAR_29;
 uint8_t VAR_30;
 ocs_hw_dif_info_t *VAR_31 = &VAR_25->hw_dif;
 int VAR_32;

 FUNC_0(VAR_25);

 FUNC_5(VAR_25, "status x%x ext_status x%x\n", VAR_22, VAR_23);

 VAR_26 = VAR_25->ocs;
 FUNC_0(VAR_26);

 FUNC_4(VAR_25);

 VAR_25->transferred += VAR_21;


 if (VAR_25->scsi_tgt_cb) {
  ocs_scsi_io_cb_t VAR_33 = VAR_25->scsi_tgt_cb;
  uint32_t VAR_34 = 0;


  VAR_25->scsi_tgt_cb = ((void*)0);




  if ((VAR_22 == 0) && (VAR_25->auto_resp))
   VAR_34 |= VAR_2;
  else
   VAR_34 |= VAR_1;

  switch (VAR_22) {
  case 129:
   VAR_27 = VAR_8;
   break;
  case 132:
   if (VAR_23 & VAR_16) {
    VAR_27 = VAR_5;
   } else if (VAR_23 & VAR_14) {
    VAR_27 = VAR_4;
   } else if (VAR_23 & VAR_17) {
    VAR_27 = VAR_6;
   } else {
    VAR_28 = ((VAR_23 >> 16) & 0xFFFF);


    VAR_29 = !!(VAR_23 & VAR_15);
    VAR_30 = !!(VAR_23 & VAR_18);

    VAR_32 = FUNC_3(VAR_29, VAR_31);

    if (VAR_29 == 0) {

     VAR_27 = FUNC_2(VAR_25, 0, VAR_25->wire_len, VAR_32);
    } else {
     if ((VAR_28 != 0) && (VAR_30 != 0) &&
         (VAR_31->dif == VAR_13) && (VAR_31->dif_oper != VAR_0) ) {
      VAR_27 = FUNC_2(VAR_25, VAR_21, VAR_28, VAR_32);
     } else {

      VAR_27 = VAR_5;
     }
    }
   }
   break;
  case 131:
   switch (VAR_23) {
   case 135:
   case 136:
    VAR_27 = VAR_3;
    break;
   case 134:
    VAR_27 = VAR_9;
    break;
   case 133:
    VAR_27 = VAR_10;
    break;
   default:

    VAR_27 = VAR_7;
    break;
   }
   break;

  case 128:

   VAR_27 = VAR_12;
   break;

  case 130:

   VAR_27 = VAR_11;
   break;

  default:
   VAR_27 = VAR_7;
   break;
  }

  VAR_33(VAR_25, VAR_27, VAR_34, VAR_25->scsi_tgt_cb_arg);

 }
 FUNC_1(VAR_26);
}
