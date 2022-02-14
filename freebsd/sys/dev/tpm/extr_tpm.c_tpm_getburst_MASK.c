
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_softc {int sc_bh; int sc_bt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tpm_softc*,int,char*,int) ;

int
FUNC_4(struct tpm_softc *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_7 = FUNC_2(VAR_3);

 VAR_6 = 0;
 while (VAR_6 == 0 && VAR_7--) {





  VAR_6 = FUNC_0(VAR_5->sc_bt, VAR_5->sc_bh, VAR_4 + 1);
  VAR_6 |= FUNC_0(VAR_5->sc_bt, VAR_5->sc_bh, VAR_4 + 2)
      << 8;



  if (VAR_6)
   return VAR_6;

  VAR_8 = FUNC_3(VAR_5, VAR_2 | VAR_1, "tpm_getburst", 1);
  if (VAR_8 && VAR_8 != VAR_0) {
   return 0;
  }
 }

 return 0;
}
