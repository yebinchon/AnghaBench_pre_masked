
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef size_t u_int ;
struct resource {int dummy; } ;
struct TYPE_4__ {size_t nregions; TYPE_1__** pcpu; struct resource** regions; } ;
struct gic_v3_softc {int dev; TYPE_2__ gic_redists; } ;
typedef int bus_space_handle_t ;
struct TYPE_3__ {int lpi_enabled; struct resource res; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;


 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (int ,char*) ;
 size_t FUNC_7 (size_t) ;
 scalar_t__ VAR_11 ;
 int FUNC_8 (struct resource*,int ) ;
 int FUNC_9 (struct resource*,int ) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (struct resource*) ;
 int FUNC_12 (struct resource*,int ) ;

__attribute__((used)) static int
FUNC_13(struct gic_v3_softc *VAR_12)
{
 struct resource VAR_13;
 bus_space_handle_t VAR_14;
 uint64_t VAR_15;
 uint64_t VAR_16;
 uint32_t VAR_17;
 u_int VAR_18;
 size_t VAR_19;

 VAR_18 = FUNC_7(VAR_18);

 VAR_15 = FUNC_4(VAR_18);

 VAR_15 = (FUNC_3(VAR_15) << 24) | (FUNC_2(VAR_15) << 16) |
     (FUNC_1(VAR_15) << 8) | FUNC_0(VAR_15);

 if (VAR_11) {
  FUNC_10(VAR_12->dev,
      "Start searching for Re-Distributor\n");
 }

 for (VAR_19 = 0; VAR_19 < VAR_12->gic_redists.nregions; VAR_19++) {

  VAR_13 = *VAR_12->gic_redists.regions[VAR_19];
  VAR_14 = FUNC_11(&VAR_13);

  VAR_17 = FUNC_8(&VAR_13, VAR_2);
  switch (FUNC_5(VAR_17)) {
  case 129:
  case 128:
   break;
  default:
   FUNC_10(VAR_12->dev,
       "No Re-Distributor found for CPU%u\n", VAR_18);
   return (VAR_0);
  }

  do {
   VAR_16 = FUNC_9(&VAR_13, VAR_6);
   if ((VAR_16 >> VAR_7) == VAR_15) {
    FUNC_6(VAR_12->gic_redists.pcpu[VAR_18] != ((void*)0),
        ("Invalid pointer to per-CPU redistributor"));

    VAR_12->gic_redists.pcpu[VAR_18]->res = VAR_13;
    VAR_12->gic_redists.pcpu[VAR_18]->lpi_enabled = 0;
    if (VAR_11) {
     FUNC_10(VAR_12->dev,
         "CPU%u Re-Distributor has been found\n",
         VAR_18);
    }
    return (0);
   }

   VAR_14 += (VAR_3 + VAR_5);
   if ((VAR_16 & VAR_9) != 0) {
    VAR_14 +=
        (VAR_10 + VAR_4);
   }

   FUNC_12(&VAR_13, VAR_14);
  } while ((VAR_16 & VAR_8) == 0);
 }

 FUNC_10(VAR_12->dev, "No Re-Distributor found for CPU%u\n", VAR_18);
 return (VAR_1);
}
