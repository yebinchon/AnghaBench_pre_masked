
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct bus_match_pattern {int flags; scalar_t__ path_id; scalar_t__ bus_id; scalar_t__ unit_number; int dev_name; } ;
struct TYPE_3__ {struct bus_match_pattern bus_pattern; } ;
struct dev_match_pattern {scalar_t__ type; TYPE_1__ pattern; } ;
struct cam_eb {scalar_t__ path_id; TYPE_2__* sim; } ;
typedef int dev_match_ret ;
struct TYPE_4__ {scalar_t__ bus_id; scalar_t__ unit_number; int sim_name; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static dev_match_ret
FUNC_1(struct dev_match_pattern *VAR_14, u_int VAR_15,
     struct cam_eb *VAR_16)
{
 dev_match_ret VAR_17;
 u_int VAR_18;

 VAR_17 = VAR_12;




 if (VAR_16 == ((void*)0))
  return(VAR_11);





 if ((VAR_14 == ((void*)0)) || (VAR_15 == 0))
  return(VAR_10 | VAR_9);

 for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++) {
  struct bus_match_pattern *VAR_19;
  if (VAR_14[VAR_18].type != VAR_7) {
   if ((VAR_17 & VAR_8) == VAR_12)
    VAR_17 |= VAR_10;
   continue;
  }

  VAR_19 = &VAR_14[VAR_18].pattern.bus_pattern;





  if (VAR_19->flags == VAR_0) {

   VAR_17 |= VAR_9;





   if ((VAR_17 & VAR_8) != VAR_12)
    return(VAR_17);
  }




  if (VAR_19->flags == VAR_3)
   continue;

  if (((VAR_19->flags & VAR_4) != 0)
   && (VAR_19->path_id != VAR_16->path_id))
   continue;

  if (((VAR_19->flags & VAR_1) != 0)
   && (VAR_19->bus_id != VAR_16->sim->bus_id))
   continue;

  if (((VAR_19->flags & VAR_5) != 0)
   && (VAR_19->unit_number != VAR_16->sim->unit_number))
   continue;

  if (((VAR_19->flags & VAR_2) != 0)
   && (FUNC_0(VAR_19->dev_name, VAR_16->sim->sim_name,
        VAR_6) != 0))
   continue;






  VAR_17 |= VAR_9;
  if ((VAR_17 & VAR_8) == VAR_10)
   return(VAR_17);
 }







 if ((VAR_17 & VAR_8) == VAR_12)
  VAR_17 |= VAR_13;

 return(VAR_17);
}
