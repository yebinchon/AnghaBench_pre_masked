
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_gicv2m_softc {int sc_xref; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct arm_gicv2m_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct arm_gicv2m_softc *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 VAR_1->sc_xref = FUNC_0(FUNC_3(VAR_0));

 return (FUNC_1(VAR_0));
}
