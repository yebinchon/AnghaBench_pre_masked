
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


struct dev_match_result {int dummy; } ;
struct TYPE_12__ {int * target; struct cam_eb* bus; } ;
struct TYPE_14__ {int position_type; scalar_t__* generations; TYPE_5__ cookie; } ;
struct ccb_dev_match {int match_buf_len; int num_matches; TYPE_7__ pos; int status; TYPE_3__* matches; int num_patterns; int patterns; } ;
struct cam_et {int refcount; } ;
struct cam_eb {scalar_t__ generation; int eb_mtx; TYPE_4__* sim; int path_id; } ;
typedef int dev_match_ret ;
struct TYPE_13__ {scalar_t__ bus_generation; } ;
struct TYPE_11__ {int sim_name; int unit_number; int bus_id; } ;
struct TYPE_8__ {int dev_name; int unit_number; int bus_id; int path_id; } ;
struct TYPE_9__ {TYPE_1__ bus_result; } ;
struct TYPE_10__ {TYPE_2__ result; int type; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_7__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,struct cam_eb*) ;
 int VAR_14 ;
 int FUNC_5 (struct cam_eb*,struct cam_et*,int ,void*) ;
 TYPE_6__ VAR_15 ;

__attribute__((used)) static int
FUNC_6(struct cam_eb *VAR_16, void *VAR_17)
{
 struct ccb_dev_match *VAR_18;
 struct cam_et *VAR_19;
 dev_match_ret VAR_20;

 VAR_18 = (struct ccb_dev_match *)VAR_17;





 if ((VAR_18->pos.position_type & VAR_4)
  && (VAR_18->pos.cookie.bus == VAR_16)
  && (VAR_18->pos.position_type & VAR_6)
  && (VAR_18->pos.cookie.target != ((void*)0)))
  VAR_20 = VAR_11;
 else
  VAR_20 = FUNC_4(VAR_18->patterns, VAR_18->num_patterns, VAR_16);




 if ((VAR_20 & VAR_9) == VAR_12) {
  VAR_18->status = VAR_1;
  return(0);
 }




 if (VAR_20 & VAR_10) {
  int VAR_21, VAR_22;

  VAR_21 = VAR_18->match_buf_len - (VAR_18->num_matches *
   sizeof(struct dev_match_result));






  if (VAR_21 < sizeof(struct dev_match_result)) {
   FUNC_0(&VAR_18->pos, sizeof(VAR_18->pos));
   VAR_18->pos.position_type =
    VAR_5 | VAR_4;

   VAR_18->pos.cookie.bus = VAR_16;
   VAR_18->pos.generations[VAR_0]=
    VAR_15.bus_generation;
   VAR_18->status = VAR_3;
   return(0);
  }
  VAR_22 = VAR_18->num_matches;
  VAR_18->num_matches++;
  VAR_18->matches[VAR_22].type = VAR_8;
  VAR_18->matches[VAR_22].result.bus_result.path_id = VAR_16->path_id;
  VAR_18->matches[VAR_22].result.bus_result.bus_id = VAR_16->sim->bus_id;
  VAR_18->matches[VAR_22].result.bus_result.unit_number =
   VAR_16->sim->unit_number;
  FUNC_3(VAR_18->matches[VAR_22].result.bus_result.dev_name,
   VAR_16->sim->sim_name,
   sizeof(VAR_18->matches[VAR_22].result.bus_result.dev_name));
 }





 if ((VAR_20 & VAR_9) == VAR_13)
  return(1);





 FUNC_1(&VAR_16->eb_mtx);
 if ((VAR_18->pos.position_type & VAR_4)
  && (VAR_18->pos.cookie.bus == VAR_16)
  && (VAR_18->pos.position_type & VAR_6)
  && (VAR_18->pos.cookie.target != ((void*)0))) {
  if ((VAR_18->pos.generations[VAR_7] !=
      VAR_16->generation)) {
   FUNC_2(&VAR_16->eb_mtx);
   VAR_18->status = VAR_2;
   return (0);
  }
  VAR_19 = (struct cam_et *)VAR_18->pos.cookie.target;
  VAR_19->refcount++;
 } else
  VAR_19 = ((void*)0);
 FUNC_2(&VAR_16->eb_mtx);

 return (FUNC_5(VAR_16, VAR_19, VAR_14, VAR_17));
}
