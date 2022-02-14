
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct scsi_inquiry_data {int dummy; } ;
struct dev_match_result {int dummy; } ;
struct TYPE_8__ {int * periph; struct cam_ed* device; TYPE_2__* target; struct cam_eb* bus; } ;
struct TYPE_14__ {int position_type; scalar_t__* generations; TYPE_1__ cookie; } ;
struct ccb_dev_match {int match_buf_len; int num_matches; TYPE_7__ pos; int status; TYPE_5__* matches; int num_patterns; int patterns; } ;
struct cam_periph {int refcount; } ;
struct cam_ed {int flags; scalar_t__ generation; TYPE_2__* target; int ident_data; int inq_data; int protocol; int lun_id; } ;
struct cam_eb {scalar_t__ generation; int eb_mtx; int path_id; } ;
struct ata_params {int dummy; } ;
typedef int dev_match_ret ;
struct TYPE_13__ {scalar_t__ bus_generation; } ;
struct TYPE_10__ {int flags; int ident_data; int inq_data; int protocol; int target_lun; int target_id; int path_id; } ;
struct TYPE_11__ {TYPE_3__ device_result; } ;
struct TYPE_12__ {TYPE_4__ result; int type; } ;
struct TYPE_9__ {scalar_t__ generation; int target_id; struct cam_eb* bus; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_7__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,struct cam_ed*) ;
 int VAR_21 ;
 int FUNC_7 (struct cam_ed*,struct cam_periph*,int ,void*) ;
 TYPE_6__ VAR_22 ;

__attribute__((used)) static int
FUNC_8(struct cam_ed *VAR_23, void *VAR_24)
{
 struct cam_eb *VAR_25;
 struct cam_periph *VAR_26;
 struct ccb_dev_match *VAR_27;
 dev_match_ret VAR_28;

 VAR_27 = (struct ccb_dev_match *)VAR_24;
 VAR_25 = VAR_23->target->bus;





 if ((VAR_27->pos.position_type & VAR_6)
  && (VAR_27->pos.cookie.device == VAR_23)
  && (VAR_27->pos.position_type & VAR_8)
  && (VAR_27->pos.cookie.periph != ((void*)0)))
  VAR_28 = VAR_18;
 else
  VAR_28 = FUNC_6(VAR_27->patterns, VAR_27->num_patterns,
     VAR_23);

 if ((VAR_28 & VAR_16) == VAR_19) {
  VAR_27->status = VAR_2;
  return(0);
 }




 if (VAR_28 & VAR_17) {
  int VAR_29, VAR_30;

  VAR_29 = VAR_27->match_buf_len - (VAR_27->num_matches *
   sizeof(struct dev_match_result));






  if (VAR_29 < sizeof(struct dev_match_result)) {
   FUNC_1(&VAR_27->pos, sizeof(VAR_27->pos));
   VAR_27->pos.position_type =
    VAR_7 | VAR_5 |
    VAR_9 | VAR_6;

   VAR_27->pos.cookie.bus = VAR_23->target->bus;
   VAR_27->pos.generations[VAR_0]=
    VAR_22.bus_generation;
   VAR_27->pos.cookie.target = VAR_23->target;
   VAR_27->pos.generations[VAR_12] =
    VAR_23->target->bus->generation;
   VAR_27->pos.cookie.device = VAR_23;
   VAR_27->pos.generations[VAR_1] =
    VAR_23->target->generation;
   VAR_27->status = VAR_4;
   return(0);
  }
  VAR_30 = VAR_27->num_matches;
  VAR_27->num_matches++;
  VAR_27->matches[VAR_30].type = VAR_13;
  VAR_27->matches[VAR_30].result.device_result.path_id =
   VAR_23->target->bus->path_id;
  VAR_27->matches[VAR_30].result.device_result.target_id =
   VAR_23->target->target_id;
  VAR_27->matches[VAR_30].result.device_result.target_lun =
   VAR_23->lun_id;
  VAR_27->matches[VAR_30].result.device_result.protocol =
   VAR_23->protocol;
  FUNC_0(&VAR_23->inq_data,
        &VAR_27->matches[VAR_30].result.device_result.inq_data,
        sizeof(struct scsi_inquiry_data));
  FUNC_0(&VAR_23->ident_data,
        &VAR_27->matches[VAR_30].result.device_result.ident_data,
        sizeof(struct ata_params));


  if (VAR_23->flags & VAR_10)
   VAR_27->matches[VAR_30].result.device_result.flags =
    VAR_15;
  else
   VAR_27->matches[VAR_30].result.device_result.flags =
    VAR_14;
 }





 if ((VAR_28 & VAR_16) == VAR_20)
  return(1);





 FUNC_4();
 FUNC_2(&VAR_25->eb_mtx);
 if ((VAR_27->pos.position_type & VAR_5)
  && (VAR_27->pos.cookie.bus == VAR_25)
  && (VAR_27->pos.position_type & VAR_9)
  && (VAR_27->pos.cookie.target == VAR_23->target)
  && (VAR_27->pos.position_type & VAR_6)
  && (VAR_27->pos.cookie.device == VAR_23)
  && (VAR_27->pos.position_type & VAR_8)
  && (VAR_27->pos.cookie.periph != ((void*)0))) {
  if (VAR_27->pos.generations[VAR_11] !=
      VAR_23->generation) {
   FUNC_3(&VAR_25->eb_mtx);
   FUNC_5();
   VAR_27->status = VAR_3;
   return(0);
  }
  VAR_26 = (struct cam_periph *)VAR_27->pos.cookie.periph;
  VAR_26->refcount++;
 } else
  VAR_26 = ((void*)0);
 FUNC_3(&VAR_25->eb_mtx);
 FUNC_5();

 return (FUNC_7(VAR_23, VAR_26, VAR_21, VAR_24));
}
