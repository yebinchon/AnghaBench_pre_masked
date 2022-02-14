
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_mirror_softc {struct g_mirror_disk* sc_hint; int sc_lock; } ;
struct g_mirror_disk {int d_state; int d_consumer; struct g_mirror_softc* d_softc; } ;






 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct g_mirror_disk*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct g_mirror_disk*,int ) ;
 int FUNC_3 (struct g_mirror_softc*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct g_mirror_disk*) ;
 int FUNC_6 (struct g_mirror_disk*) ;
 int FUNC_7 (struct g_mirror_disk*,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static void
FUNC_12(struct g_mirror_disk *VAR_3)
{
 struct g_mirror_softc *VAR_4;

 FUNC_8();
 VAR_4 = VAR_3->d_softc;
 FUNC_11(&VAR_4->sc_lock, VAR_1);

 FUNC_9();
 FUNC_1(VAR_3, VAR_2);
 FUNC_10();
 FUNC_5(VAR_3);
 if (VAR_4->sc_hint == VAR_3)
  VAR_4->sc_hint = ((void*)0);
 switch (VAR_3->d_state) {
 case 128:
  FUNC_7(VAR_3, 1);

 case 130:
 case 129:
 case 131:
  FUNC_9();
  FUNC_3(VAR_4, VAR_3->d_consumer);
  FUNC_10();
  FUNC_2(VAR_3, VAR_0);
  break;
 default:
  FUNC_0(0 == 1, ("Wrong disk state (%s, %s).",
      FUNC_6(VAR_3),
      FUNC_4(VAR_3->d_state)));
 }
}
