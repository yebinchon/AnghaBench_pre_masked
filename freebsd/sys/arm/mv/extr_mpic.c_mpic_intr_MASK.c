
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct mv_mpic_softc {int sc_dev; TYPE_1__* mpic_isrcs; } ;
struct TYPE_4__ {int td_intr_frame; } ;
struct TYPE_3__ {int mmi_isrc; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv_mpic_softc*,int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct mv_mpic_softc*,int ) ;
 int FUNC_4 (int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_5 (int ,char*,unsigned int) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (unsigned int) ;

__attribute__((used)) static int
FUNC_8(void *VAR_3)
{
 struct mv_mpic_softc *VAR_4;
 uint32_t VAR_5, VAR_6;
 unsigned int VAR_7;
 u_int VAR_8;

 VAR_4 = VAR_3;
 VAR_8 = FUNC_4(VAR_8);
 VAR_7 = 0;

 for (VAR_5 = FUNC_0(VAR_4, VAR_1); VAR_5 > 0;
     VAR_5 >>= 1, VAR_7++) {
  if (VAR_5 & 1) {
   VAR_6 = FUNC_3(VAR_4, FUNC_1(VAR_7));
   if ((VAR_6 & FUNC_2(VAR_8)) == 0)
    continue;
   if (FUNC_6(&VAR_4->mpic_isrcs[VAR_7].mmi_isrc,
       VAR_2->td_intr_frame) != 0) {
    FUNC_7(VAR_7);
    FUNC_5(VAR_4->sc_dev, "Stray irq %u "
        "disabled\n", VAR_7);
   }
  }
 }

 return (VAR_0);
}
