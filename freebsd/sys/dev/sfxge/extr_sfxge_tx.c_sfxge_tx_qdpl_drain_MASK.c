
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_tx_dpl {unsigned int std_get_count; unsigned int std_get_non_tcp_count; unsigned int std_get_hiwat; struct mbuf* std_get; struct mbuf** std_getp; } ;
struct sfxge_txq {unsigned int added; scalar_t__ init_state; scalar_t__ blocked; struct mbuf* common; struct sfxge_tx_dpl dpl; struct sfxge_softc* sc; } ;
struct sfxge_softc {int ifnet; struct mbuf* enp; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;


 int FUNC_0 (int ,struct mbuf*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct sfxge_txq*) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct mbuf*,unsigned int,unsigned int) ;
 int FUNC_5 (struct mbuf*) ;
 scalar_t__ FUNC_6 (struct mbuf*) ;
 int FUNC_7 (struct sfxge_txq*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_8(struct sfxge_txq *VAR_2)
{
 struct sfxge_softc *VAR_3;
 struct sfxge_tx_dpl *VAR_4;
 struct mbuf *VAR_5, *VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 FUNC_2(VAR_2);

 VAR_3 = VAR_2->sc;
 VAR_4 = &VAR_2->dpl;
 VAR_9 = VAR_2->added;

 if (FUNC_3(VAR_2->init_state == VAR_0)) {
  FUNC_5(VAR_3->enp);
  FUNC_5(VAR_2->common);
 }

 VAR_5 = VAR_4->std_get;
 VAR_7 = VAR_4->std_get_count;
 VAR_8 = VAR_4->std_get_non_tcp_count;

 if (VAR_7 > VAR_4->std_get_hiwat)
  VAR_4->std_get_hiwat = VAR_7;

 while (VAR_7 != 0) {
  FUNC_1(VAR_5 != ((void*)0), ("mbuf == NULL"));

  VAR_6 = VAR_5->m_nextpkt;
  VAR_5->m_nextpkt = ((void*)0);

  FUNC_0(VAR_3->ifnet, VAR_5);

  if (VAR_6 != ((void*)0))
   FUNC_5(VAR_6);

  VAR_10 = FUNC_7(VAR_2, VAR_5);
  --VAR_7;
  VAR_8 -= FUNC_6(VAR_5);
  VAR_5 = VAR_6;
  if (VAR_10 != 0)
   continue;

  if (VAR_2->blocked)
   break;


  if (VAR_2->added - VAR_9 >= VAR_1) {
   FUNC_4(VAR_2->common, VAR_2->added, VAR_9);
   VAR_9 = VAR_2->added;
  }
 }

 if (VAR_7 == 0) {
  FUNC_1(VAR_5 == ((void*)0), ("mbuf != NULL"));
  FUNC_1(VAR_8 == 0,
   ("inconsistent TCP/non-TCP detection"));
  VAR_4->std_get = ((void*)0);
  VAR_4->std_get_count = 0;
  VAR_4->std_get_non_tcp_count = 0;
  VAR_4->std_getp = &VAR_4->std_get;
 } else {
  VAR_4->std_get = VAR_5;
  VAR_4->std_get_count = VAR_7;
  VAR_4->std_get_non_tcp_count = VAR_8;
 }

 if (VAR_2->added != VAR_9)
  FUNC_4(VAR_2->common, VAR_2->added, VAR_9);

 FUNC_1(VAR_2->blocked || VAR_4->std_get_count == 0,
  ("queue unblocked but count is non-zero"));
}
