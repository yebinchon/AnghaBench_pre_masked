
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct tpm_softc {int sc_stat; int sc_bh; int sc_bt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct tpm_softc*) ;
 int FUNC_3 (struct tpm_softc*,int ) ;
 int FUNC_4 (struct tpm_softc*) ;
 int FUNC_5 (struct tpm_softc*,int ,int ,struct tpm_softc*) ;

int
FUNC_6(struct tpm_softc *VAR_6, void *VAR_7, int VAR_8)
{
 u_int8_t *VAR_9 = VAR_7;
 size_t VAR_10;
 int VAR_11, VAR_12;





 if ((VAR_11 = FUNC_3(VAR_6, 0)) != 0)
  return VAR_11;

 VAR_10 = 0;
 while (VAR_10 < VAR_8 - 1) {
  for (VAR_12 = FUNC_2(VAR_6); VAR_12 > 0 && VAR_10 < VAR_8 - 1; VAR_12--) {
   FUNC_0(VAR_6->sc_bt, VAR_6->sc_bh, VAR_1, *VAR_9++);
   VAR_10++;
  }
  if ((VAR_11 = FUNC_5(VAR_6, VAR_5, VAR_2, VAR_6))) {



   return VAR_11;
  }
  VAR_6->sc_stat = FUNC_4(VAR_6);
  if (!(VAR_6->sc_stat & VAR_4)) {




   return VAR_0;
  }
 }

 FUNC_0(VAR_6->sc_bt, VAR_6->sc_bh, VAR_1, *VAR_9++);
 VAR_10++;

 if ((VAR_11 = FUNC_5(VAR_6, VAR_5, VAR_2, VAR_6))) {



  return VAR_11;
 }
 if ((VAR_6->sc_stat & VAR_4) != 0) {




  return VAR_0;
 }





 return 0;
}
