
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt1310_timer_softc {int dummy; } ;
struct eventtimer {scalar_t__ et_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt1310_timer_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct eventtimer *VAR_1)
{
 struct rt1310_timer_softc *VAR_2 = (struct rt1310_timer_softc *)VAR_1->et_priv;

 FUNC_0(VAR_2, VAR_0, 0);

 return (0);
}
