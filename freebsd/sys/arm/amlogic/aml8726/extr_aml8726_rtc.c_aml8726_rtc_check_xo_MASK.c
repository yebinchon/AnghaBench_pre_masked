
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct aml8726_rtc_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aml8726_rtc_softc*,int ) ;
 int FUNC_1 (struct aml8726_rtc_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct aml8726_rtc_softc *VAR_4)
{
 uint32_t VAR_5, VAR_6;
 int VAR_7;
 FUNC_1(VAR_4, VAR_1, (FUNC_0(VAR_4, VAR_1) |
     VAR_2));

 VAR_6 = FUNC_0(VAR_4, VAR_0);

 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  FUNC_2(50);
  VAR_5 = FUNC_0(VAR_4, VAR_0);
  if (VAR_5 != VAR_6)
   break;
 }

 FUNC_1(VAR_4, VAR_1, (FUNC_0(VAR_4, VAR_1) &
     ~VAR_2));

 if (VAR_5 == VAR_6)
  return (VAR_3);

 return (0);
}
