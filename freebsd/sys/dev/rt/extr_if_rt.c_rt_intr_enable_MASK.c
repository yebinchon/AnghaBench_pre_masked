
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt_softc {int intr_disable_mask; int intr_enable_mask; int fe_int_enable; } ;


 int FUNC_0 (struct rt_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct rt_softc *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2;

 VAR_0->intr_disable_mask &= ~VAR_1;
 VAR_2 = VAR_0->intr_enable_mask & ~VAR_0->intr_disable_mask;
 FUNC_0(VAR_0, VAR_0->fe_int_enable, VAR_2);
}
