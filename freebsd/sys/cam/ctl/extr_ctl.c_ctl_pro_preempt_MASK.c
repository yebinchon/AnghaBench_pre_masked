
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
struct TYPE_8__ {int residx; int res_type; int sa_res_key; void* action; } ;
struct TYPE_7__ {TYPE_4__ pr_info; } ;
struct TYPE_6__ {void* msg_type; int nexus; } ;
union ctl_ha_msg {TYPE_3__ pr; TYPE_2__ hdr; } ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct scsi_per_res_out_parms {int serv_act_res_key; } ;
struct scsi_per_res_out {int scope_type; } ;
struct ctl_softc {int dummy; } ;
struct TYPE_5__ {int nexus; } ;
struct ctl_scsiio {TYPE_1__ io_hdr; int kern_data_ptr; } ;
struct ctl_lun {int pr_res_idx; int pr_key_count; int pr_res_type; int flags; int lun_lock; int pr_generation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
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
 int FUNC_0 (struct ctl_lun*,int) ;
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (struct ctl_lun*,int,int ) ;
 scalar_t__ FUNC_3 (struct ctl_lun*,int) ;
 int FUNC_4 (int ,union ctl_ha_msg*,int,int ) ;
 int FUNC_5 (struct ctl_scsiio*,int,int,int,int,int) ;
 int FUNC_6 (struct ctl_scsiio*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct ctl_softc *VAR_17, struct ctl_lun *VAR_18, uint64_t VAR_19,
  uint64_t VAR_20, uint8_t VAR_21, uint32_t VAR_22,
  struct ctl_scsiio *VAR_23, struct scsi_per_res_out *VAR_24,
  struct scsi_per_res_out_parms* VAR_25)
{
 union ctl_ha_msg VAR_26;
 int VAR_27;

