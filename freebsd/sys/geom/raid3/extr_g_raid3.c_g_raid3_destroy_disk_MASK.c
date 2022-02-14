
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid3_softc {int * sc_syncdisk; int sc_lock; } ;
struct g_raid3_disk {int d_state; int * d_consumer; struct g_raid3_softc* d_softc; } ;




 int VAR_0 ;


 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct g_raid3_softc*,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct g_raid3_disk*) ;
 int FUNC_4 (struct g_raid3_disk*) ;
 int FUNC_5 (struct g_raid3_softc*,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static void
FUNC_10(struct g_raid3_disk *VAR_2)
{
 struct g_raid3_softc *VAR_3;

 FUNC_6();
 VAR_3 = VAR_2->d_softc;
 FUNC_9(&VAR_3->sc_lock, VAR_1);

 if (VAR_2->d_state == VAR_0)
  return;
 FUNC_3(VAR_2);
 switch (VAR_2->d_state) {
 case 128:
  if (VAR_3->sc_syncdisk != ((void*)0))
   FUNC_5(VAR_3, 1);

 case 130:
 case 129:
 case 131:
  FUNC_7();
  FUNC_1(VAR_3, VAR_2->d_consumer);
  FUNC_8();
  VAR_2->d_consumer = ((void*)0);
  break;
 default:
  FUNC_0(0 == 1, ("Wrong disk state (%s, %s).",
      FUNC_4(VAR_2),
      FUNC_2(VAR_2->d_state)));
 }
 VAR_2->d_state = VAR_0;
}
