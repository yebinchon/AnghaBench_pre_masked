
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
typedef size_t u_int ;
struct intr_irqsrc {int dummy; } ;
struct TYPE_3__ {int nregions; int ** regions; } ;
struct gic_v3_softc {int gic_nirqs; int gic_idbits; void* gic_pidr2; TYPE_2__* gic_irqs; int dev; int ** gic_res; TYPE_1__ gic_redists; int * gic_dist; int gic_mtx; int gic_registered; } ;
typedef int (* gic_v3_initseq_t ) (struct gic_v3_softc*) ;
typedef int device_t ;
struct TYPE_4__ {size_t gi_irq; struct intr_irqsrc gi_isrc; int gi_trig; int gi_pol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
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
 scalar_t__ VAR_21 ;
 int * FUNC_2 (int ,int ,int*,int ) ;
 char* FUNC_3 (int ) ;
 struct gic_v3_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,size_t,int) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 void* FUNC_7 (struct gic_v3_softc*,int,int ) ;
 int FUNC_8 (struct gic_v3_softc*) ;
 int FUNC_9 (struct intr_irqsrc*,int ,int ,char*,char const*,size_t) ;
 void* FUNC_10 (int,int ,int) ;
 int FUNC_11 (int *,char*,int *,int ) ;
 int FUNC_12 (struct gic_v3_softc*) ;

int
FUNC_13(device_t VAR_22)
{
 struct gic_v3_softc *VAR_23;
 gic_v3_initseq_t *VAR_24;
 uint32_t VAR_25;
 int VAR_26;
 int VAR_27;
 size_t VAR_28;
 u_int VAR_29;
 const char *VAR_30;

 VAR_23 = FUNC_4(VAR_22);
 VAR_23->gic_registered = VAR_1;
 VAR_23->dev = VAR_22;
 VAR_27 = 0;


 FUNC_11(&VAR_23->gic_mtx, "GICv3 lock", ((void*)0), VAR_14);





 VAR_23->gic_res = FUNC_10(
     sizeof(*VAR_23->gic_res) * (VAR_23->gic_redists.nregions + 1),
     VAR_16, VAR_17);


 for (VAR_28 = 0, VAR_26 = 0; VAR_28 < (VAR_23->gic_redists.nregions + 1); VAR_28++, VAR_26++) {
  VAR_23->gic_res[VAR_26] = FUNC_2(VAR_22, VAR_20,
      &VAR_26, VAR_19);
  if (VAR_23->gic_res[VAR_26] == ((void*)0))
   return (VAR_0);
 }




 VAR_23->gic_dist = VAR_23->gic_res[0];





 VAR_23->gic_redists.regions = FUNC_10(
     sizeof(*VAR_23->gic_redists.regions) * VAR_23->gic_redists.nregions,
     VAR_16, VAR_17);


 for (VAR_28 = 0, VAR_26 = 1; VAR_28 < VAR_23->gic_redists.nregions; VAR_28++, VAR_26++)
  VAR_23->gic_redists.regions[VAR_28] = VAR_23->gic_res[VAR_26];


 VAR_25 = FUNC_7(VAR_23, 4, VAR_3);
 VAR_23->gic_nirqs = FUNC_1(VAR_25);
 if (VAR_23->gic_nirqs > VAR_7)
  VAR_23->gic_nirqs = VAR_7;

 VAR_23->gic_irqs = FUNC_10(sizeof(*VAR_23->gic_irqs) * VAR_23->gic_nirqs,
     VAR_16, VAR_17 | VAR_18);
 VAR_30 = FUNC_3(VAR_22);
 for (VAR_29 = 0; VAR_29 < VAR_23->gic_nirqs; VAR_29++) {
  struct intr_irqsrc *VAR_31;

  VAR_23->gic_irqs[VAR_29].gi_irq = VAR_29;
  VAR_23->gic_irqs[VAR_29].gi_pol = VAR_12;
  VAR_23->gic_irqs[VAR_29].gi_trig = VAR_13;

  VAR_31 = &VAR_23->gic_irqs[VAR_29].gi_isrc;
  if (VAR_29 <= VAR_9) {
   VAR_27 = FUNC_9(VAR_31, VAR_23->dev,
       VAR_10, "%s,i%u", VAR_30, VAR_29 - VAR_5);
  } else if (VAR_29 <= VAR_8) {
   VAR_27 = FUNC_9(VAR_31, VAR_23->dev,
       VAR_11, "%s,p%u", VAR_30, VAR_29 - VAR_4);
  } else {
   VAR_27 = FUNC_9(VAR_31, VAR_23->dev, 0,
       "%s,s%u", VAR_30, VAR_29 - VAR_6);
  }
  if (VAR_27 != 0) {

   FUNC_6(VAR_23->gic_irqs, VAR_15);
   return (VAR_27);
  }
 }






 VAR_23->gic_pidr2 = FUNC_7(VAR_23, 4, VAR_2);


 VAR_23->gic_idbits = FUNC_0(VAR_25);

 if (VAR_21) {
  FUNC_5(VAR_22, "SPIs: %u, IDs: %u\n",
      VAR_23->gic_nirqs, (1 << VAR_23->gic_idbits) - 1);
 }


 for (VAR_24 = FUNC_8; *VAR_24 != ((void*)0); VAR_24++) {
  VAR_27 = (*VAR_24)(VAR_23);
  if (VAR_27 != 0)
   return (VAR_27);
 }

 return (0);
}
