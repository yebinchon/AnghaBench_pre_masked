
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;
struct aml8726_rtc_softc {int dummy; } ;


 int FUNC_0 (struct aml8726_rtc_softc*,int *) ;
 int FUNC_1 (struct aml8726_rtc_softc*,int) ;
 int FUNC_2 (struct aml8726_rtc_softc*) ;

__attribute__((used)) static int
FUNC_3(struct aml8726_rtc_softc *VAR_0, u_char VAR_1, uint32_t *VAR_2)
{
 u_char VAR_3;
 int VAR_4;


 VAR_3 = (VAR_1 << 1) | 0;

 VAR_4 = FUNC_2(VAR_0);

 if (VAR_4)
  return (VAR_4);

 FUNC_1(VAR_0, VAR_3);
 FUNC_0(VAR_0, VAR_2);

 return (0);
}
