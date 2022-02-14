
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bcm_sdhost_softc {int dummy; } ;
typedef int bus_size_t ;


 int FUNC_0 (struct bcm_sdhost_softc*,int) ;
 int FUNC_1 (struct bcm_sdhost_softc*,int,int) ;

__attribute__((used)) static inline void
FUNC_2(struct bcm_sdhost_softc *VAR_0, bus_size_t VAR_1, uint16_t VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1 & ~3);
 VAR_3 &= ~(0xffff << (VAR_1 & 3)*8);
 VAR_3 |= (VAR_2 << (VAR_1 & 3)*8);
 FUNC_1(VAR_0, VAR_1 & ~3, VAR_3);
}
