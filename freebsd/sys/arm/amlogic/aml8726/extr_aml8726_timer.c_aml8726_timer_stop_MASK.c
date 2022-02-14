
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventtimer {scalar_t__ et_priv; } ;
struct aml8726_timer_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct aml8726_timer_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct aml8726_timer_softc*) ;
 int FUNC_2 (struct aml8726_timer_softc*,int ) ;
 int FUNC_3 (struct aml8726_timer_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct eventtimer *VAR_2)
{
 struct aml8726_timer_softc *VAR_3 =
     (struct aml8726_timer_softc *)VAR_2->et_priv;

 FUNC_0(VAR_3);

 FUNC_3(VAR_3, VAR_1,
     (FUNC_2(VAR_3, VAR_1) & ~VAR_0));

 FUNC_1(VAR_3);

 return (0);
}
