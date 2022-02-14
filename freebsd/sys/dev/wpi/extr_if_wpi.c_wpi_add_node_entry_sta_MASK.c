
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct wpi_softc {int nodesmsk; } ;


 int VAR_0 ;

__attribute__((used)) static __inline uint8_t
FUNC_0(struct wpi_softc *VAR_1)
{
 VAR_1->nodesmsk |= 1 << VAR_0;

 return VAR_0;
}
