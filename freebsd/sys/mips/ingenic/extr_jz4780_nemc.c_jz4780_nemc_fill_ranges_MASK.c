
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct simplebus_softc {int nranges; int acells; int scells; TYPE_1__* ranges; } ;
typedef int ssize_t ;
typedef int phandle_t ;
typedef int host_address_cells ;
typedef int cell_t ;
struct TYPE_2__ {int bus; int host; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int*,int) ;
 int FUNC_4 (int*,int ) ;
 void* FUNC_5 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_6(phandle_t VAR_2, struct simplebus_softc *VAR_3)
{
 int VAR_4;
 cell_t *VAR_5;
 ssize_t VAR_6;
 int VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_7 = FUNC_3(FUNC_2(VAR_2), "#address-cells",
     &VAR_4, sizeof(VAR_4));
 if (VAR_7 <= 0)
  return (-1);

 VAR_6 = FUNC_1(VAR_2, "ranges");
 if (VAR_6 < 0)
  return (-1);
 VAR_3->nranges = VAR_6 / sizeof(cell_t) /
     (VAR_3->acells + VAR_4 + VAR_3->scells);
 if (VAR_3->nranges == 0)
  return (0);

 VAR_3->ranges = FUNC_5(VAR_3->nranges * sizeof(VAR_3->ranges[0]),
     VAR_0, VAR_1);
 VAR_5 = FUNC_5(VAR_6, VAR_0, VAR_1);
 FUNC_0(VAR_2, "ranges", VAR_5, VAR_6);

 for (VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_3->nranges; VAR_8++) {
  VAR_3->ranges[VAR_8].bus = 0;
  for (VAR_10 = 0; VAR_10 < VAR_3->acells; VAR_10++) {
   VAR_3->ranges[VAR_8].bus <<= 32;
   VAR_3->ranges[VAR_8].bus |= VAR_5[VAR_9++];
  }
  VAR_3->ranges[VAR_8].host = 0;
  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   VAR_3->ranges[VAR_8].host <<= 32;
   VAR_3->ranges[VAR_8].host |= VAR_5[VAR_9++];
  }
  VAR_3->ranges[VAR_8].size = 0;
  for (VAR_10 = 0; VAR_10 < VAR_3->scells; VAR_10++) {
   VAR_3->ranges[VAR_8].size <<= 32;
   VAR_3->ranges[VAR_8].size |= VAR_5[VAR_9++];
  }
 }

 FUNC_4(VAR_5, VAR_0);
 return (VAR_3->nranges);
}
