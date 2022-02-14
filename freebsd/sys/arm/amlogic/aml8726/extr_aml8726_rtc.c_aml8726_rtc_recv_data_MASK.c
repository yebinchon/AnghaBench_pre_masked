
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct aml8726_rtc_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aml8726_rtc_softc*,int ) ;
 int FUNC_1 (struct aml8726_rtc_softc*) ;

__attribute__((used)) static inline void
FUNC_2(struct aml8726_rtc_softc *VAR_2, uint32_t *VAR_3)
{
 uint32_t VAR_4;
 unsigned VAR_5;

 VAR_4 = 0;

 for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
  FUNC_1(VAR_2);
  VAR_4 <<= 1;
  VAR_4 |= (FUNC_0(VAR_2, VAR_0) & VAR_1) ? 1 : 0;
 }

 *VAR_3 = VAR_4;
}
