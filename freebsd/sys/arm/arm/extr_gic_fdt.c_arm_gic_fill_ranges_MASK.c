
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nranges; TYPE_1__* ranges; } ;
struct arm_gic_fdt_softc {int addr_cells; int size_cells; TYPE_2__ base; } ;
typedef int ssize_t ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int host_cells ;
typedef int cell_t ;
struct TYPE_3__ {int bus; int host; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int ) ;
 void* FUNC_4 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_5(phandle_t VAR_2, struct arm_gic_fdt_softc *VAR_3)
{
 pcell_t VAR_4;
 cell_t *VAR_5;
 ssize_t VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_4 = 1;
 FUNC_0(FUNC_2(VAR_2), "#address-cells", &VAR_4,
     sizeof(VAR_4));
 VAR_3->addr_cells = 2;
 FUNC_0(VAR_2, "#address-cells", &VAR_3->addr_cells,
     sizeof(VAR_3->addr_cells));
 VAR_3->size_cells = 2;
 FUNC_0(VAR_2, "#size-cells", &VAR_3->size_cells,
     sizeof(VAR_3->size_cells));

 VAR_6 = FUNC_1(VAR_2, "ranges");
 if (VAR_6 < 0)
  return (-1);
 VAR_3->base.nranges = VAR_6 / sizeof(cell_t) /
     (VAR_3->addr_cells + VAR_4 + VAR_3->size_cells);
 if (VAR_3->base.nranges == 0)
  return (0);

 VAR_3->base.ranges = FUNC_4(VAR_3->base.nranges * sizeof(VAR_3->base.ranges[0]),
     VAR_0, VAR_1);
 VAR_5 = FUNC_4(VAR_6, VAR_0, VAR_1);
 FUNC_0(VAR_2, "ranges", VAR_5, VAR_6);

 for (VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_3->base.nranges; VAR_7++) {
  VAR_3->base.ranges[VAR_7].bus = 0;
  for (VAR_9 = 0; VAR_9 < VAR_3->addr_cells; VAR_9++) {
   VAR_3->base.ranges[VAR_7].bus <<= 32;
   VAR_3->base.ranges[VAR_7].bus |= VAR_5[VAR_8++];
  }
  VAR_3->base.ranges[VAR_7].host = 0;
  for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
   VAR_3->base.ranges[VAR_7].host <<= 32;
   VAR_3->base.ranges[VAR_7].host |= VAR_5[VAR_8++];
  }
  VAR_3->base.ranges[VAR_7].size = 0;
  for (VAR_9 = 0; VAR_9 < VAR_3->size_cells; VAR_9++) {
   VAR_3->base.ranges[VAR_7].size <<= 32;
   VAR_3->base.ranges[VAR_7].size |= VAR_5[VAR_8++];
  }
 }

 FUNC_3(VAR_5, VAR_0);
 return (VAR_3->base.nranges);
}
