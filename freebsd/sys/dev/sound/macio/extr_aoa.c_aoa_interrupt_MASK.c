
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aoa_softc {struct aoa_dma* sc_intrp; } ;
struct aoa_dma {int slot; int slots; int mutex; int pcm; int channel; int running; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(void *VAR_0)
{
 struct aoa_softc *VAR_1 = VAR_0;
 struct aoa_dma *VAR_2;

 if (!(VAR_2 = VAR_1->sc_intrp) || !VAR_2->running)
  return;

 FUNC_3(&VAR_2->mutex);

 while (FUNC_2(VAR_2->channel, VAR_2->slot)) {

  FUNC_1(VAR_2->channel, VAR_2->slot);
  VAR_2->slot = (VAR_2->slot + 1) % VAR_2->slots;

  FUNC_4(&VAR_2->mutex);
  FUNC_0(VAR_2->pcm);
  FUNC_3(&VAR_2->mutex);
 }

 FUNC_4(&VAR_2->mutex);
}
