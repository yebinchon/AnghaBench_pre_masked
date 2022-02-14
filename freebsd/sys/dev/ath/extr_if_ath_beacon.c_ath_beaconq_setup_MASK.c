
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ath_softc {scalar_t__ sc_isedma; struct ath_hal* sc_ah; } ;
struct ath_hal {int dummy; } ;
typedef int qi ;
struct TYPE_4__ {int tqi_qflags; void* tqi_cwmax; void* tqi_cwmin; void* tqi_aifs; } ;
typedef TYPE_1__ HAL_TXQ_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath_hal*,int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

int
FUNC_2(struct ath_softc *VAR_5)
{
 struct ath_hal *VAR_6 = VAR_5->sc_ah;
 HAL_TXQ_INFO VAR_7;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.tqi_aifs = VAR_3;
 VAR_7.tqi_cwmin = VAR_3;
 VAR_7.tqi_cwmax = VAR_3;

 VAR_7.tqi_qflags = VAR_0;
 if (VAR_5->sc_isedma)
  VAR_7.tqi_qflags |= VAR_2 |
      VAR_1;

 return FUNC_0(VAR_6, VAR_4, &VAR_7);
}
