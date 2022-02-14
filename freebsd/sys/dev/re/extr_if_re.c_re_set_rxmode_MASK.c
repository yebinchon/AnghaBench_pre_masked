
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct rl_softc {int rl_flags; TYPE_1__* rl_hwrev; struct ifnet* rl_ifp; } ;
struct ifnet {int if_flags; } ;
struct TYPE_2__ {scalar_t__ rl_rev; } ;


 int FUNC_0 (struct rl_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct rl_softc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ifnet*,int ,int*) ;
 int VAR_16 ;

__attribute__((used)) static void
FUNC_4(struct rl_softc *VAR_17)
{
 struct ifnet *VAR_18;
 uint32_t VAR_19, VAR_20[2] = { 0, 0 };
 uint32_t VAR_21;

 FUNC_1(VAR_17);

 VAR_18 = VAR_17->rl_ifp;

 VAR_21 = VAR_9 | VAR_14 | VAR_13;
 if ((VAR_17->rl_flags & VAR_3) != 0)
  VAR_21 |= VAR_10;
 else if ((VAR_17->rl_flags & VAR_2) != 0)
  VAR_21 |= VAR_11;

 if (VAR_18->if_flags & (VAR_0 | VAR_1)) {
  if (VAR_18->if_flags & VAR_1)
   VAR_21 |= VAR_12;





  VAR_21 |= VAR_15;
  VAR_20[0] = VAR_20[1] = 0xffffffff;
  goto done;
 }

 FUNC_3(VAR_18, VAR_16, VAR_20);

 if (VAR_20[0] != 0 || VAR_20[1] != 0) {







  if ((VAR_17->rl_flags & VAR_4) != 0) {
   VAR_19 = FUNC_2(VAR_20[0]);
   VAR_20[0] = FUNC_2(VAR_20[1]);
   VAR_20[1] = VAR_19;
  }
  VAR_21 |= VAR_15;
 }

 if (VAR_17->rl_hwrev->rl_rev == VAR_5) {

  VAR_20[0] = 0xffffffff;
  VAR_20[1] = 0xffffffff;
 }

done:
 FUNC_0(VAR_17, VAR_6, VAR_20[0]);
 FUNC_0(VAR_17, VAR_7, VAR_20[1]);
 FUNC_0(VAR_17, VAR_8, VAR_21);
}
