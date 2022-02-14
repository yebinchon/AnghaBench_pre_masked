
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef uintptr_t uint32_t ;
struct xhci_softc {scalar_t__ sc_ctx_is_64_byte; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct xhci_softc *VAR_1, volatile uint64_t *VAR_2, uint64_t VAR_3)
{
 if (VAR_1->sc_ctx_is_64_byte) {
  uint32_t VAR_4;


  VAR_4 = ((uintptr_t)VAR_2) & ((VAR_0 - 1) & ~(31U));
  VAR_2 = (volatile uint64_t *)(((volatile uint8_t *)VAR_2) + VAR_4);
 }
 *VAR_2 = FUNC_0(VAR_3);
}
