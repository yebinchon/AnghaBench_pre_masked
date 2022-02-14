
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncr53c9x_softc {int sc_ntarg; struct ncr53c9x_linfo* sc_omess; scalar_t__ sc_omess_self; struct ncr53c9x_linfo* sc_imess; scalar_t__ sc_imess_self; struct ncr53c9x_linfo* sc_tinfo; struct ncr53c9x_linfo* ecb_array; int sc_sim; int sc_path; int sc_watchdog; } ;
struct ncr53c9x_linfo {int luns; } ;


 int VAR_0 ;
 struct ncr53c9x_linfo* FUNC_0 (int *) ;
 struct ncr53c9x_linfo* FUNC_1 (struct ncr53c9x_linfo*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct ncr53c9x_softc*) ;
 int FUNC_3 (struct ncr53c9x_softc*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ncr53c9x_linfo*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (struct ncr53c9x_softc*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ,int ) ;

int
FUNC_12(struct ncr53c9x_softc *VAR_5)
{
 struct ncr53c9x_linfo *VAR_6, *VAR_7;
 int VAR_8;

 FUNC_4(&VAR_5->sc_watchdog);

 FUNC_2(VAR_5);

 if (VAR_5->sc_tinfo) {

  FUNC_8(VAR_5, VAR_0);


  for (VAR_8 = 0; VAR_8 < VAR_5->sc_ntarg; VAR_8++) {
   for (VAR_6 = FUNC_0(&VAR_5->sc_tinfo[VAR_8].luns); VAR_6;
       VAR_6 = VAR_7) {
    VAR_7 = FUNC_1(VAR_6, VAR_3);
    FUNC_7(VAR_6, VAR_1);
   }
  }
 }

 FUNC_11(0, VAR_4, VAR_5->sc_sim, VAR_5->sc_path);
 FUNC_10(VAR_5->sc_path);
 FUNC_9(FUNC_6(VAR_5->sc_sim));
 FUNC_5(VAR_5->sc_sim, VAR_2);

 FUNC_3(VAR_5);

 FUNC_7(VAR_5->ecb_array, VAR_1);
 FUNC_7(VAR_5->sc_tinfo, VAR_1);
 if (VAR_5->sc_imess_self)
  FUNC_7(VAR_5->sc_imess, VAR_1);
 if (VAR_5->sc_omess_self)
  FUNC_7(VAR_5->sc_omess, VAR_1);

 return (0);
}
