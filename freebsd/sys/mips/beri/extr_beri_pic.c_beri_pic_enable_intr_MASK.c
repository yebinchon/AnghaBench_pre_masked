
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct intr_irqsrc {int dummy; } ;
struct beripic_softc {int * res; } ;
struct beri_pic_isrc {int mips_hard_irq; int irq; } ;
typedef int device_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 struct beripic_softc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_3, struct intr_irqsrc *VAR_4)
{
 struct beri_pic_isrc *VAR_5;
 struct beripic_softc *VAR_6;
 uint64_t VAR_7;

 VAR_6 = FUNC_1(VAR_3);
 VAR_5 = (struct beri_pic_isrc *)VAR_4;

 VAR_7 = VAR_1;
 VAR_7 |= (VAR_5->mips_hard_irq << VAR_2);
 FUNC_0(VAR_6->res[VAR_0], VAR_5->irq * 8, VAR_7);
}
