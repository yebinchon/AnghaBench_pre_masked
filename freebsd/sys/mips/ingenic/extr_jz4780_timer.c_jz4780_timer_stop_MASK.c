
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4780_timer_softc {int dummy; } ;
struct eventtimer {scalar_t__ et_priv; } ;


 int FUNC_0 (struct jz4780_timer_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct eventtimer *VAR_2)
{
 struct jz4780_timer_softc *VAR_3 =
     (struct jz4780_timer_softc *)VAR_2->et_priv;

 FUNC_0(VAR_3, VAR_0, VAR_1);
 return (0);
}
