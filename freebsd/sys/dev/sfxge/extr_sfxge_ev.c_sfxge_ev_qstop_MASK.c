
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {int enp; struct sfxge_evq** evq; } ;
struct sfxge_evq {scalar_t__ init_state; int entries; int buf_base_id; int common; int stats; int exception; scalar_t__ read_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct sfxge_evq*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct sfxge_evq*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct sfxge_softc *VAR_3, unsigned int VAR_4)
{
 struct sfxge_evq *VAR_5;

 VAR_5 = VAR_3->evq[VAR_4];

 FUNC_1(VAR_5->init_state == VAR_2,
     ("evq->init_state != SFXGE_EVQ_STARTED"));

 FUNC_2(VAR_5);
 VAR_5->init_state = VAR_1;
 VAR_5->read_ptr = 0;
 VAR_5->exception = VAR_0;






 FUNC_4(VAR_5->common);
 FUNC_6(VAR_3->enp, VAR_5->buf_base_id,
     FUNC_0(VAR_5->entries));
 FUNC_3(VAR_5);
}
