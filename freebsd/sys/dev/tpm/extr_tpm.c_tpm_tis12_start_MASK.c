
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_softc {int sc_stat; int sc_write; int sc_bh; int sc_bt; int sc_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct tpm_softc*,int ) ;
 int FUNC_3 (struct tpm_softc*) ;
 int FUNC_4 (struct tpm_softc*,int,int ,int ) ;

int
FUNC_5(struct tpm_softc *VAR_8, int VAR_9)
{
 int VAR_10;

 if (VAR_9 == VAR_7) {
  VAR_10 = FUNC_4(VAR_8, VAR_5 | VAR_6,
      VAR_1, VAR_8->sc_read);
  return VAR_10;
 }


 if ((VAR_10 = FUNC_2(VAR_8, 0)) != 0)
  return VAR_10;

 VAR_8->sc_stat = FUNC_3(VAR_8);
 if (VAR_8->sc_stat & VAR_4) {




  return 0;
 }






 FUNC_0(VAR_8->sc_bt, VAR_8->sc_bh, VAR_2, VAR_4);
 if ((VAR_10 = FUNC_4(VAR_8, VAR_4, VAR_0,
     VAR_8->sc_write))) {



  return VAR_10;
 }





 return 0;
}
