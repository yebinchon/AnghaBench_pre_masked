
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct machfb_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct machfb_softc*,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct machfb_softc *VAR_1, uint8_t VAR_2)
{

 while ((FUNC_0(VAR_1, VAR_0) & 0xffff) > (0x8000 >> VAR_2))
  ;
}
