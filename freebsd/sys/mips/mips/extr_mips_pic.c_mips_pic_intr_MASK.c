
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct mips_pic_softc {int pic_dev; } ;
typedef int register_t ;
struct TYPE_6__ {int td_intr_frame; } ;
struct TYPE_5__ {int td_pflags; struct trapframe* td_intr_frame; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct mips_pic_softc*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct mips_pic_softc*,int) ;
 int FUNC_9 (TYPE_1__*,int ,struct trapframe*) ;

int
FUNC_10(void *VAR_5)
{
 struct mips_pic_softc *VAR_6 = VAR_5;
 register_t VAR_7, VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = FUNC_6();
 VAR_8 = FUNC_7();
 VAR_10 = (VAR_7 & VAR_1) >> 8;





 VAR_10 &= (VAR_8 & VAR_1) >> 8;
 while ((VAR_9 = FUNC_4(VAR_10)) != 0) {
  VAR_9--;
  VAR_10 &= ~(1 << VAR_9);

  if (FUNC_5(FUNC_2(VAR_6, VAR_9),
      VAR_4->td_intr_frame) != 0) {
   FUNC_3(VAR_6->pic_dev,
       "Stray interrupt %u detected\n", VAR_9);
   FUNC_8(VAR_6, VAR_9);
   continue;
  }
 }

 FUNC_0(VAR_9 == 0, ("all interrupts handled"));
 return (VAR_0);
}
