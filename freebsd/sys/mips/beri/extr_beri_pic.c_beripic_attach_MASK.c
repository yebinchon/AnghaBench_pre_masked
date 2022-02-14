
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct intr_irqsrc {int dummy; } ;
struct beripic_softc {int nirqs; int mips_hard_irq_idx; int * ih; TYPE_2__* hirq; int * res; int dev; TYPE_1__* irqs; } ;
struct beri_pic_isrc {scalar_t__ mips_hard_irq; } ;
typedef int device_t ;
struct TYPE_4__ {int irq; struct beripic_softc* sc; } ;
struct TYPE_3__ {int irq; struct intr_irqsrc isrc; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 intptr_t FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int *,TYPE_2__*,int ) ;
 int FUNC_3 (int ,int,int ) ;
 char* FUNC_4 (int ) ;
 struct beripic_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct intr_irqsrc*,int ,int ,char*,int ,int) ;
 int FUNC_9 (int ,intptr_t) ;
 int * FUNC_10 (int ,intptr_t) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_7)
{
 struct beripic_softc *VAR_8;
 struct beri_pic_isrc *VAR_9;
 const char *VAR_10;
 struct intr_irqsrc *VAR_11;
 intptr_t VAR_12;
 uint32_t VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_8 = FUNC_5(VAR_7);
 VAR_8->dev = VAR_7;

 if (FUNC_1(VAR_7, VAR_6, VAR_8->res)) {
  FUNC_7(VAR_7, "could not allocate resources\n");
  return (VAR_3);
 }

 VAR_12 = FUNC_0(FUNC_11(VAR_7));
 VAR_10 = FUNC_4(VAR_7);
 VAR_13 = FUNC_6(VAR_7);
 VAR_8->nirqs = VAR_2;

 for (VAR_15 = 0; VAR_15 < VAR_8->nirqs; VAR_15++) {
  VAR_8->irqs[VAR_15].irq = VAR_15;
  VAR_11 = &VAR_8->irqs[VAR_15].isrc;


  VAR_9 = (struct beri_pic_isrc *)VAR_11;
  VAR_9->mips_hard_irq = VAR_8->mips_hard_irq_idx++;

  if (VAR_8->mips_hard_irq_idx >= (VAR_1 - 1)) {
   VAR_8->mips_hard_irq_idx = 0;
  }

  VAR_14 = FUNC_8(VAR_11, VAR_8->dev,
      0, "pic%d,%d", VAR_13, VAR_15);
  FUNC_3(VAR_8->res[VAR_0], VAR_15 * 8, 0);
 }





 if (FUNC_10(VAR_7, VAR_12) == ((void*)0)) {
  FUNC_7(VAR_7, "could not register PIC\n");
  return (VAR_3);
 }


 for (VAR_15 = 0; VAR_15 < (VAR_1 - 1); VAR_15++) {
  VAR_8->hirq[VAR_15].sc = VAR_8;
  VAR_8->hirq[VAR_15].irq = VAR_15;
  if (FUNC_2(VAR_7, VAR_8->res[4+VAR_15], VAR_4,
      VAR_5, ((void*)0), &VAR_8->hirq[VAR_15], VAR_8->ih[VAR_15])) {
   FUNC_7(VAR_7, "could not setup irq handler\n");
   FUNC_9(VAR_7, VAR_12);
   return (VAR_3);
  }
 }

 return (0);
}
