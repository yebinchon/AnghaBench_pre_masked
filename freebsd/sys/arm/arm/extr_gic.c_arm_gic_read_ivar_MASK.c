
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_gic_softc {uintptr_t gic_bus; int gic_iidr; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 uintptr_t VAR_1 ;
 uintptr_t VAR_2 ;


 int FUNC_1 (int,char*) ;
 struct arm_gic_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, device_t VAR_4, int VAR_5, uintptr_t *VAR_6)
{
 struct arm_gic_softc *VAR_7;

 VAR_7 = FUNC_2(VAR_3);

 switch(VAR_5) {
 case 128:
  FUNC_1(FUNC_0(VAR_7->gic_iidr) < 3,
      ("arm_gic_read_ivar: Unknown IIDR revision %u (%.08x)",
       FUNC_0(VAR_7->gic_iidr), VAR_7->gic_iidr));
  *VAR_6 = FUNC_0(VAR_7->gic_iidr);
  return (0);
 case 129:
  FUNC_1(VAR_7->gic_bus != VAR_2,
      ("arm_gic_read_ivar: Unknown bus type"));
  FUNC_1(VAR_7->gic_bus <= VAR_1,
      ("arm_gic_read_ivar: Invalid bus type %u", VAR_7->gic_bus));
  *VAR_6 = VAR_7->gic_bus;
  return (0);
 }

 return (VAR_0);
}
