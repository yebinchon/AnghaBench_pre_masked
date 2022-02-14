
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;
struct gicv3_its_softc {int sc_its_flags; TYPE_1__* sc_its_ptab; } ;
typedef int device_t ;
struct TYPE_2__ {size_t ptab_size; scalar_t__ ptab_vaddr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_1 (int) ;
 int VAR_4 ;
 size_t VAR_5 ;
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
 int FUNC_2 (int) ;


 int VAR_17 ;

 int VAR_18 ;

 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;



 scalar_t__ FUNC_4 (size_t,int ,int,int ,unsigned long,int,int ) ;
 int FUNC_5 (int ,char*,int,int,int) ;
 int FUNC_6 (struct gicv3_its_softc*,int ) ;
 int FUNC_7 (struct gicv3_its_softc*,int ,int) ;
 size_t FUNC_8 (size_t,int) ;
 size_t FUNC_9 (size_t,int) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_25, struct gicv3_its_softc *VAR_26)
{
 vm_offset_t VAR_27;
 vm_paddr_t VAR_28;
 uint64_t VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 size_t VAR_34, VAR_35, VAR_36, VAR_37, VAR_38;
 int VAR_39, VAR_40;
 int VAR_41;

 if ((VAR_26->sc_its_flags & VAR_21) != 0) {
  VAR_41 = 20;
  VAR_29 = 0;
 } else {
  VAR_41 = FUNC_3(FUNC_6(VAR_26, VAR_20));
  VAR_29 = VAR_3;
 }
 VAR_31 = VAR_13;
 VAR_40 = 128;

 for (VAR_39 = 0; VAR_39 < VAR_6; VAR_39++) {
  VAR_30 = FUNC_6(VAR_26, FUNC_0(VAR_39));

  VAR_33 = FUNC_2(VAR_30);

  VAR_34 = FUNC_1(VAR_30);

  switch(VAR_33) {
  case 134:
   VAR_36 = (1 << VAR_41);
   VAR_35 = VAR_34 * VAR_36;
   VAR_35 = FUNC_9(VAR_35, 128);
   break;
  case 131:
  case 132:
  case 133:
   VAR_35 = VAR_40;
   break;
  default:
   continue;
  }
  VAR_38 = FUNC_8(VAR_35, 130);


  VAR_27 = (vm_offset_t)FUNC_4(VAR_38 * 130,
      VAR_22, VAR_23 | VAR_24, 0, (1ul << 48) - 1,
      128, 0);

  VAR_26->sc_its_ptab[VAR_39].ptab_vaddr = VAR_27;
  VAR_26->sc_its_ptab[VAR_39].ptab_size = VAR_38 * 130;

  VAR_28 = FUNC_10(VAR_27);

  while (1) {
   VAR_37 = FUNC_8(VAR_35, VAR_40);


   VAR_30 &= ~(VAR_19 |
       VAR_1 | VAR_17 |
       VAR_4 | VAR_7 |
       VAR_14 | VAR_11 |
       VAR_16);

   VAR_30 |= VAR_19 |
       (VAR_29 << VAR_2) |
       (VAR_33 << VAR_18) |
       ((VAR_34 - 1) << VAR_5) |
       VAR_28 | (VAR_31 << VAR_15) |
       (VAR_37 - 1);

   switch (VAR_40) {
   case 130:
    VAR_30 |=
        VAR_9 << VAR_12;
    break;
   case 129:
    VAR_30 |=
        VAR_8 << VAR_12;
    break;
   case 128:
    VAR_30 |=
        VAR_10 << VAR_12;
    break;
   }

   FUNC_7(VAR_26, FUNC_0(VAR_39), VAR_30);


   VAR_32 = FUNC_6(VAR_26, FUNC_0(VAR_39));


   if ((VAR_32 & VAR_14) !=
       (VAR_30 & VAR_14)) {
    VAR_31 = (VAR_32 & VAR_14) >>
        VAR_15;
    continue;
   }

   if ((VAR_32 & VAR_11) !=
       (VAR_30 & VAR_11)) {
    switch (VAR_40) {
    case 129:
     VAR_40 = 130;
     continue;
    case 128:
     VAR_40 = 129;
     continue;
    }
   }

   if (VAR_32 != VAR_30) {
    FUNC_5(VAR_25, "GITS_BASER%d: "
        "unable to be updated: %lx != %lx\n",
        VAR_39, VAR_30, VAR_32);
    return (VAR_0);
   }


   break;
  }
 }

 return (0);
}
