
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t u_int ;
struct trapframe {int dummy; } ;
struct mv_ap806_sei_softc {int dev; struct mv_ap806_sei_irqsrc* isrcs; } ;
struct mv_ap806_sei_irqsrc {int isrc; } ;
struct TYPE_2__ {struct trapframe* td_intr_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mv_ap806_sei_softc*,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,char*,size_t) ;
 size_t FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,struct trapframe*) ;
 int FUNC_4 (struct mv_ap806_sei_softc*,struct mv_ap806_sei_irqsrc*) ;
 int FUNC_5 (struct mv_ap806_sei_softc*,struct mv_ap806_sei_irqsrc*,int ) ;

__attribute__((used)) static int
FUNC_6(void *VAR_4)
{
 struct mv_ap806_sei_softc *VAR_5;
 struct mv_ap806_sei_irqsrc *VAR_6;
 struct trapframe *VAR_7;
 uint64_t VAR_8;
 u_int VAR_9;

 VAR_5 = (struct mv_ap806_sei_softc *)VAR_4;
 VAR_7 = VAR_3->td_intr_frame;
 while (1) {
  VAR_8 = FUNC_0(VAR_5, VAR_2);
  VAR_8 <<= 32;
  VAR_8 |= FUNC_0(VAR_5, VAR_1);

  VAR_9 = FUNC_2(VAR_8);
  if (VAR_9 == 0) break;
  VAR_9--;
  VAR_6 = &VAR_5->isrcs[VAR_9];
  if (FUNC_3(&VAR_6->isrc, VAR_7) != 0) {
   FUNC_5(VAR_5, VAR_6, 0);
   FUNC_4(VAR_5, VAR_6);
   FUNC_1(VAR_5->dev,
       "Stray irq %u disabled\n", VAR_9);
  }
 }

 return (VAR_0);
}
