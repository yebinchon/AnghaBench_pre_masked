
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ncr53c9x_tinfo {int dummy; } ;
struct ncr53c9x_softc {scalar_t__ sc_rev; int sc_selid; int sc_id; int sc_dleft; int sc_dp; struct ncr53c9x_ecb* sc_nexus; int sc_state; int sc_dev; struct ncr53c9x_tinfo* sc_tinfo; } ;
struct ncr53c9x_linfo {struct ncr53c9x_ecb** queued; struct ncr53c9x_ecb* untagged; scalar_t__ busy; } ;
struct ncr53c9x_ecb {int flags; int dleft; int daddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ncr53c9x_softc*,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ncr53c9x_linfo* FUNC_1 (struct ncr53c9x_tinfo*,int) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ncr53c9x_softc*,struct ncr53c9x_tinfo*) ;

__attribute__((used)) static int
FUNC_6(struct ncr53c9x_softc *VAR_9, int VAR_10, int VAR_11,
    int VAR_12)
{
 struct ncr53c9x_ecb *VAR_13 = ((void*)0);
 struct ncr53c9x_linfo *VAR_14;
 struct ncr53c9x_tinfo *VAR_15;
 uint8_t VAR_16, VAR_17, VAR_18;

 FUNC_0(VAR_9, VAR_2);

 if (VAR_9->sc_rev == VAR_6)
  VAR_18 = VAR_9->sc_selid;
 else {






  VAR_17 = VAR_9->sc_selid & ~(1 << VAR_9->sc_id);
  if (VAR_17 & (VAR_17 - 1)) {
   FUNC_2(VAR_9->sc_dev, "reselect with invalid "
       "selid %02x; sending DEVICE RESET\n", VAR_17);
   goto reset;
  }

  VAR_18 = FUNC_3(VAR_17) - 1;
 }
 VAR_16 = VAR_10 & 0x07;







 VAR_15 = &VAR_9->sc_tinfo[VAR_18];
 VAR_14 = FUNC_1(VAR_15, VAR_16);







 if (VAR_14 != ((void*)0)) {
  if (VAR_14->untagged != ((void*)0) && VAR_14->busy)
   VAR_13 = VAR_14->untagged;
  else if (VAR_11 != VAR_3) {

   VAR_9->sc_state = VAR_5;
   return (0);
  } else if (VAR_11)
   VAR_13 = VAR_14->queued[VAR_12];
 }
 if (VAR_13 == ((void*)0)) {
  FUNC_2(VAR_9->sc_dev, "reselect from target %d lun %d "
      "tag %x:%x with no nexus; sending ABORT\n",
      VAR_18, VAR_16, VAR_11, VAR_12);
  goto abort;
 }


 VAR_9->sc_state = VAR_4;
 VAR_9->sc_nexus = VAR_13;
 FUNC_5(VAR_9, VAR_15);

 if (VAR_13->flags & VAR_1)
  FUNC_4(VAR_8);
 else if (VAR_13->flags & VAR_0)
  FUNC_4(VAR_7);


 VAR_9->sc_dp = VAR_13->daddr;
 VAR_9->sc_dleft = VAR_13->dleft;

 return (0);

reset:
 FUNC_4(VAR_8);
 return (1);

abort:
 FUNC_4(VAR_7);
 return (1);
}
