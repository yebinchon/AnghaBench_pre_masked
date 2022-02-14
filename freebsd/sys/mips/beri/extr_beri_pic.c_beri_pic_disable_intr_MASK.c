
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct intr_irqsrc {int dummy; } ;
struct beripic_softc {int * res; } ;
struct beri_pic_isrc {int irq; } ;
typedef int device_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int ) ;
 struct beripic_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_2, struct intr_irqsrc *VAR_3)
{
 struct beri_pic_isrc *VAR_4;
 struct beripic_softc *VAR_5;
 uint64_t VAR_6;

 VAR_5 = FUNC_2(VAR_2);
 VAR_4 = (struct beri_pic_isrc *)VAR_3;

 VAR_6 = FUNC_0(VAR_5->res[VAR_0], VAR_4->irq * 8);
 VAR_6 &= ~VAR_1;
 FUNC_1(VAR_5->res[VAR_0], VAR_4->irq * 8, VAR_6);
}
