
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sfxge_txq {scalar_t__ tso_pdrop_no_rsrc; scalar_t__ tso_pdrop_too_many; scalar_t__ netdown_drops; scalar_t__ put_overflow; scalar_t__ get_non_tcp_overflow; scalar_t__ get_overflow; scalar_t__ drops; } ;
struct sfxge_softc {unsigned int txq_count; struct sfxge_txq** txq; } ;



uint64_t
FUNC_0(struct sfxge_softc *VAR_0)
{
 unsigned int VAR_1;
 uint64_t VAR_2 = 0;
 struct sfxge_txq *VAR_3;


 for (VAR_1 = 0; VAR_1 < VAR_0->txq_count; VAR_1++) {
  VAR_3 = VAR_0->txq[VAR_1];





  VAR_2 += VAR_3->drops + VAR_3->get_overflow +
    VAR_3->get_non_tcp_overflow +
    VAR_3->put_overflow + VAR_3->netdown_drops +
    VAR_3->tso_pdrop_too_many + VAR_3->tso_pdrop_no_rsrc;
 }
 return (VAR_2);
}
