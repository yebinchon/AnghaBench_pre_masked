
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventtimer {scalar_t__ et_priv; } ;
struct arm_tmr_softc {int physical; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct eventtimer *VAR_0)
{
 struct arm_tmr_softc *VAR_1;

 VAR_1 = (struct arm_tmr_softc *)VAR_0->et_priv;
 FUNC_0(VAR_1->physical);

 return (0);
}
