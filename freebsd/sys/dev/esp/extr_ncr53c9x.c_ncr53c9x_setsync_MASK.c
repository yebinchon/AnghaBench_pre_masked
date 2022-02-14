
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ offset; int period; scalar_t__ width; } ;
struct ncr53c9x_tinfo {TYPE_1__ curr; } ;
struct ncr53c9x_softc {int sc_cfg3; int sc_features; int sc_cfg3_fscsi; scalar_t__ sc_rev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ncr53c9x_softc*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct ncr53c9x_softc*,int ,int) ;
 int FUNC_2 (struct ncr53c9x_softc*,int) ;

__attribute__((used)) static inline void
FUNC_3(struct ncr53c9x_softc *VAR_11, struct ncr53c9x_tinfo *VAR_12)
{
 uint8_t VAR_13, VAR_14, VAR_15;

 FUNC_0(VAR_11, VAR_0);

 VAR_13 = VAR_11->sc_cfg3;
 if (VAR_12->curr.offset != 0) {
  VAR_14 = VAR_12->curr.offset;
  VAR_15 = FUNC_2(VAR_11, VAR_12->curr.period);
  if (VAR_11->sc_features & VAR_5) {




   if (VAR_12->curr.period <= 50)







    VAR_13 |= VAR_11->sc_cfg3_fscsi;
  }





  if (VAR_11->sc_rev == VAR_9 &&
      (VAR_13 & VAR_2) == 0)
   VAR_15--;
 } else {
  VAR_14 = 0;
  VAR_15 = 0;
 }

 if (VAR_12->curr.width != VAR_1) {
  if (VAR_11->sc_rev == VAR_10)
   VAR_13 |= VAR_3;
 }

 if (VAR_11->sc_features & VAR_6)
  FUNC_1(VAR_11, VAR_4, VAR_13);

 FUNC_1(VAR_11, VAR_7, VAR_14);
 FUNC_1(VAR_11, VAR_8, VAR_15);
}
