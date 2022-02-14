
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfxge_txq {int dummy; } ;
struct sfxge_evq {int index; TYPE_1__* sc; } ;
typedef enum sfxge_txq_type { ____Placeholder_sfxge_txq_type } sfxge_txq_type ;
struct TYPE_2__ {struct sfxge_txq** txq; scalar_t__ txq_dynamic_cksum_toggle_supported; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct sfxge_txq *
FUNC_2(struct sfxge_evq *VAR_2, enum sfxge_txq_type VAR_3)
{
 unsigned int VAR_4;

 FUNC_0((VAR_2->sc->txq_dynamic_cksum_toggle_supported) ? (VAR_3 == 0) :
  ((VAR_2->index == 0 && VAR_3 < VAR_1) ||
   (VAR_3 == VAR_0)),
  ("unexpected txq label"));

 VAR_4 = (VAR_2->index == 0) ?
  VAR_3 : (VAR_2->index - 1 + FUNC_1(VAR_2->sc));
 return (VAR_2->sc->txq[VAR_4]);
}
