
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int ;
struct aml8726_wdt_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct aml8726_wdt_softc*) ;
 int VAR_6 ;
 int FUNC_1 (struct aml8726_wdt_softc*) ;
 int FUNC_2 (struct aml8726_wdt_softc*,int ) ;
 int FUNC_3 (struct aml8726_wdt_softc*,int ,int) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_4(void *VAR_8, u_int VAR_9, int *VAR_10)
{
 struct aml8726_wdt_softc *VAR_11 = (struct aml8726_wdt_softc *)VAR_8;
 uint32_t VAR_12;
 uint64_t VAR_13;

 FUNC_0(VAR_11);

 VAR_13 = (((uint64_t)1 << (VAR_9 & VAR_7)) + 9999) / 10000;

 if (VAR_9 != 0 && VAR_13 <= (VAR_4 >>
     VAR_5)) {

  VAR_12 = VAR_0 |
      VAR_1 | ((uint32_t)VAR_13 <<
      VAR_5);

  FUNC_3(VAR_11, VAR_6, 0);
  FUNC_3(VAR_11, VAR_3, VAR_12);

  *VAR_10 = 0;
 } else
  FUNC_3(VAR_11, VAR_3,
      (FUNC_2(VAR_11, VAR_3) &
      ~(VAR_2 | VAR_1)));

 FUNC_1(VAR_11);
}
