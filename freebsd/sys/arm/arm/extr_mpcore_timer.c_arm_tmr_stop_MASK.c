
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventtimer {struct arm_tmr_softc* et_priv; } ;
struct arm_tmr_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct arm_tmr_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct eventtimer *VAR_3)
{
 struct arm_tmr_softc *VAR_4;

 VAR_4 = VAR_3->et_priv;
 FUNC_0(VAR_4, VAR_0, 0);
 FUNC_0(VAR_4, VAR_1, VAR_2);
 return (0);
}
