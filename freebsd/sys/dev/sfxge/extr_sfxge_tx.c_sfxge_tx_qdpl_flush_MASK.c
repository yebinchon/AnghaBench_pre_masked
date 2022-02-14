
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_tx_dpl {struct mbuf* std_get; struct mbuf** std_getp; scalar_t__ std_get_non_tcp_count; scalar_t__ std_get_count; } ;
struct sfxge_txq {struct sfxge_tx_dpl dpl; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;


 int FUNC_0 (struct sfxge_txq*) ;
 int FUNC_1 (struct sfxge_txq*) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct sfxge_txq*) ;

__attribute__((used)) static void
FUNC_4(struct sfxge_txq *VAR_0)
{
 struct sfxge_tx_dpl *VAR_1 = &VAR_0->dpl;
 struct mbuf *VAR_2, *VAR_3;

 FUNC_0(VAR_0);

 FUNC_3(VAR_0);
 for (VAR_2 = VAR_1->std_get; VAR_2 != ((void*)0); VAR_2 = VAR_3) {
  VAR_3 = VAR_2->m_nextpkt;
  FUNC_2(VAR_2);
 }
 VAR_1->std_get = ((void*)0);
 VAR_1->std_get_count = 0;
 VAR_1->std_get_non_tcp_count = 0;
 VAR_1->std_getp = &VAR_1->std_get;

 FUNC_1(VAR_0);
}
