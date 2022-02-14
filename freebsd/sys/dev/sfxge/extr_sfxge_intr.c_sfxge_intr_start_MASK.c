
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int esm_base; } ;
struct sfxge_intr {scalar_t__ state; int type; TYPE_1__ status; } ;
struct sfxge_softc {int enp; struct sfxge_intr intr; } ;
typedef TYPE_1__ efsys_mem_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct sfxge_softc*) ;

int
FUNC_6(struct sfxge_softc *VAR_3)
{
 struct sfxge_intr *VAR_4;
 efsys_mem_t *VAR_5;
 int VAR_6;

 VAR_4 = &VAR_3->intr;
 VAR_5 = &VAR_4->status;

 FUNC_0(VAR_4->state == VAR_1,
     ("Interrupts not initialized"));


 (void)FUNC_4(VAR_5->esm_base, 0, VAR_0);


 (void)FUNC_3(VAR_3->enp, VAR_4->type, VAR_5);


 if ((VAR_6 = FUNC_5(VAR_3)) != 0)
  goto fail;

 VAR_4->state = VAR_2;


 FUNC_1(VAR_3->enp);

 return (0);

fail:

 FUNC_2(VAR_3->enp);

 VAR_4->state = VAR_1;

 return (VAR_6);
}
