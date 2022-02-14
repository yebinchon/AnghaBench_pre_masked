
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct periph_driver {int generation; int driver_name; } ;
struct dev_match_result {int dummy; } ;
struct TYPE_10__ {struct cam_periph* periph; struct periph_driver** pdrv; } ;
struct TYPE_18__ {int position_type; int * generations; TYPE_1__ cookie; } ;
struct ccb_dev_match {int match_buf_len; int num_matches; TYPE_8__* matches; void* status; TYPE_9__ pos; int num_patterns; int patterns; } ;
struct cam_periph {int periph_name; int unit_number; TYPE_5__* path; } ;
typedef int dev_match_ret ;
struct TYPE_15__ {int periph_name; int unit_number; int target_lun; int target_id; int path_id; } ;
struct TYPE_16__ {TYPE_6__ periph_result; } ;
struct TYPE_17__ {TYPE_7__ result; int type; } ;
struct TYPE_14__ {TYPE_4__* device; TYPE_3__* target; TYPE_2__* bus; } ;
struct TYPE_13__ {int lun_id; } ;
struct TYPE_12__ {int target_id; } ;
struct TYPE_11__ {int path_id; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_9__*,int) ;
 struct periph_driver** VAR_12 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,size_t) ;
 int FUNC_3 (int ,int ,struct cam_periph*) ;

__attribute__((used)) static int
FUNC_4(struct cam_periph *VAR_13, void *VAR_14)
{
 struct ccb_dev_match *VAR_15;
 dev_match_ret VAR_16;

 VAR_15 = (struct ccb_dev_match *)VAR_14;

 VAR_16 = FUNC_3(VAR_15->patterns, VAR_15->num_patterns, VAR_13);

 if ((VAR_16 & VAR_9) == VAR_11) {
  VAR_15->status = VAR_0;
  return(0);
 }




 if (VAR_16 & VAR_10) {
  int VAR_17, VAR_18;
  size_t VAR_19;

  VAR_17 = VAR_15->match_buf_len - (VAR_15->num_matches *
   sizeof(struct dev_match_result));






  if (VAR_17 < sizeof(struct dev_match_result)) {
   struct periph_driver **VAR_20;

   VAR_20 = ((void*)0);
   FUNC_0(&VAR_15->pos, sizeof(VAR_15->pos));
   VAR_15->pos.position_type =
    VAR_3 | VAR_2 |
    VAR_4;
   for (VAR_20 = VAR_12; *VAR_20 != ((void*)0); VAR_20++) {
    if (FUNC_1((*VAR_20)->driver_name,
        VAR_13->periph_name) == 0)
     break;
   }

   if (*VAR_20 == ((void*)0)) {
    VAR_15->status = VAR_0;
    return(0);
   }

   VAR_15->pos.cookie.pdrv = VAR_20;





   VAR_15->pos.cookie.periph = VAR_13;
   VAR_15->pos.generations[VAR_6] =
    (*VAR_20)->generation;
   VAR_15->status = VAR_1;
   return(0);
  }

  VAR_18 = VAR_15->num_matches;
  VAR_15->num_matches++;
  VAR_15->matches[VAR_18].type = VAR_8;
  VAR_15->matches[VAR_18].result.periph_result.path_id =
   VAR_13->path->bus->path_id;





  if (VAR_13->path->target)
   VAR_15->matches[VAR_18].result.periph_result.target_id =
    VAR_13->path->target->target_id;
  else
   VAR_15->matches[VAR_18].result.periph_result.target_id =
    VAR_7;

  if (VAR_13->path->device)
   VAR_15->matches[VAR_18].result.periph_result.target_lun =
    VAR_13->path->device->lun_id;
  else
   VAR_15->matches[VAR_18].result.periph_result.target_lun =
    VAR_5;

  VAR_15->matches[VAR_18].result.periph_result.unit_number =
   VAR_13->unit_number;
  VAR_19 = sizeof(VAR_15->matches[VAR_18].result.periph_result.periph_name);
  FUNC_2(VAR_15->matches[VAR_18].result.periph_result.periph_name,
   VAR_13->periph_name, VAR_19);
 }

 return(1);
}
