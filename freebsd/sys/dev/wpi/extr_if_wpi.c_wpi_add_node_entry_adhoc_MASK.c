
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct wpi_softc {int nodesmsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __inline uint8_t
FUNC_0(struct wpi_softc *VAR_3)
{
 uint8_t VAR_4 = VAR_1;

 for (; VAR_4 <= VAR_0; VAR_4++) {
  if ((VAR_3->nodesmsk & (1 << VAR_4)) == 0) {
   VAR_3->nodesmsk |= 1 << VAR_4;
   return VAR_4;
  }
 }

 return VAR_2;
}
