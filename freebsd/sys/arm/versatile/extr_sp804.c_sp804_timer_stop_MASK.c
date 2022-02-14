
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sp804_timer_softc {scalar_t__ et_enabled; } ;
struct eventtimer {struct sp804_timer_softc* et_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct eventtimer *VAR_2)
{
 struct sp804_timer_softc *VAR_3 = VAR_2->et_priv;
 uint32_t VAR_4;

 VAR_3->et_enabled = 0;
 VAR_4 = FUNC_0(VAR_0);
 VAR_4 &= ~(VAR_1);
 FUNC_1(VAR_0, VAR_4);

 return (0);
}
