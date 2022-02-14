
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_txq {scalar_t__ init_state; scalar_t__ type; int mem; struct sfxge_txq* stmp; int map; int packet_dma_tag; struct sfxge_txq* pend_desc; } ;
struct sfxge_softc {unsigned int txq_entries; struct sfxge_txq** txq; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sfxge_txq*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sfxge_txq*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sfxge_txq*) ;

__attribute__((used)) static void
FUNC_6(struct sfxge_softc *VAR_3, unsigned int VAR_4)
{
 struct sfxge_txq *VAR_5;
 unsigned int VAR_6;

 VAR_5 = VAR_3->txq[VAR_4];

 FUNC_0(VAR_5->init_state == VAR_1,
     ("txq->init_state != SFXGE_TXQ_INITIALIZED"));

 if (VAR_5->type == VAR_2)
  FUNC_5(VAR_5);


 FUNC_3(VAR_5->pend_desc, VAR_0);
 VAR_6 = VAR_3->txq_entries;
 while (VAR_6-- != 0)
  FUNC_2(VAR_5->packet_dma_tag, VAR_5->stmp[VAR_6].map);
 FUNC_3(VAR_5->stmp, VAR_0);


 FUNC_4(&VAR_5->mem);

 VAR_3->txq[VAR_4] = ((void*)0);

 FUNC_1(VAR_5);

 FUNC_3(VAR_5, VAR_0);
}
