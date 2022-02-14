
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct scb {TYPE_2__* hscb; } ;
struct ahd_softc {TYPE_1__* next_queued_hscb; int qinfifonext; int * qinfifo; } ;
struct TYPE_4__ {int next_hscb_busaddr; int hscb_busaddr; } ;
struct TYPE_3__ {int hscb_busaddr; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct scb*) ;
 int FUNC_2 (struct ahd_softc*,int ,int ) ;
 int FUNC_3 (struct ahd_softc*,struct scb*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct ahd_softc *VAR_3, struct scb *VAR_4,
      struct scb *VAR_5)
{
 if (VAR_4 == ((void*)0)) {
  uint32_t VAR_6;

  VAR_6 = FUNC_4(VAR_5->hscb->hscb_busaddr);
  FUNC_2(VAR_3, VAR_2, VAR_6);
 } else {
  VAR_4->hscb->next_hscb_busaddr = VAR_5->hscb->hscb_busaddr;
  FUNC_3(VAR_3, VAR_4,
        VAR_0|VAR_1);
 }
 VAR_3->qinfifo[FUNC_0(VAR_3->qinfifonext)] = FUNC_1(VAR_5);
 VAR_3->qinfifonext++;
 VAR_5->hscb->next_hscb_busaddr = VAR_3->next_queued_hscb->hscb_busaddr;
 FUNC_3(VAR_3, VAR_5, VAR_0|VAR_1);
}
