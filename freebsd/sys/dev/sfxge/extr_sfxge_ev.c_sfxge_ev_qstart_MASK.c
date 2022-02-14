
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sfxge_softc {int enp; int ev_moderation; struct sfxge_evq** evq; } ;
struct TYPE_4__ {int esm_base; } ;
struct sfxge_evq {scalar_t__ init_state; int entries; int buf_base_id; int common; int read_ptr; TYPE_1__ mem; } ;
typedef TYPE_1__ efsys_mem_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct sfxge_evq*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct sfxge_evq*) ;
 int FUNC_5 (int ,unsigned int,TYPE_1__*,int ,int ,int ,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,TYPE_1__*,int ) ;
 int VAR_5 ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (char*,int) ;

__attribute__((used)) static int
FUNC_12(struct sfxge_softc *VAR_6, unsigned int VAR_7)
{
 struct sfxge_evq *VAR_8;
 efsys_mem_t *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_8 = VAR_6->evq[VAR_7];
 VAR_9 = &VAR_8->mem;

 FUNC_2(VAR_8->init_state == VAR_2,
     ("evq->init_state != SFXGE_EVQ_INITIALIZED"));


 (void)FUNC_10(VAR_9->esm_base, 0xff, FUNC_1(VAR_8->entries));


 if ((VAR_11 = FUNC_9(VAR_6->enp, VAR_8->buf_base_id, VAR_9,
     FUNC_0(VAR_8->entries))) != 0)
  return (VAR_11);


 if ((VAR_11 = FUNC_5(VAR_6->enp, VAR_7, VAR_9, VAR_8->entries,
     VAR_8->buf_base_id, VAR_6->ev_moderation, VAR_0,
     &VAR_8->common)) != 0)
  goto fail;

 FUNC_3(VAR_8);


 if ((VAR_11 = FUNC_7(VAR_8->common, VAR_8->read_ptr)) != 0)
  goto fail2;

 VAR_8->init_state = VAR_4;

 FUNC_4(VAR_8);


 VAR_10 = 0;
 do {

  FUNC_11("sfxge evq init", VAR_5 / 10);


  if (VAR_8->init_state == VAR_3)
   goto done;

 } while (++VAR_10 < 20);

 VAR_11 = VAR_1;
 goto fail3;

done:
 return (0);

fail3:
 FUNC_3(VAR_8);
 VAR_8->init_state = VAR_2;
fail2:
 FUNC_4(VAR_8);
 FUNC_6(VAR_8->common);
fail:
 FUNC_8(VAR_6->enp, VAR_8->buf_base_id,
     FUNC_0(VAR_8->entries));

 return (VAR_11);
}
