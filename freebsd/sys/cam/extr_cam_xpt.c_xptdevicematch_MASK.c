
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ u_int ;
struct scsi_vpd_device_id {scalar_t__ desc_list; } ;
struct TYPE_9__ {int id_len; int id; } ;
struct TYPE_10__ {TYPE_4__ devid_pat; int inq_pat; } ;
struct device_match_pattern {int flags; scalar_t__ path_id; scalar_t__ target_id; scalar_t__ target_lun; TYPE_5__ data; } ;
struct TYPE_6__ {struct device_match_pattern device_pattern; } ;
struct dev_match_pattern {scalar_t__ type; TYPE_1__ pattern; } ;
struct cam_ed {scalar_t__ lun_id; scalar_t__ device_id_len; scalar_t__ device_id; int inq_data; TYPE_3__* target; } ;
typedef int dev_match_ret ;
typedef int caddr_t ;
struct TYPE_8__ {scalar_t__ target_id; TYPE_2__* bus; } ;
struct TYPE_7__ {scalar_t__ path_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int * FUNC_0 (int ,int ,int,int,int ) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ,int ) ;
 int VAR_16 ;

__attribute__((used)) static dev_match_ret
FUNC_2(struct dev_match_pattern *VAR_17, u_int VAR_18,
        struct cam_ed *VAR_19)
{
 dev_match_ret VAR_20;
 u_int VAR_21;

 VAR_20 = VAR_13;




 if (VAR_19 == ((void*)0))
  return(VAR_12);





 if ((VAR_17 == ((void*)0)) || (VAR_18 == 0))
  return(VAR_11 | VAR_10);

 for (VAR_21 = 0; VAR_21 < VAR_18; VAR_21++) {
  struct device_match_pattern *VAR_22;
  struct scsi_vpd_device_id *VAR_23;





  if (VAR_17[VAR_21].type != VAR_1) {
   if ((VAR_17[VAR_21].type == VAR_7)
    && ((VAR_20 & VAR_9) == VAR_13))
    VAR_20 |= VAR_11;
   continue;
  }

  VAR_22 = &VAR_17[VAR_21].pattern.device_pattern;


  if ((VAR_22->flags & (VAR_3|VAR_2))
   == (VAR_3|VAR_2))
   return(VAR_12);





  if (VAR_22->flags == VAR_0)
   goto copy_dev_node;




  if (VAR_22->flags == VAR_5)
   continue;

  if (((VAR_22->flags & VAR_6) != 0)
   && (VAR_22->path_id != VAR_19->target->bus->path_id))
   continue;

  if (((VAR_22->flags & VAR_8) != 0)
   && (VAR_22->target_id != VAR_19->target->target_id))
   continue;

  if (((VAR_22->flags & VAR_4) != 0)
   && (VAR_22->target_lun != VAR_19->lun_id))
   continue;

  if (((VAR_22->flags & VAR_3) != 0)
   && (FUNC_0((caddr_t)&VAR_19->inq_data,
        (caddr_t)&VAR_22->data.inq_pat,
        1, sizeof(VAR_22->data.inq_pat),
        VAR_16) == ((void*)0)))
   continue;

  VAR_23 = (struct scsi_vpd_device_id *)VAR_19->device_id;
  if (((VAR_22->flags & VAR_2) != 0)
   && (VAR_19->device_id_len < VAR_15
    || FUNC_1((uint8_t *)VAR_23->desc_list,
          VAR_19->device_id_len
        - VAR_15,
          VAR_22->data.devid_pat.id,
          VAR_22->data.devid_pat.id_len) != 0))
   continue;

copy_dev_node:





  VAR_20 |= VAR_10;
  if ((VAR_20 & VAR_9) == VAR_11)
   return(VAR_20);
 }







 if ((VAR_20 & VAR_9) == VAR_13)
  VAR_20 |= VAR_14;

 return(VAR_20);
}
