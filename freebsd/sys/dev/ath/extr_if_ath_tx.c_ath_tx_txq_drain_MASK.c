
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_txq {int axq_tidq; } ;
struct ath_tid {int an; } ;
struct ath_softc {int dummy; } ;
struct ath_buf {int dummy; } ;
typedef int ath_bufhead ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct ath_buf*,int ) ;
 int FUNC_6 (struct ath_softc*,struct ath_buf*,int ) ;
 int FUNC_7 (struct ath_softc*,int ,struct ath_tid*,int *) ;
 int FUNC_8 (struct ath_softc*,struct ath_tid*) ;
 int VAR_0 ;

void
FUNC_9(struct ath_softc *VAR_1, struct ath_txq *VAR_2)
{
 struct ath_tid *VAR_3;
 ath_bufhead VAR_4;
 struct ath_buf *VAR_5;

 FUNC_4(&VAR_4);
 FUNC_0(VAR_1);





 while (! FUNC_2(&VAR_2->axq_tidq)) {
  VAR_3 = FUNC_3(&VAR_2->axq_tidq);
  FUNC_7(VAR_1, VAR_3->an, VAR_3, &VAR_4);
  FUNC_8(VAR_1, VAR_3);
 }

 FUNC_1(VAR_1);

 while ((VAR_5 = FUNC_3(&VAR_4)) != ((void*)0)) {
  FUNC_5(&VAR_4, VAR_5, VAR_0);
  FUNC_6(VAR_1, VAR_5, 0);
 }
}
