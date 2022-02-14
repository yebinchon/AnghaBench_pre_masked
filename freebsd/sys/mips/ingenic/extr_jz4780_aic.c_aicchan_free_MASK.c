
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pcminfo {struct aic_softc* sc; } ;
struct sc_chinfo {struct sc_pcminfo* parent; } ;
struct aic_softc {int lock; } ;
typedef int kobj_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(kobj_t VAR_0, void *VAR_1)
{
 struct sc_chinfo *VAR_2 = VAR_1;
 struct sc_pcminfo *VAR_3 = VAR_2->parent;
 struct aic_softc *VAR_4 = VAR_3->sc;

 FUNC_0(VAR_4->lock);

 FUNC_1(VAR_4->lock);

 return (0);
}
