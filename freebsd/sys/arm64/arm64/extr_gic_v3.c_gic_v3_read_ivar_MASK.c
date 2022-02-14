
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pcpu; } ;
struct gic_v3_softc {uintptr_t gic_nirqs; uintptr_t gic_nchildren; uintptr_t gic_bus; int gic_pidr2; TYPE_1__ gic_redists; } ;
typedef int device_t ;


 int VAR_0 ;
 uintptr_t FUNC_0 (int ) ;
 uintptr_t VAR_1 ;
 uintptr_t VAR_2 ;


 uintptr_t VAR_3 ;
 uintptr_t VAR_4 ;


 int FUNC_1 (int,char*) ;
 uintptr_t VAR_5 ;
 size_t FUNC_2 (int ) ;
 int VAR_6 ;
 struct gic_v3_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_7, device_t VAR_8, int VAR_9, uintptr_t *VAR_10)
{
 struct gic_v3_softc *VAR_11;

 VAR_11 = FUNC_3(VAR_7);

 switch (VAR_9) {
 case 131:
  *VAR_10 = (VAR_5 - VAR_11->gic_nirqs) / VAR_11->gic_nchildren;
  return (0);
 case 130:
  *VAR_10 = (uintptr_t)VAR_11->gic_redists.pcpu[FUNC_2(VAR_6)];
  return (0);
 case 128:
  FUNC_1(
      FUNC_0(VAR_11->gic_pidr2) == VAR_1 ||
      FUNC_0(VAR_11->gic_pidr2) == VAR_2,
      ("gic_v3_read_ivar: Invalid GIC architecture: %d (%.08X)",
       FUNC_0(VAR_11->gic_pidr2), VAR_11->gic_pidr2));
  *VAR_10 = FUNC_0(VAR_11->gic_pidr2);
  return (0);
 case 129:
  FUNC_1(VAR_11->gic_bus != VAR_4,
      ("gic_v3_read_ivar: Unknown bus type"));
  FUNC_1(VAR_11->gic_bus <= VAR_3,
      ("gic_v3_read_ivar: Invalid bus type %u", VAR_11->gic_bus));
  *VAR_10 = VAR_11->gic_bus;
  return (0);
 }

 return (VAR_0);
}
