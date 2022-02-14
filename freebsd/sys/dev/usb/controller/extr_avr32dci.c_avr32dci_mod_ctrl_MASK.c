
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct avr32dci_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct avr32dci_softc*,int ) ;
 int FUNC_1 (struct avr32dci_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct avr32dci_softc *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0);
 VAR_4 |= VAR_2;
 VAR_4 &= ~VAR_3;
 FUNC_1(VAR_1, VAR_0, VAR_4);
}
