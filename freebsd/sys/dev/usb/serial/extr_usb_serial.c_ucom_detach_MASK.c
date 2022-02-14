
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucom_super_softc {int sc_flag; int sc_subunits; int sc_tq; int * sc_sysctl_ttyports; int * sc_sysctl_ttyname; } ;
struct ucom_softc {int sc_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct ucom_super_softc*,struct ucom_softc*) ;
 int FUNC_2 (struct ucom_super_softc*) ;
 int FUNC_3 (struct ucom_super_softc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct ucom_super_softc *VAR_2, struct ucom_softc *VAR_3)
{
 int VAR_4;

 if (!(VAR_2->sc_flag & VAR_0))
  return;

 if (VAR_2->sc_sysctl_ttyname != ((void*)0)) {
  FUNC_0(VAR_2->sc_sysctl_ttyname, 1, 0);
  VAR_2->sc_sysctl_ttyname = ((void*)0);
 }

 if (VAR_2->sc_sysctl_ttyports != ((void*)0)) {
  FUNC_0(VAR_2->sc_sysctl_ttyports, 1, 0);
  VAR_2->sc_sysctl_ttyports = ((void*)0);
 }

 FUNC_4(&VAR_2->sc_tq);

 for (VAR_4 = 0; VAR_4 < VAR_2->sc_subunits; VAR_4++) {
  if (VAR_3[VAR_4].sc_flag & VAR_0) {

   FUNC_1(VAR_2, &VAR_3[VAR_4]);


   VAR_3[VAR_4].sc_flag &= ~VAR_0;
  }
 }
 FUNC_5(&VAR_2->sc_tq);

 FUNC_3(VAR_2);

 if (VAR_2->sc_flag & VAR_1)
  FUNC_2(VAR_2);


 VAR_2->sc_flag &= ~VAR_0;
}
