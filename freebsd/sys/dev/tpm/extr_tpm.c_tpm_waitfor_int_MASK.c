
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
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (char*,int,int,...) ;
 int FUNC_3 (struct tpm_softc*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (void*,int,char*,int) ;

int
FUNC_6(struct tpm_softc *VAR_5, u_int8_t VAR_6, int VAR_7, void *VAR_8,
    int VAR_9)
{
 int VAR_10, VAR_11;


 VAR_5->sc_stat = FUNC_3(VAR_5);
 if ((VAR_5->sc_stat & VAR_6) == VAR_6)
  return 0;






 FUNC_1(VAR_5->sc_bt, VAR_5->sc_bh, VAR_3,
     FUNC_0(VAR_5->sc_bt, VAR_5->sc_bh, VAR_3) |
     VAR_9);
 FUNC_1(VAR_5->sc_bt, VAR_5->sc_bh, VAR_3,
     FUNC_0(VAR_5->sc_bt, VAR_5->sc_bh, VAR_3) |
     VAR_2);





 VAR_5->sc_stat = FUNC_3(VAR_5);
 if ((VAR_5->sc_stat & VAR_6) == VAR_6) {
  VAR_10 = 0;
  goto out;
 }

 VAR_11 = FUNC_4(VAR_7);
 VAR_10 = FUNC_5(VAR_8, VAR_1 | VAR_0, "tpm_intr", VAR_11);

 VAR_5->sc_stat = FUNC_3(VAR_5);




 if ((VAR_5->sc_stat & VAR_6) == VAR_6)
  VAR_10 = 0;


out: FUNC_1(VAR_5->sc_bt, VAR_5->sc_bh, VAR_3,
     FUNC_0(VAR_5->sc_bt, VAR_5->sc_bh, VAR_3) &
     ~VAR_2);
 FUNC_1(VAR_5->sc_bt, VAR_5->sc_bh, VAR_3,
     FUNC_0(VAR_5->sc_bt, VAR_5->sc_bh, VAR_3) &
     ~VAR_9);

 return VAR_10;
}
