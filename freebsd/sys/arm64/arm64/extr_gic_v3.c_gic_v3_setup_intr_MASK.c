
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct resource {int dummy; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {scalar_t__ isrc_handlers; int isrc_flags; int isrc_cpu; } ;
struct gic_v3_softc {int gic_mtx; } ;
struct gic_v3_irqsrc {int gi_irq; int gi_pol; int gi_trig; } ;
typedef enum intr_trigger { ____Placeholder_intr_trigger } intr_trigger ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;
typedef int device_t ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 struct gic_v3_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct intr_map_data*,int*,int*,int*) ;
 int FUNC_5 (struct gic_v3_softc*,int,scalar_t__) ;
 int FUNC_6 (struct gic_v3_softc*,int,scalar_t__,int) ;
 int FUNC_7 (struct gic_v3_softc*,int,scalar_t__) ;
 int FUNC_8 (struct gic_v3_softc*,int,scalar_t__,int) ;
 int FUNC_9 (int ,struct intr_irqsrc*) ;
 int FUNC_10 (struct gic_v3_softc*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_13, struct intr_irqsrc *VAR_14,
    struct resource *VAR_15, struct intr_map_data *VAR_16)
{
 struct gic_v3_softc *VAR_17 = FUNC_3(VAR_13);
 struct gic_v3_irqsrc *VAR_18 = (struct gic_v3_irqsrc *)VAR_14;
 enum intr_trigger VAR_19;
 enum intr_polarity VAR_20;
 uint32_t VAR_21;
 u_int VAR_22;
 int VAR_23;

 if (VAR_16 == ((void*)0))
  return (VAR_2);

 VAR_23 = FUNC_4(VAR_13, VAR_16, &VAR_22, &VAR_20, &VAR_19);
 if (VAR_23 != 0)
  return (VAR_23);

 if (VAR_18->gi_irq != VAR_22 || VAR_20 == VAR_8 ||
     VAR_19 == VAR_9)
  return (VAR_1);


 if (VAR_14->isrc_handlers != 0) {
  if (VAR_20 != VAR_18->gi_pol || VAR_19 != VAR_18->gi_trig)
   return (VAR_1);
  else
   return (0);
 }

 VAR_18->gi_pol = VAR_20;
 VAR_18->gi_trig = VAR_19;
 if (VAR_14->isrc_flags & VAR_7)
  FUNC_0(FUNC_2(VAR_12), &VAR_14->isrc_cpu);

 if (VAR_22 >= VAR_4 && VAR_22 <= VAR_6) {
  FUNC_11(&VAR_17->gic_mtx);


  if (VAR_22 <= VAR_5)
   VAR_21 = FUNC_7(VAR_17, 4,
       VAR_3 + FUNC_1(VAR_22));
  else
   VAR_21 = FUNC_5(VAR_17, 4, FUNC_1(VAR_22));
  if (VAR_19 == VAR_10)
   VAR_21 &= ~(2 << ((VAR_22 % 16) * 2));
  else
   VAR_21 |= 2 << ((VAR_22 % 16) * 2);

  if (VAR_22 <= VAR_5) {
   FUNC_8(VAR_17, 4,
       VAR_3 + FUNC_1(VAR_22), VAR_21);
   FUNC_10(VAR_17, VAR_11);
  } else {
   FUNC_6(VAR_17, 4, FUNC_1(VAR_22), VAR_21);
   FUNC_10(VAR_17, VAR_0);
  }

  FUNC_12(&VAR_17->gic_mtx);

  FUNC_9(VAR_13, VAR_14);
 }

 return (0);
}
