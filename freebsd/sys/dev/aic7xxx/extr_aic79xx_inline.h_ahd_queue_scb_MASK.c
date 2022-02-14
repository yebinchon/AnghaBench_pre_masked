
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_int ;
struct scb {scalar_t__ sg_count; TYPE_1__* hscb; } ;
struct ahd_softc {int* qinfifo; int qinfifonext; } ;
struct TYPE_2__ {int scsiid; int hscb_busaddr; int datacnt; int dataptr; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct scb*) ;
 int VAR_3 ;
 char* FUNC_3 (struct ahd_softc*) ;
 int FUNC_4 (struct ahd_softc*,int ) ;
 int FUNC_5 (struct ahd_softc*,struct scb*) ;
 int FUNC_6 (struct ahd_softc*,struct scb*) ;
 int FUNC_7 (struct ahd_softc*,struct scb*) ;
 int FUNC_8 (struct ahd_softc*,struct scb*) ;
 int FUNC_9 (struct ahd_softc*,struct scb*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (char*,char*,int,int,int,int,int,int) ;

__attribute__((used)) static __inline void
FUNC_14(struct ahd_softc *VAR_4, struct scb *VAR_5)
{
 FUNC_8(VAR_4, VAR_5);

 if (FUNC_1(FUNC_2(VAR_5)))
  FUNC_12("Attempt to queue invalid SCB tag %x\n",
        FUNC_2(VAR_5));




 VAR_4->qinfifo[FUNC_0(VAR_4->qinfifonext)] = FUNC_2(VAR_5);
 VAR_4->qinfifonext++;

 if (VAR_5->sg_count != 0)
  FUNC_5(VAR_4, VAR_5);
 else
  FUNC_6(VAR_4, VAR_5);
 FUNC_7(VAR_4, VAR_5);





 FUNC_9(VAR_4, VAR_5, VAR_1|VAR_2);
 FUNC_4(VAR_4, VAR_4->qinfifonext);
}
