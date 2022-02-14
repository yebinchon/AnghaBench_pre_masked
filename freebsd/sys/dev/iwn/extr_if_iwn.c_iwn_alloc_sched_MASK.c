
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwn_softc {int schedsz; int sched; int sched_dma; } ;


 int FUNC_0 (struct iwn_softc*,int *,void**,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct iwn_softc *VAR_0)
{

 return FUNC_0(VAR_0, &VAR_0->sched_dma, (void **)&VAR_0->sched,
     VAR_0->schedsz, 1024);
}
