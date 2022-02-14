
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_provider {int acr; int acw; int ace; TYPE_1__* geom; int name; } ;
struct g_journal_softc {int sc_flags; int sc_name; } ;
struct TYPE_2__ {struct g_journal_softc* softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ,...) ;
 int FUNC_1 (struct g_journal_softc*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(struct g_provider *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct g_journal_softc *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 FUNC_2();
 FUNC_0(2, "Access request for %s: r%dw%de%d.", VAR_3->name,
     VAR_4, VAR_5, VAR_6);

 VAR_8 = VAR_3->acr + VAR_4;
 VAR_9 = VAR_3->acw + VAR_5;
 VAR_10 = VAR_3->ace + VAR_6;

 VAR_7 = VAR_3->geom->softc;
 if (VAR_7 == ((void*)0) || (VAR_7->sc_flags & VAR_2)) {
  if (VAR_4 <= 0 && VAR_5 <= 0 && VAR_6 <= 0)
   return (0);
  else
   return (VAR_0);
 }
 if (VAR_3->acw == 0 && VAR_9 > 0) {
  FUNC_0(1, "Marking %s as dirty.", VAR_7->sc_name);
  VAR_7->sc_flags &= ~VAR_1;
  FUNC_4();
  FUNC_1(VAR_7);
  FUNC_3();
 }






 return (0);
}
