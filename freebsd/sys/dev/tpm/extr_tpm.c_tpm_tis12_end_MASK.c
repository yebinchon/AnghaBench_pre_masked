
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_softc {int sc_stat; int sc_bh; int sc_bt; int sc_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (char*,int,int ) ;
 void* FUNC_2 (struct tpm_softc*) ;
 int FUNC_3 (struct tpm_softc*,int ,int ,int ) ;

int
FUNC_4(struct tpm_softc *VAR_12, int VAR_13, int VAR_14)
{
 int VAR_15 = 0;

 if (VAR_13 == VAR_11) {
  if ((VAR_15 = FUNC_3(VAR_12, VAR_10, VAR_3,
      VAR_12->sc_read)))
   return VAR_15;


  VAR_12->sc_stat = FUNC_2(VAR_12);
  if (!VAR_14 && ((VAR_12->sc_stat & VAR_7) == VAR_7)) {




   VAR_15 = VAR_0;
  }

  FUNC_0(VAR_12->sc_bt, VAR_12->sc_bh, VAR_4,
      VAR_6);


  FUNC_0(VAR_12->sc_bt, VAR_12->sc_bh,VAR_1,
      VAR_2);
 } else {

  VAR_12->sc_stat = FUNC_2(VAR_12);
  if (!VAR_14 && (VAR_12->sc_stat & VAR_8)) {




   VAR_15 = VAR_0;
  }

  FUNC_0(VAR_12->sc_bt, VAR_12->sc_bh, VAR_4,
      VAR_14 ? VAR_6 : VAR_9);
 }

 return VAR_15;
}
