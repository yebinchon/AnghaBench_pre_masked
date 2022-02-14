
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_sdcard_softc {int as_task; int as_taskqueue; int as_unit; int as_state; int * as_currentbio; int as_bioq; int * as_disk; } ;


 int FUNC_0 (struct altera_sdcard_softc*) ;
 int FUNC_1 (struct altera_sdcard_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *,int ,int (*) (struct altera_sdcard_softc*,int),struct altera_sdcard_softc*) ;
 int FUNC_3 (struct altera_sdcard_softc*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int ,int *) ;
 int FUNC_6 (int *,int,int ,char*,int ) ;
 int VAR_3 ;

void
FUNC_7(struct altera_sdcard_softc *VAR_4)
{

 FUNC_1(VAR_4);
 FUNC_0(VAR_4);
 VAR_4->as_disk = ((void*)0);
 FUNC_4(&VAR_4->as_bioq);
 VAR_4->as_currentbio = ((void*)0);
 VAR_4->as_state = VAR_0;
 VAR_4->as_taskqueue = FUNC_5("altera_sdcardc taskq", VAR_1,
     VAR_3, &VAR_4->as_taskqueue);
 FUNC_6(&VAR_4->as_taskqueue, 1, VAR_2,
     "altera_sdcardc%d taskqueue", VAR_4->as_unit);
 FUNC_2(VAR_4->as_taskqueue, &VAR_4->as_task, 0,
     FUNC_3, VAR_4);






 FUNC_3(VAR_4, 1);
}
