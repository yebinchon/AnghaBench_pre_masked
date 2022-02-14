
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aml8726_rtc_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct aml8726_rtc_softc*,int ) ;
 int FUNC_1 (struct aml8726_rtc_softc*,int ) ;
 int FUNC_2 (struct aml8726_rtc_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4(struct aml8726_rtc_softc *VAR_7)
{
 unsigned VAR_8;


 FUNC_2(VAR_7, VAR_0, (FUNC_1(VAR_7, VAR_0) &
     ~(VAR_2 | VAR_4 | VAR_3)));

 FUNC_0(VAR_7, VAR_0);


 for (VAR_8 = 40; VAR_8; VAR_8--) {
  FUNC_3(5);
  if ( (FUNC_1(VAR_7, VAR_1) & VAR_5) )
   break;
 }

 if (VAR_8 == 0)
  return (VAR_6);


 FUNC_2(VAR_7, VAR_0, (FUNC_1(VAR_7, VAR_0) |
     VAR_4));

 return (0);
}
