
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int uint64_t ;
struct gicv3_its_softc {int sc_its_flags; int sc_its_cmd_base; scalar_t__ sc_its_cmd_next_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int,int ,int,int ,unsigned long,int ,int ) ;
 int FUNC_1 (struct gicv3_its_softc*,int ) ;
 int FUNC_2 (struct gicv3_its_softc*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct gicv3_its_softc *VAR_17)
{
 vm_paddr_t VAR_18;
 uint64_t VAR_19, VAR_20;


 VAR_17->sc_its_cmd_base = FUNC_0(VAR_12, VAR_14,
     VAR_15 | VAR_16, 0, (1ul << 48) - 1, VAR_11, 0);
 VAR_17->sc_its_cmd_next_idx = 0;

 VAR_18 = FUNC_3(VAR_17->sc_its_cmd_base);


 VAR_19 = VAR_9 |
     (VAR_3 << VAR_4) |
     VAR_18 | (VAR_5 << VAR_8) |
     (VAR_12 / 4096 - 1);
 FUNC_2(VAR_17, VAR_0, VAR_19);


 VAR_20 = FUNC_1(VAR_17, VAR_0);

 if ((VAR_20 & VAR_6) !=
     (VAR_5 << VAR_8)) {

  if ((VAR_20 & VAR_6) ==
      (VAR_7 << VAR_8)) {

   VAR_19 &= ~VAR_1;
   VAR_19 &= ~VAR_6;

   VAR_19 |= VAR_2 << VAR_4;
   VAR_19 |= VAR_7 << VAR_8;

   FUNC_2(VAR_17, VAR_0, VAR_19);
  }


  VAR_17->sc_its_flags |= VAR_13;
 }


 FUNC_2(VAR_17, VAR_10, 0x0);
}
