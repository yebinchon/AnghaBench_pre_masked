
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct padctl_softc {int dummy; } ;
struct padctl_lane {int mask; int shift; int mux_idx; int reg; } ;


 int FUNC_0 (struct padctl_softc*,int ) ;
 int FUNC_1 (struct padctl_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct padctl_softc *VAR_0, struct padctl_lane *VAR_1)
{
 uint32_t VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1->reg);
 VAR_2 &= ~(VAR_1->mask << VAR_1->shift);
 VAR_2 |= (VAR_1->mux_idx & VAR_1->mask) << VAR_1->shift;
 FUNC_1(VAR_0, VAR_1->reg, VAR_2);
 return (0);
}
