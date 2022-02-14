
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pcminfo {struct aic_softc* sc; } ;
struct sc_chinfo {int run; struct sc_pcminfo* parent; } ;
struct aic_softc {int lock; int dma_size; int buf_base; int pos; } ;
typedef int kobj_t ;





 int FUNC_0 (struct sc_pcminfo*) ;
 int FUNC_1 (struct sc_pcminfo*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(kobj_t VAR_0, void *VAR_1, int VAR_2)
{
 struct sc_pcminfo *VAR_3;
 struct sc_chinfo *VAR_4;
 struct aic_softc *VAR_5;

 VAR_4 = VAR_1;
 VAR_3 = VAR_4->parent;
 VAR_5 = VAR_3->sc;

 FUNC_3(VAR_5->lock);

 switch (VAR_2) {
 case 129:
  VAR_4->run = 1;

  VAR_5->pos = 0;

  FUNC_0(VAR_3);

  break;

 case 128:
 case 130:
  VAR_4->run = 0;

  FUNC_1(VAR_3);

  VAR_5->pos = 0;

  FUNC_2(VAR_5->buf_base, VAR_5->dma_size);

  break;
 }

 FUNC_4(VAR_5->lock);

 return (0);
}
