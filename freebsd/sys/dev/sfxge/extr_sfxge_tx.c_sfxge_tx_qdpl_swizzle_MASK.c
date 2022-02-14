
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_tx_dpl {uintptr_t std_put; unsigned int std_put_hiwat; unsigned int std_get_count; unsigned int std_get_non_tcp_count; struct mbuf** std_getp; } ;
struct sfxge_txq {struct sfxge_tx_dpl dpl; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sfxge_txq*) ;
 uintptr_t FUNC_2 (uintptr_t volatile*) ;
 scalar_t__ FUNC_3 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_4(struct sfxge_txq *VAR_0)
{
 struct sfxge_tx_dpl *VAR_1;
 struct mbuf *VAR_2, *VAR_3, **VAR_4;
 volatile uintptr_t *VAR_5;
 uintptr_t VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;

 FUNC_1(VAR_0);

 VAR_1 = &VAR_0->dpl;


 VAR_5 = &VAR_1->std_put;
 VAR_6 = FUNC_2(VAR_5);
 VAR_2 = (void *)VAR_6;

 if (VAR_2 == ((void*)0))
  return;


 VAR_4 = &VAR_2->m_nextpkt;
 VAR_3 = ((void*)0);

 VAR_7 = 0;
 VAR_8 = 0;
 do {
  struct mbuf *VAR_9;

  VAR_8 += FUNC_3(VAR_2);
  VAR_9 = VAR_2->m_nextpkt;
  VAR_2->m_nextpkt = VAR_3;
  VAR_3 = VAR_2;
  VAR_2 = VAR_9;

  VAR_7++;
 } while (VAR_2 != ((void*)0));

 if (VAR_7 > VAR_1->std_put_hiwat)
  VAR_1->std_put_hiwat = VAR_7;


 FUNC_0(*VAR_4 == ((void*)0), ("*get_tailp != NULL"));
 *VAR_1->std_getp = VAR_3;
 VAR_1->std_getp = VAR_4;
 VAR_1->std_get_count += VAR_7;
 VAR_1->std_get_non_tcp_count += VAR_8;
}
