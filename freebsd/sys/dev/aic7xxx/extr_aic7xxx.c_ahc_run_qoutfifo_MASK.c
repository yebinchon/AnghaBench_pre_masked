
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t u_int ;
struct scb {int dummy; } ;
struct ahc_softc {scalar_t__* qoutfifo; size_t qoutfifonext; int shared_data_dmamap; int shared_data_dmat; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ahc_softc*,struct scb*) ;
 struct scb* FUNC_1 (struct ahc_softc*,size_t) ;
 char* FUNC_2 (struct ahc_softc*) ;
 int FUNC_3 (struct ahc_softc*,int ) ;
 int FUNC_4 (struct ahc_softc*,struct scb*) ;
 int FUNC_5 (struct ahc_softc*,int ,int ,size_t,int,int ) ;
 int FUNC_6 (char*,char*,size_t,int) ;

void
FUNC_7(struct ahc_softc *VAR_3)
{
 struct scb *VAR_4;
 u_int VAR_5;

 FUNC_3(VAR_3, VAR_0);
 while (VAR_3->qoutfifo[VAR_3->qoutfifonext] != VAR_2) {

  VAR_5 = VAR_3->qoutfifo[VAR_3->qoutfifonext];
  if ((VAR_3->qoutfifonext & 0x03) == 0x03) {
   u_int VAR_6;
   VAR_6 = VAR_3->qoutfifonext & ~0x3;
   *((uint32_t *)(&VAR_3->qoutfifo[VAR_6])) = 0xFFFFFFFFUL;
   FUNC_5(VAR_3, VAR_3->shared_data_dmat,
     VAR_3->shared_data_dmamap,
               VAR_6, 4,
     VAR_1);
  }
  VAR_3->qoutfifonext++;

  VAR_4 = FUNC_1(VAR_3, VAR_5);
  if (VAR_4 == ((void*)0)) {
   FUNC_6("%s: WARNING no command for scb %d "
          "(cmdcmplt)\nQOUTPOS = %d\n",
          FUNC_2(VAR_3), VAR_5,
          (VAR_3->qoutfifonext - 1) & 0xFF);
   continue;
  }





  FUNC_4(VAR_3, VAR_4);
  FUNC_0(VAR_3, VAR_4);
 }
}
