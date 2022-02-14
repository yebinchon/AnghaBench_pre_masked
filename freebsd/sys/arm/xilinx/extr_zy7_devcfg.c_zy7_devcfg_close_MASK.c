
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zy7_devcfg_softc {int dma_tag; scalar_t__ is_open; } ;
struct thread {int dummy; } ;
struct cdev {struct zy7_devcfg_softc* si_drv1; } ;


 int FUNC_0 (struct zy7_devcfg_softc*) ;
 int FUNC_1 (struct zy7_devcfg_softc*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct zy7_devcfg_softc *VAR_5 = VAR_1->si_drv1;

 FUNC_0(VAR_5);
 VAR_5->is_open = 0;
 FUNC_2(VAR_5->dma_tag);
 FUNC_1(VAR_5);

 FUNC_3(VAR_0);

 return (0);
}