 FUNC_9(&VAR_18->lun_lock);
 if (VAR_20 == 0) {
  if (VAR_18->pr_res_idx == VAR_4) {

   if ((VAR_24->scope_type & VAR_12) !=
        VAR_11) {
    FUNC_10(&VAR_18->lun_lock);
    FUNC_5( VAR_23,
                          1,
                        1,
                      2,
                          1,
                    4);
    FUNC_1((union ctl_io *)VAR_23);
    return (1);
   }

          if (VAR_21>8 || VAR_21==2 || VAR_21==4 || VAR_21==0) {
    FUNC_10(&VAR_18->lun_lock);
    FUNC_5( VAR_23,
                                           1,
                        1,
                      2,
                          1,
                    0);
    FUNC_1((union ctl_io *)VAR_23);
    return (1);
          }





   for(VAR_27 = 0; VAR_27 < VAR_2; VAR_27++) {
    if (VAR_27 == VAR_22 || FUNC_3(VAR_18, VAR_27) == 0)
     continue;

    FUNC_0(VAR_18, VAR_27);
    FUNC_2(VAR_18, VAR_27, VAR_7);
   }
   VAR_18->pr_key_count = 1;
   VAR_18->pr_res_type = VAR_21;
   if (VAR_18->pr_res_type != VAR_15 &&
       VAR_18->pr_res_type != VAR_13)
    VAR_18->pr_res_idx = VAR_22;
   VAR_18->pr_generation++;
   FUNC_10(&VAR_18->lun_lock);


   VAR_26.hdr.nexus = VAR_23->io_hdr.nexus;
   VAR_26.hdr.msg_type = VAR_3;
   VAR_26.pr.pr_info.action = VAR_5;
   VAR_26.pr.pr_info.residx = VAR_18->pr_res_idx;
   VAR_26.pr.pr_info.res_type = VAR_21;
   FUNC_8(VAR_26.pr.pr_info.sa_res_key,
          VAR_25->serv_act_res_key,
          sizeof(VAR_25->serv_act_res_key));
   FUNC_4(VAR_0, &VAR_26,
       sizeof(VAR_26.pr), VAR_10);
  } else {

   FUNC_10(&VAR_18->lun_lock);
   FUNC_7(VAR_23->kern_data_ptr, VAR_9);
   FUNC_5(VAR_23,
                         1,
                       0,
                     8,
                         0,
                   0);
   FUNC_1((union ctl_io *)VAR_23);
   return (1);
  }
 } else if (VAR_18->pr_res_idx == VAR_4
  || !(VAR_18->flags & VAR_1)) {
  int VAR_28 = 0;

  if (VAR_19 == VAR_20) {
   FUNC_10(&VAR_18->lun_lock);
   FUNC_7(VAR_23->kern_data_ptr, VAR_9);
   FUNC_5(VAR_23,
                         1,
                       0,
                     8,
                         0,
                   0);
   FUNC_1((union ctl_io *)VAR_23);
   return (1);
  }

  for (VAR_27 = 0; VAR_27 < VAR_2; VAR_27++) {
   if (FUNC_3(VAR_18, VAR_27) != VAR_20)
    continue;

   VAR_28 = 1;
   FUNC_0(VAR_18, VAR_27);
   VAR_18->pr_key_count--;
   FUNC_2(VAR_18, VAR_27, VAR_7);
  }
  if (!VAR_28) {
   FUNC_10(&VAR_18->lun_lock);
   FUNC_7(VAR_23->kern_data_ptr, VAR_9);
   FUNC_6(VAR_23);
   FUNC_1((union ctl_io *)VAR_23);
   return (VAR_6);
  }
  VAR_18->pr_generation++;
  FUNC_10(&VAR_18->lun_lock);


  VAR_26.hdr.nexus = VAR_23->io_hdr.nexus;
  VAR_26.hdr.msg_type = VAR_3;
  VAR_26.pr.pr_info.action = VAR_5;
  VAR_26.pr.pr_info.residx = VAR_18->pr_res_idx;
  VAR_26.pr.pr_info.res_type = VAR_21;
  FUNC_8(VAR_26.pr.pr_info.sa_res_key,
         VAR_25->serv_act_res_key,
         sizeof(VAR_25->serv_act_res_key));
  FUNC_4(VAR_0, &VAR_26,
      sizeof(VAR_26.pr), VAR_10);
 } else {


  if (VAR_20 == FUNC_3(VAR_18, VAR_18->pr_res_idx)) {

   if ((VAR_24->scope_type & VAR_12) !=
        VAR_11) {
    FUNC_10(&VAR_18->lun_lock);
    FUNC_5( VAR_23,
                          1,
                        1,
                      2,
                          1,
                    4);
    FUNC_1((union ctl_io *)VAR_23);
    return (1);
   }

   if (VAR_21>8 || VAR_21==2 || VAR_21==4 || VAR_21==0) {
    FUNC_10(&VAR_18->lun_lock);
    FUNC_5( VAR_23,
                          1,
                        1,
                      2,
                          1,
                    0);
    FUNC_1((union ctl_io *)VAR_23);
    return (1);
   }
   for(VAR_27 = 0; VAR_27 < VAR_2; VAR_27++) {
    if (VAR_27 == VAR_22 || FUNC_3(VAR_18, VAR_27) == 0)
     continue;

    if (VAR_20 == FUNC_3(VAR_18, VAR_27)) {
     FUNC_0(VAR_18, VAR_27);
     VAR_18->pr_key_count--;
     FUNC_2(VAR_18, VAR_27, VAR_7);
    } else if (VAR_21 != VAR_18->pr_res_type &&
        (VAR_18->pr_res_type == VAR_16 ||
         VAR_18->pr_res_type == VAR_14)) {
     FUNC_2(VAR_18, VAR_27, VAR_8);
    }
   }
   VAR_18->pr_res_type = VAR_21;
   if (VAR_18->pr_res_type != VAR_15 &&
       VAR_18->pr_res_type != VAR_13)
    VAR_18->pr_res_idx = VAR_22;
   else
    VAR_18->pr_res_idx = VAR_4;
   VAR_18->pr_generation++;
   FUNC_10(&VAR_18->lun_lock);

   VAR_26.hdr.nexus = VAR_23->io_hdr.nexus;
   VAR_26.hdr.msg_type = VAR_3;
   VAR_26.pr.pr_info.action = VAR_5;
   VAR_26.pr.pr_info.residx = VAR_18->pr_res_idx;
   VAR_26.pr.pr_info.res_type = VAR_21;
   FUNC_8(VAR_26.pr.pr_info.sa_res_key,
          VAR_25->serv_act_res_key,
          sizeof(VAR_25->serv_act_res_key));
   FUNC_4(VAR_0, &VAR_26,
       sizeof(VAR_26.pr), VAR_10);
  } else {




   int VAR_29=0;

   for (VAR_27 = 0; VAR_27 < VAR_2; VAR_27++) {
    if (VAR_20 != FUNC_3(VAR_18, VAR_27))
     continue;

    VAR_29 = 1;
    FUNC_0(VAR_18, VAR_27);
    VAR_18->pr_key_count--;
    FUNC_2(VAR_18, VAR_27, VAR_7);
   }

   if (!VAR_29) {
    FUNC_10(&VAR_18->lun_lock);
    FUNC_7(VAR_23->kern_data_ptr, VAR_9);
    FUNC_6(VAR_23);
    FUNC_1((union ctl_io *)VAR_23);
           return (1);
   }
   VAR_18->pr_generation++;
   FUNC_10(&VAR_18->lun_lock);

   VAR_26.hdr.nexus = VAR_23->io_hdr.nexus;
   VAR_26.hdr.msg_type = VAR_3;
   VAR_26.pr.pr_info.action = VAR_5;
   VAR_26.pr.pr_info.residx = VAR_18->pr_res_idx;
   VAR_26.pr.pr_info.res_type = VAR_21;
   FUNC_8(VAR_26.pr.pr_info.sa_res_key,
          VAR_25->serv_act_res_key,
          sizeof(VAR_25->serv_act_res_key));
   FUNC_4(VAR_0, &VAR_26,
       sizeof(VAR_26.pr), VAR_10);
  }
 }
 return (0);
}
