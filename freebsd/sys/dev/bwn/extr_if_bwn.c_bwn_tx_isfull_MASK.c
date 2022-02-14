
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct bwn_softc {int sc_snd; struct bwn_mac* sc_curmac; } ;
struct bwn_pio_txqueue {scalar_t__ tq_free; int tq_size; int tq_used; } ;
struct bwn_mac {int mac_flags; } ;
struct bwn_dma_ring {int dr_stop; } ;


 int FUNC_0 (struct bwn_softc*) ;
 scalar_t__ FUNC_1 (struct bwn_mac*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct mbuf*) ;
 scalar_t__ FUNC_3 (struct bwn_dma_ring*) ;
 struct bwn_dma_ring* FUNC_4 (struct bwn_mac*,int ) ;
 struct bwn_pio_txqueue* FUNC_5 (struct bwn_mac*,int ) ;
 int FUNC_6 (int *,struct mbuf*) ;
 int FUNC_7 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_8(struct bwn_softc *VAR_2, struct mbuf *VAR_3)
{
 struct bwn_dma_ring *VAR_4;
 struct bwn_mac *VAR_5 = VAR_2->sc_curmac;
 struct bwn_pio_txqueue *VAR_6;
 int VAR_7 = FUNC_7(VAR_3->m_pkthdr.len + FUNC_1(VAR_5), 4);

 FUNC_0(VAR_2);

 if (VAR_5->mac_flags & VAR_0) {
  VAR_4 = FUNC_4(VAR_5, FUNC_2(VAR_3));
  if (VAR_4->dr_stop == 1 ||
      FUNC_3(VAR_4) < VAR_1) {
   VAR_4->dr_stop = 1;
   goto full;
  }
 } else {
  VAR_6 = FUNC_5(VAR_5, FUNC_2(VAR_3));
  if (VAR_6->tq_free == 0 || VAR_7 > VAR_6->tq_size ||
      VAR_7 > (VAR_6->tq_size - VAR_6->tq_used))
   goto full;
 }
 return (0);
full:
 FUNC_6(&VAR_2->sc_snd, VAR_3);
 return (1);
}
