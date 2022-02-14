
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct dev_match_result {int dummy; } ;
struct TYPE_12__ {struct cam_periph* periph; TYPE_4__* device; TYPE_3__* target; TYPE_2__* bus; } ;
struct TYPE_11__ {int position_type; int * generations; TYPE_1__ cookie; } ;
struct ccb_dev_match {int match_buf_len; int num_matches; TYPE_8__* matches; int status; TYPE_10__ pos; int num_patterns; int patterns; } ;
struct cam_periph {int periph_name; int unit_number; TYPE_5__* path; } ;
typedef int dev_match_ret ;
struct TYPE_20__ {int bus_generation; } ;
struct TYPE_17__ {int periph_name; int unit_number; int target_lun; int target_id; int path_id; } ;
struct TYPE_18__ {TYPE_6__ periph_result; } ;
struct TYPE_19__ {TYPE_7__ result; int type; } ;
struct TYPE_16__ {TYPE_4__* device; TYPE_3__* target; TYPE_2__* bus; } ;
struct TYPE_15__ {int lun_id; int generation; } ;
struct TYPE_14__ {int target_id; int generation; } ;
struct TYPE_13__ {int path_id; int generation; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (TYPE_10__*,int) ;
 int FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (int ,int ,struct cam_periph*) ;
 TYPE_9__ VAR_15 ;

__attribute__((used)) static int
FUNC_3(struct cam_periph *VAR_16, void *VAR_17)
{
 struct ccb_dev_match *VAR_18;
 dev_match_ret VAR_19;

 VAR_18 = (struct ccb_dev_match *)VAR_17;

 VAR_19 = FUNC_2(VAR_18->patterns, VAR_18->num_patterns, VAR_16);

 if ((VAR_19 & VAR_12) == VAR_14) {
  VAR_18->status = VAR_2;
  return(0);
 }




 if (VAR_19 & VAR_13) {
  int VAR_20, VAR_21;
  size_t VAR_22;

  VAR_20 = VAR_18->match_buf_len - (VAR_18->num_matches *
   sizeof(struct dev_match_result));






  if (VAR_20 < sizeof(struct dev_match_result)) {
   FUNC_0(&VAR_18->pos, sizeof(VAR_18->pos));
   VAR_18->pos.position_type =
    VAR_6 | VAR_4 |
    VAR_8 | VAR_5 |
    VAR_7;

   VAR_18->pos.cookie.bus = VAR_16->path->bus;
   VAR_18->pos.generations[VAR_0]=
    VAR_15.bus_generation;
   VAR_18->pos.cookie.target = VAR_16->path->target;
   VAR_18->pos.generations[VAR_10] =
    VAR_16->path->bus->generation;
   VAR_18->pos.cookie.device = VAR_16->path->device;
   VAR_18->pos.generations[VAR_1] =
    VAR_16->path->target->generation;
   VAR_18->pos.cookie.periph = VAR_16;
   VAR_18->pos.generations[VAR_9] =
    VAR_16->path->device->generation;
   VAR_18->status = VAR_3;
   return(0);
  }

  VAR_21 = VAR_18->num_matches;
  VAR_18->num_matches++;
  VAR_18->matches[VAR_21].type = VAR_11;
  VAR_18->matches[VAR_21].result.periph_result.path_id =
   VAR_16->path->bus->path_id;
  VAR_18->matches[VAR_21].result.periph_result.target_id =
   VAR_16->path->target->target_id;
  VAR_18->matches[VAR_21].result.periph_result.target_lun =
   VAR_16->path->device->lun_id;
  VAR_18->matches[VAR_21].result.periph_result.unit_number =
   VAR_16->unit_number;
  VAR_22 = sizeof(VAR_18->matches[VAR_21].result.periph_result.periph_name);
  FUNC_1(VAR_18->matches[VAR_21].result.periph_result.periph_name,
   VAR_16->periph_name, VAR_22);
 }

 return(1);
}
