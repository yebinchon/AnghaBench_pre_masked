
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ccb {int csio; } ;
typedef int u_int16_t ;
struct changer_exchange {size_t ce_srctype; size_t ce_fdsttype; size_t ce_sdsttype; int ce_srcunit; int ce_fdstunit; int ce_sdstunit; int ce_flags; } ;
struct ch_softc {int* sc_counts; int* sc_exchangemask; int* sc_firsts; int device_stats; int sc_picker; } ;
struct cam_periph {scalar_t__ softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 union ccb* FUNC_0 (struct cam_periph*,int ) ;
 int FUNC_1 (union ccb*,int ,int ,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int *,int,int ,int ,int ,int,int,int,int ,int ,int ,int ) ;
 int FUNC_3 (union ccb*) ;

__attribute__((used)) static int
FUNC_4(struct cam_periph *VAR_15, struct changer_exchange *VAR_16)
{
 struct ch_softc *VAR_17;
 u_int16_t VAR_18, VAR_19, VAR_20;
 union ccb *VAR_21;
 int VAR_22;

 VAR_22 = 0;
 VAR_17 = (struct ch_softc *)VAR_15->softc;



 if ((VAR_16->ce_srctype > VAR_4) || (VAR_16->ce_fdsttype > VAR_4) ||
     (VAR_16->ce_sdsttype > VAR_4))
  return (VAR_6);
 if ((VAR_16->ce_srcunit > (VAR_17->sc_counts[VAR_16->ce_srctype] - 1)) ||
     (VAR_16->ce_fdstunit > (VAR_17->sc_counts[VAR_16->ce_fdsttype] - 1)) ||
     (VAR_16->ce_sdstunit > (VAR_17->sc_counts[VAR_16->ce_sdsttype] - 1)))
  return (VAR_7);




 if (((VAR_17->sc_exchangemask[VAR_16->ce_srctype] &
      (1 << VAR_16->ce_fdsttype)) == 0) ||
     ((VAR_17->sc_exchangemask[VAR_16->ce_fdsttype] &
      (1 << VAR_16->ce_sdsttype)) == 0))
  return (VAR_7);




 VAR_18 = VAR_17->sc_firsts[VAR_16->ce_srctype] + VAR_16->ce_srcunit;
 VAR_19 = VAR_17->sc_firsts[VAR_16->ce_fdsttype] + VAR_16->ce_fdstunit;
 VAR_20 = VAR_17->sc_firsts[VAR_16->ce_sdsttype] + VAR_16->ce_sdstunit;

 VAR_21 = FUNC_0(VAR_15, VAR_0);

 FUNC_2(&VAR_21->csio,
                      1,
                     VAR_13,
                         VAR_9,
                  VAR_17->sc_picker,
                  VAR_18,
                   VAR_19,
                   VAR_20,
                      (VAR_16->ce_flags & VAR_2) ?
                      VAR_12 : VAR_8,
                      (VAR_16->ce_flags & VAR_3) ?
                      VAR_12 : VAR_8,
                        VAR_11,
                      VAR_5);

 VAR_22 = FUNC_1(VAR_21, VAR_14, VAR_1,
                      VAR_10,
      VAR_17->device_stats);

 FUNC_3(VAR_21);

 return(VAR_22);
}
