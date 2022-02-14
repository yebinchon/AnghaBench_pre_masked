
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct rt1310_intc_softc {int dev; TYPE_1__* ri_isrcs; } ;
struct TYPE_4__ {int td_intr_frame; } ;
struct TYPE_3__ {int ri_isrc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int ,char*,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (struct rt1310_intc_softc*,int ) ;
 int FUNC_4 (struct rt1310_intc_softc*,int ,int) ;
 scalar_t__ FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(void *VAR_4)
{
 uint32_t VAR_5;
 struct rt1310_intc_softc *VAR_6 = VAR_4;

 VAR_5 = FUNC_2(FUNC_3(VAR_6, VAR_2)) - 1;

 if (FUNC_5(&VAR_6->ri_isrcs[VAR_5].ri_isrc,
     VAR_3->td_intr_frame) != 0) {
        FUNC_4(VAR_6, VAR_1, 1 << VAR_5);
  FUNC_1(VAR_6->dev, "Stray irq %u disabled\n", VAR_5);
 }

 FUNC_0(0);

 return (VAR_0);
}
