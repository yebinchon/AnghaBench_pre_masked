
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct bcm_lintc_softc {int dummy; } ;
struct TYPE_2__ {int isrc_cpu; } ;
struct bcm_lintc_irqsrc {int bli_mask; TYPE_1__ bli_isrc; } ;
typedef int cpuset_t ;


 int FUNC_0 (struct bcm_lintc_softc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bcm_lintc_softc*) ;
 scalar_t__ FUNC_3 (int,int *) ;
 int FUNC_4 (struct bcm_lintc_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct bcm_lintc_softc *VAR_0, struct bcm_lintc_irqsrc *VAR_1)
{
 cpuset_t *VAR_2;
 uint32_t VAR_3;

 VAR_2 = &VAR_1->bli_isrc.isrc_cpu;

 FUNC_0(VAR_0);
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
  if (FUNC_3(VAR_3, VAR_2))
   FUNC_4(VAR_0, FUNC_1(VAR_3),
       VAR_1->bli_mask);
 FUNC_2(VAR_0);
}
