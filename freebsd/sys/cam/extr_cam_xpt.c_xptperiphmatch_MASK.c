
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct periph_match_pattern {int flags; scalar_t__ path_id; scalar_t__ target_id; scalar_t__ target_lun; scalar_t__ unit_number; int periph_name; } ;
struct TYPE_6__ {struct periph_match_pattern periph_pattern; } ;
struct dev_match_pattern {scalar_t__ type; TYPE_1__ pattern; } ;
struct cam_periph {scalar_t__ unit_number; int periph_name; TYPE_5__* path; } ;
typedef int dev_match_ret ;
struct TYPE_10__ {TYPE_4__* device; TYPE_3__* target; TYPE_2__* bus; } ;
struct TYPE_9__ {scalar_t__ lun_id; } ;
struct TYPE_8__ {scalar_t__ target_id; } ;
struct TYPE_7__ {scalar_t__ path_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static dev_match_ret
FUNC_1(struct dev_match_pattern *VAR_12, u_int VAR_13,
        struct cam_periph *VAR_14)
{
 dev_match_ret VAR_15;
 u_int VAR_16;




 if (VAR_14 == ((void*)0))
  return(VAR_3);





 if ((VAR_12 == ((void*)0)) || (VAR_13 == 0))
  return(VAR_4 | VAR_2);





 VAR_15 = VAR_4;

 for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) {
  struct periph_match_pattern *VAR_17;





  if (VAR_12[VAR_16].type != VAR_1)
   continue;

  VAR_17 = &VAR_12[VAR_16].pattern.periph_pattern;




  if (VAR_17->flags == VAR_5) {

   VAR_15 |= VAR_2;






   return(VAR_15);
  }




  if (VAR_17->flags == VAR_8)
   continue;

  if (((VAR_17->flags & VAR_9) != 0)
   && (VAR_17->path_id != VAR_14->path->bus->path_id))
   continue;






  if (((VAR_17->flags & VAR_10) != 0)
   && ((VAR_14->path->target == ((void*)0))
   ||(VAR_17->target_id != VAR_14->path->target->target_id)))
   continue;

  if (((VAR_17->flags & VAR_6) != 0)
   && ((VAR_14->path->device == ((void*)0))
   || (VAR_17->target_lun != VAR_14->path->device->lun_id)))
   continue;

  if (((VAR_17->flags & VAR_11) != 0)
   && (VAR_17->unit_number != VAR_14->unit_number))
   continue;

  if (((VAR_17->flags & VAR_7) != 0)
   && (FUNC_0(VAR_17->periph_name, VAR_14->periph_name,
        VAR_0) != 0))
   continue;






  VAR_15 |= VAR_2;





  return(VAR_15);
 }





 return(VAR_15);
}
