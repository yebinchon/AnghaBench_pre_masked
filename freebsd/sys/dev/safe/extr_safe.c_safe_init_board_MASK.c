
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_6__ {int dma_paddr; } ;
struct TYPE_5__ {int dma_paddr; } ;
struct TYPE_4__ {int dma_paddr; } ;
struct safe_softc {scalar_t__ sc_chiprev; TYPE_3__ sc_dpalloc; TYPE_2__ sc_spalloc; TYPE_1__ sc_ringalloc; int sc_dev; } ;
struct safe_ringentry {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct safe_softc*,int ) ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_5 (struct safe_softc*,int ,int) ;
 int FUNC_6 (int ,char*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct safe_softc *VAR_29)
{
 u_int32_t VAR_30, VAR_31;

 VAR_30 = FUNC_1(VAR_29, VAR_10);
 VAR_30 &=~ VAR_16;
 VAR_30 |= VAR_14
   | VAR_15
   | VAR_17
   | VAR_11
   | VAR_13
   | VAR_12
   ;
 FUNC_5(VAR_29, VAR_10, VAR_30);




 if (VAR_29->sc_chiprev == FUNC_2(1,0)) {







  FUNC_5(VAR_29, VAR_0, 256);
  FUNC_6(VAR_29->sc_dev,
   "Reduce max DMA size to %u words for rev %u.%u WAR\n",
   (FUNC_1(VAR_29, VAR_0)>>2) & 0xff,
   FUNC_3(VAR_29->sc_chiprev),
   FUNC_4(VAR_29->sc_chiprev));
 }


 FUNC_5(VAR_29, VAR_21, VAR_29->sc_ringalloc.dma_paddr);
 FUNC_5(VAR_29, VAR_22, VAR_29->sc_ringalloc.dma_paddr);



 FUNC_0((sizeof(struct safe_ringentry) % sizeof(u_int32_t)) == 0,
  ("PE ring entry not 32-bit aligned!"));
 VAR_31 = sizeof(struct safe_ringentry) / sizeof(u_int32_t);
 FUNC_5(VAR_29, VAR_23,
  (VAR_31 << VAR_24) | VAR_9);
 FUNC_5(VAR_29, VAR_25, 0);

 FUNC_5(VAR_29, VAR_18, VAR_29->sc_spalloc.dma_paddr);
 FUNC_5(VAR_29, VAR_26, VAR_29->sc_dpalloc.dma_paddr);
 FUNC_5(VAR_29, VAR_20,
  (VAR_27<<16) | VAR_28);





 FUNC_5(VAR_29, VAR_19, VAR_8);


 FUNC_5(VAR_29, VAR_10, VAR_30 | VAR_16);





 FUNC_5(VAR_29, VAR_2, VAR_3);
 FUNC_5(VAR_29, VAR_4, 1);
 FUNC_5(VAR_29, VAR_5, VAR_6 | VAR_7);
}
