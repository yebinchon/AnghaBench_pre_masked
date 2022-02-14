
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_tx_dpl {scalar_t__ std_get_count; scalar_t__ std_get_max; scalar_t__ std_get_non_tcp_count; scalar_t__ std_get_non_tcp_max; struct mbuf** std_getp; } ;
struct sfxge_txq {int get_non_tcp_overflow; int get_overflow; struct sfxge_tx_dpl dpl; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sfxge_txq*) ;
 scalar_t__ FUNC_2 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_3(struct sfxge_txq *VAR_1, struct mbuf *VAR_2)
{
 struct sfxge_tx_dpl *VAR_3;

 VAR_3 = &VAR_1->dpl;

 FUNC_0(VAR_2->m_nextpkt == ((void*)0), ("mbuf->m_nextpkt != NULL"));

 FUNC_1(VAR_1);

 if (VAR_3->std_get_count >= VAR_3->std_get_max) {
  VAR_1->get_overflow++;
  return (VAR_0);
 }
 if (FUNC_2(VAR_2)) {
  if (VAR_3->std_get_non_tcp_count >=
      VAR_3->std_get_non_tcp_max) {
   VAR_1->get_non_tcp_overflow++;
   return (VAR_0);
  }
  VAR_3->std_get_non_tcp_count++;
 }

 *(VAR_3->std_getp) = VAR_2;
 VAR_3->std_getp = &VAR_2->m_nextpkt;
 VAR_3->std_get_count++;

 return (0);
}
