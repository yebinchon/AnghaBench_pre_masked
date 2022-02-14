
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_gicv2m_softc {int sc_xref; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct arm_gicv2m_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{
 struct arm_gicv2m_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 VAR_2->sc_xref = VAR_0;

 return (FUNC_0(VAR_1));
}
