
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {scalar_t__ acw; int name; struct g_mirror_softc* private; } ;
struct g_mirror_softc {int sc_flags; scalar_t__ sc_provider_open; int sc_lock; int sc_disks; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct g_mirror_softc*,int ) ;
 int FUNC_4 (int ,struct g_mirror_softc*,int ,struct g_mirror_softc*,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct g_provider *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 struct g_mirror_softc *VAR_9;
 int VAR_10 = 0;

 FUNC_5();
 FUNC_0(2, "Access request for %s: r%dw%de%d.", VAR_5->name, VAR_6,
     VAR_7, VAR_8);

 VAR_9 = VAR_5->private;
 FUNC_1(VAR_9 != ((void*)0), ("NULL softc (provider=%s).", VAR_5->name));

 FUNC_7();
 FUNC_8(&VAR_9->sc_lock);
 if ((VAR_9->sc_flags & VAR_2) != 0 ||
     (VAR_9->sc_flags & VAR_1) != 0 ||
     FUNC_2(&VAR_9->sc_disks)) {
  if (VAR_6 > 0 || VAR_7 > 0 || VAR_8 > 0)
   VAR_10 = VAR_0;
  goto end;
 }
 VAR_9->sc_provider_open += VAR_6 + VAR_7 + VAR_8;
 if (VAR_5->acw + VAR_7 == 0)
  FUNC_3(VAR_9, 0);
 if ((VAR_9->sc_flags & VAR_1) != 0 &&
     VAR_9->sc_provider_open == 0)
  FUNC_4(VAR_4, VAR_9, VAR_3, VAR_9, ((void*)0));
end:
 FUNC_9(&VAR_9->sc_lock);
 FUNC_6();
 return (VAR_10);
}
