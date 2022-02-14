
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef uintptr_t uint32_t ;
struct xhci_softc {scalar_t__ sc_ctx_is_64_byte; } ;


 int VAR_0 ;
 uintptr_t FUNC_0 (uintptr_t volatile) ;

__attribute__((used)) static uint32_t
FUNC_1(struct xhci_softc *VAR_1, volatile uint32_t *VAR_2)
{
 if (VAR_1->sc_ctx_is_64_byte) {
  uint32_t VAR_3;


  VAR_3 = ((uintptr_t)VAR_2) & ((VAR_0 - 1) & ~(31U));
  VAR_2 = (volatile uint32_t *)(((volatile uint8_t *)VAR_2) + VAR_3);
 }
 return (FUNC_0(*VAR_2));
}
