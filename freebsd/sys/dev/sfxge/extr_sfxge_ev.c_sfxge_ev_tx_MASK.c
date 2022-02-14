
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sfxge_txq {scalar_t__ evq_index; scalar_t__ init_state; int ptr_mask; int pending; int entries; scalar_t__ completed; struct sfxge_txq* next; } ;
struct sfxge_evq {scalar_t__ index; scalar_t__ tx_done; struct sfxge_txq** txqs; } ;
typedef int boolean_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sfxge_evq*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 struct sfxge_txq* FUNC_3 (struct sfxge_evq*,int) ;
 int FUNC_4 (struct sfxge_txq*,struct sfxge_evq*) ;

__attribute__((used)) static boolean_t
FUNC_5(void *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 struct sfxge_evq *VAR_6;
 struct sfxge_txq *VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;

 VAR_6 = (struct sfxge_evq *)VAR_3;
 FUNC_1(VAR_6);

 VAR_7 = FUNC_3(VAR_6, VAR_4);

 FUNC_0(VAR_7 != ((void*)0), ("txq == NULL"));
 FUNC_0(VAR_6->index == VAR_7->evq_index,
     ("evq->index != txq->evq_index"));

 if (FUNC_2(VAR_7->init_state != VAR_1))
  goto done;

 VAR_8 = (VAR_5 + 1) & VAR_7->ptr_mask;
 VAR_5 = VAR_7->pending & VAR_7->ptr_mask;

 VAR_9 = (VAR_8 >= VAR_5) ? (VAR_8 - VAR_5) : (VAR_7->entries - VAR_5 + VAR_8);
 VAR_7->pending += VAR_9;

 VAR_6->tx_done++;

 if (VAR_7->next == ((void*)0) &&
     VAR_6->txqs != &(VAR_7->next)) {
  *(VAR_6->txqs) = VAR_7;
  VAR_6->txqs = &(VAR_7->next);
 }

 if (VAR_7->pending - VAR_7->completed >= VAR_2)
  FUNC_4(VAR_7, VAR_6);

done:
 return (VAR_6->tx_done >= VAR_0);
}
