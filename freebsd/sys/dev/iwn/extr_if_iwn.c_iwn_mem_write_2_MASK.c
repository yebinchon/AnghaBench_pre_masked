
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct iwn_softc {int dummy; } ;


 int FUNC_0 (struct iwn_softc*,int) ;
 int FUNC_1 (struct iwn_softc*,int,int) ;

__attribute__((used)) static __inline void
FUNC_2(struct iwn_softc *VAR_0, uint32_t VAR_1, uint16_t VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1 & ~3);
 if (VAR_1 & 3)
  VAR_3 = (VAR_3 & 0x0000ffff) | VAR_2 << 16;
 else
  VAR_3 = (VAR_3 & 0xffff0000) | VAR_2;
 FUNC_1(VAR_0, VAR_1 & ~3, VAR_3);
}
