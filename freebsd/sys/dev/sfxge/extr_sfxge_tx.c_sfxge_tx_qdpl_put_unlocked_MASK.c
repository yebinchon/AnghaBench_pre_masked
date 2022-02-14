
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfxge_tx_dpl {uintptr_t std_put; unsigned int std_put_max; } ;
struct sfxge_txq {int put_overflow; struct sfxge_tx_dpl dpl; } ;
struct TYPE_2__ {unsigned int csum_data; } ;
struct mbuf {int * m_nextpkt; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sfxge_txq*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (uintptr_t volatile*,uintptr_t,uintptr_t) ;

__attribute__((used)) static int
FUNC_4(struct sfxge_txq *VAR_1, struct mbuf *VAR_2)
{
 struct sfxge_tx_dpl *VAR_3;
 volatile uintptr_t *VAR_4;
 uintptr_t VAR_5;
 uintptr_t VAR_6;
 unsigned int VAR_7;

 FUNC_0(VAR_2->m_nextpkt == ((void*)0), ("mbuf->m_nextpkt != NULL"));

 FUNC_1(VAR_1);

 VAR_3 = &VAR_1->dpl;
 VAR_4 = &VAR_3->std_put;
 VAR_6 = (uintptr_t)VAR_2;

 do {
  VAR_5 = *VAR_4;
  if (VAR_5 != 0) {
   struct mbuf *VAR_8 = (struct mbuf *)VAR_5;
   VAR_7 = VAR_8->m_pkthdr.csum_data;
  } else
   VAR_7 = 0;
  if (VAR_7 >= VAR_3->std_put_max) {
   FUNC_2(&VAR_1->put_overflow, 1);
   return (VAR_0);
  }
  VAR_2->m_pkthdr.csum_data = VAR_7 + 1;
  VAR_2->m_nextpkt = (void *)VAR_5;
 } while (FUNC_3(VAR_4, VAR_5, VAR_6) == 0);

 return (0);
}
