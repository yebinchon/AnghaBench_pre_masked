
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ always; int xo; int gpo; } ;
struct aml8726_rtc_softc {TYPE_1__ init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct aml8726_rtc_softc*,int ) ;
 int FUNC_1 (struct aml8726_rtc_softc*,int ) ;
 int FUNC_2 (struct aml8726_rtc_softc*,int ,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (struct aml8726_rtc_softc*,int ,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(struct aml8726_rtc_softc *VAR_12)
{
 int VAR_13;
 unsigned VAR_14;


 FUNC_2(VAR_12, VAR_0, (FUNC_1(VAR_12, VAR_0) &
     ~(VAR_7 | VAR_9 | VAR_8)));

 FUNC_0(VAR_12, VAR_0);


 for (VAR_14 = 40; VAR_14; VAR_14--) {
  FUNC_3(5);
  if ( (FUNC_1(VAR_12, VAR_1) & VAR_10) )
   break;
 }

 if (VAR_12->init.always == VAR_11 || (FUNC_1(VAR_12, VAR_1) &
     VAR_10) == 0) {







  FUNC_2(VAR_12, VAR_2, ((VAR_12->init.xo >> 8) & 0xff));

  FUNC_2(VAR_12, VAR_0,
      ((FUNC_1(VAR_12, VAR_0) & 0xffffff) |
      ((uint32_t)(VAR_12->init.xo & 0xff) << 24) | VAR_4 |
      VAR_6));

  while ((FUNC_1(VAR_12, VAR_0) & VAR_3) != 0)
   FUNC_5();

  FUNC_3(2);

  VAR_13 = FUNC_4(VAR_12, VAR_5,
      VAR_12->init.gpo);

  if (VAR_13)
   return (VAR_13);
 }

 return (0);
}
