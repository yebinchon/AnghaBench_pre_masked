
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sfxge_rxq {size_t index; } ;
struct sfxge_evq {size_t index; TYPE_1__* sc; } ;
struct TYPE_2__ {struct sfxge_rxq** rxq; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static struct sfxge_rxq *
FUNC_1(struct sfxge_evq *VAR_0, uint32_t VAR_1)
{
 struct sfxge_rxq *VAR_2;

 FUNC_0(VAR_1 == 0, ("unexpected rxq label != 0"));

 VAR_2 = VAR_0->sc->rxq[VAR_0->index];

 FUNC_0(VAR_2 != ((void*)0), ("rxq == NULL"));
 FUNC_0(VAR_0->index == VAR_2->index, ("evq->index != rxq->index"));

 return (VAR_2);
}
