
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ti_pruss_softc {int dummy; } ;


 int FUNC_0 (struct ti_pruss_softc*,size_t const) ;
 int FUNC_1 (struct ti_pruss_softc*,size_t const,int) ;

__attribute__((used)) static __inline void
FUNC_2(struct ti_pruss_softc *VAR_0, uint32_t VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
 const size_t VAR_4 = VAR_1 + VAR_2 & ~0x03;
 const size_t VAR_5 = (VAR_2 & 0x03) * 8;
 uint32_t VAR_6 = FUNC_0(VAR_0, VAR_4);
 VAR_6 = (VAR_6 & ~( 0xF << VAR_5)) | ( (VAR_3 & 0xF) << VAR_5);
 FUNC_1(VAR_0, VAR_4, VAR_6);
}
