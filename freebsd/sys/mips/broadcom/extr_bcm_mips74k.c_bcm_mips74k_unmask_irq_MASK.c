
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct TYPE_2__ {scalar_t__ num_cpuirqs; } ;
struct bcm_mips74k_softc {int mem; TYPE_1__ bcm_mips; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct bcm_mips74k_softc *VAR_2, u_int VAR_3, u_int VAR_4)
{
 uint32_t VAR_5;

 FUNC_2(VAR_3 < VAR_2->bcm_mips.num_cpuirqs, ("invalid MIPS IRQ %u",
     VAR_3));
 FUNC_2(VAR_3 < VAR_1, ("unsupported MIPS IRQ %u",
     VAR_3));
 FUNC_2(VAR_4 < VAR_0, ("invalid backplane ivec"));

 VAR_5 = FUNC_3(VAR_2->mem, FUNC_0(VAR_3));
 VAR_5 |= FUNC_1(VAR_4);
 FUNC_4(VAR_2->mem, FUNC_0(VAR_3), VAR_5);
}
