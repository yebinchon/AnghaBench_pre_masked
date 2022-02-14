
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {int txq_entries; struct sfxge_evq** evq; int dev; scalar_t__ rxq_entries; } ;
struct sfxge_evq {unsigned int index; int init_state; int buf_base_id; void* entries; int txq; int * txqs; int mem; struct sfxge_softc* sc; } ;
typedef int efsys_mem_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (struct sfxge_evq*) ;
 int FUNC_5 (struct sfxge_evq*,int ,unsigned int) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sfxge_evq*,int ) ;
 struct sfxge_evq* FUNC_8 (int,int ,int) ;
 int FUNC_9 (struct sfxge_softc*,int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct sfxge_evq*) ;
 int FUNC_12 (struct sfxge_softc*,int ,int *) ;

__attribute__((used)) static int
FUNC_13(struct sfxge_softc *VAR_6, unsigned int VAR_7)
{
 struct sfxge_evq *VAR_8;
 efsys_mem_t *VAR_9;
 int VAR_10;

 FUNC_2(VAR_7 < VAR_5, ("index >= SFXGE_RX_SCALE_MAX"));

 VAR_8 = FUNC_8(sizeof(struct sfxge_evq), VAR_0, VAR_2 | VAR_1);
 VAR_8->sc = VAR_6;
 VAR_8->index = VAR_7;
 VAR_6->evq[VAR_7] = VAR_8;
 VAR_9 = &VAR_8->mem;






 if (VAR_7 == 0)
  VAR_8->entries =
   FUNC_3(VAR_6->rxq_entries +
        3 * VAR_6->txq_entries +
        128);
 else
  VAR_8->entries =
   FUNC_3(VAR_6->rxq_entries +
        VAR_6->txq_entries +
        128);


 VAR_8->txqs = &VAR_8->txq;


 if ((VAR_10 = FUNC_9(VAR_6, FUNC_1(VAR_8->entries), VAR_9)) != 0)
  return (VAR_10);


 FUNC_12(VAR_6, FUNC_0(VAR_8->entries),
     &VAR_8->buf_base_id);

 FUNC_5(VAR_8, FUNC_6(VAR_6->dev), VAR_7);

 VAR_8->init_state = VAR_3;







 return (0);
}
