
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ccb {int csio; } ;
typedef int u_int16_t ;
struct changer_move {size_t cm_fromtype; size_t cm_totype; int cm_fromunit; int cm_tounit; int cm_flags; } ;
struct ch_softc {int* sc_counts; int* sc_movemask; int* sc_firsts; int device_stats; int sc_picker; } ;
struct cam_periph {scalar_t__ softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 union ccb* FUNC_0 (struct cam_periph*,int ) ;
 int FUNC_1 (union ccb*,int ,int ,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *,int,int ,int ,int ,int,int,int ,int ,int ) ;
 int FUNC_3 (union ccb*) ;

__attribute__((used)) static int
FUNC_4(struct cam_periph *VAR_14, struct changer_move *VAR_15)
{
 struct ch_softc *VAR_16;
 u_int16_t VAR_17, VAR_18;
 union ccb *VAR_19;
 int VAR_20;

 VAR_20 = 0;
 VAR_16 = (struct ch_softc *)VAR_14->softc;




 if ((VAR_15->cm_fromtype > VAR_2) || (VAR_15->cm_totype > VAR_2))
  return (VAR_5);
 if ((VAR_15->cm_fromunit > (VAR_16->sc_counts[VAR_15->cm_fromtype] - 1)) ||
     (VAR_15->cm_tounit > (VAR_16->sc_counts[VAR_15->cm_totype] - 1)))
  return (VAR_6);




 if ((VAR_16->sc_movemask[VAR_15->cm_fromtype] & (1 << VAR_15->cm_totype)) == 0)
  return (VAR_6);




 VAR_17 = VAR_16->sc_firsts[VAR_15->cm_fromtype] + VAR_15->cm_fromunit;
 VAR_18 = VAR_16->sc_firsts[VAR_15->cm_totype] + VAR_15->cm_tounit;

 VAR_19 = FUNC_0(VAR_14, VAR_0);

 FUNC_2(&VAR_19->csio,
                  1,
                 VAR_12,
                     VAR_8,
              VAR_16->sc_picker,
              VAR_17,
              VAR_18,
                 (VAR_15->cm_flags & VAR_4) ? VAR_11 : VAR_7,
                    VAR_10,
                  VAR_3);

 VAR_20 = FUNC_1(VAR_19, VAR_13, VAR_1,
                      VAR_9,
      VAR_16->device_stats);

 FUNC_3(VAR_19);

 return(VAR_20);
}
