
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct wpi_softc {int nodesmsk; } ;


 int VAR_0 ;

__attribute__((used)) static __inline int
FUNC_0(struct wpi_softc *VAR_1, uint8_t VAR_2)
{
 if (VAR_2 == VAR_0)
  return 0;

 return (VAR_1->nodesmsk >> VAR_2) & 1;
}
