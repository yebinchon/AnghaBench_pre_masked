
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid3_softc {int sc_flags; int sc_ndisks; int sc_lock; } ;
struct g_provider {int acr; int acw; int ace; int name; TYPE_1__* geom; } ;
struct TYPE_2__ {struct g_raid3_softc* softc; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int FUNC_2 (int ,struct g_raid3_softc*,int ,struct g_raid3_softc*,int *) ;
 int VAR_5 ;
 int FUNC_3 (struct g_raid3_softc*,int) ;
 int FUNC_4 (struct g_raid3_softc*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct g_provider *VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 struct g_raid3_softc *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14 = 0;

 FUNC_5();
 FUNC_0(2, "Access request for %s: r%dw%de%d.", VAR_6->name, VAR_7,
     VAR_8, VAR_9);

 VAR_10 = VAR_6->geom->softc;
 if (VAR_10 == ((void*)0) && VAR_7 <= 0 && VAR_8 <= 0 && VAR_9 <= 0)
  return (0);
 FUNC_1(VAR_10 != ((void*)0), ("NULL softc (provider=%s).", VAR_6->name));

 VAR_11 = VAR_6->acr + VAR_7;
 VAR_12 = VAR_6->acw + VAR_8;
 VAR_13 = VAR_6->ace + VAR_9;

 FUNC_7();
 FUNC_8(&VAR_10->sc_lock);
 if ((VAR_10->sc_flags & VAR_1) != 0 ||
     FUNC_4(VAR_10, VAR_3) < VAR_10->sc_ndisks - 1) {
  if (VAR_7 > 0 || VAR_8 > 0 || VAR_9 > 0)
   VAR_14 = VAR_0;
  goto end;
 }
 if (VAR_12 == 0)
  FUNC_3(VAR_10, VAR_12);
 if ((VAR_10->sc_flags & VAR_2) != 0) {
  if (VAR_7 > 0 || VAR_8 > 0 || VAR_9 > 0) {
   VAR_14 = VAR_0;
   goto end;
  }
  if (VAR_11 == 0 && VAR_12 == 0 && VAR_13 == 0) {
   FUNC_2(VAR_5, VAR_10, VAR_4,
       VAR_10, ((void*)0));
  }
 }
end:
 FUNC_9(&VAR_10->sc_lock);
 FUNC_6();
 return (VAR_14);
}
