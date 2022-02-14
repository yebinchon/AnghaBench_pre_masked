
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aml8726_rtc_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aml8726_rtc_softc*,int ) ;
 int FUNC_1 (struct aml8726_rtc_softc*,int ,int) ;
 int FUNC_2 (struct aml8726_rtc_softc*) ;

__attribute__((used)) static inline void
FUNC_3(struct aml8726_rtc_softc *VAR_2, unsigned VAR_3)
{

 if (VAR_3) {
  FUNC_1(VAR_2, VAR_0, (FUNC_0(VAR_2, VAR_0) |
      VAR_1));
 } else {
  FUNC_1(VAR_2, VAR_0, (FUNC_0(VAR_2, VAR_0) &
      ~VAR_1));
 }

 FUNC_2(VAR_2);
}
