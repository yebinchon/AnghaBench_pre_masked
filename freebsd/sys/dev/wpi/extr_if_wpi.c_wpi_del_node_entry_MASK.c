
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct wpi_softc {int nodesmsk; } ;



__attribute__((used)) static __inline void
FUNC_0(struct wpi_softc *VAR_0, uint8_t VAR_1)
{
 VAR_0->nodesmsk &= ~(1 << VAR_1);
}
