
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zy7_devcfg_softc {int is_open; int dma_tag; int sc_mtx; int dev; int * dma_map; } ;
struct thread {int dummy; } ;
struct cdev {struct zy7_devcfg_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zy7_devcfg_softc*) ;
 int FUNC_1 (struct zy7_devcfg_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int ,int *,int *) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_5, int VAR_6, int VAR_7, struct thread *VAR_8)
{
 struct zy7_devcfg_softc *VAR_9 = VAR_5->si_drv1;
 int VAR_10;

 FUNC_0(VAR_9);
 if (VAR_9->is_open) {
  FUNC_1(VAR_9);
  return (VAR_2);
 }

 VAR_9->dma_map = ((void*)0);
 VAR_10 = FUNC_2(FUNC_3(VAR_9->dev), 4, 0,
     VAR_1,
     VAR_0,
     ((void*)0), ((void*)0),
     VAR_3,
     1,
     VAR_3,
     0,
     VAR_4,
     &VAR_9->sc_mtx,
     &VAR_9->dma_tag);
 if (VAR_10) {
  FUNC_1(VAR_9);
  return (VAR_10);
 }

 VAR_9->is_open = 1;
 FUNC_1(VAR_9);
 return (0);
}
