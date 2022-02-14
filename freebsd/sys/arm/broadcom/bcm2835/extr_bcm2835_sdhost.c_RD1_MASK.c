
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bcm_sdhost_softc {int dummy; } ;
typedef int bus_size_t ;


 int FUNC_0 (struct bcm_sdhost_softc*,int) ;

__attribute__((used)) static inline uint8_t
FUNC_1(struct bcm_sdhost_softc *VAR_0, bus_size_t VAR_1)
{
 uint32_t VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1 & ~3);

 return ((VAR_2 >> (VAR_1 & 3)*8) & 0xff);
}
