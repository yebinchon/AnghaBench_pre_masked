
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_bde_work {int state; TYPE_1__* bp; int * ksp; TYPE_2__* sp; int length; int error; int data; struct g_bde_softc* softc; } ;
struct g_bde_softc {int dummy; } ;
struct TYPE_4__ {int data; int size; } ;
struct TYPE_3__ {int bio_cmd; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 void* FUNC_1 (struct g_bde_work*,int ) ;
 int FUNC_2 (struct g_bde_softc*,struct g_bde_work*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct g_bde_work*,int ) ;
 int FUNC_5 (int ,char*,struct g_bde_work*) ;
 int FUNC_6 (struct g_bde_softc*) ;

__attribute__((used)) static void
FUNC_7(struct g_bde_work *VAR_3)
{
 struct g_bde_softc *VAR_4;

 FUNC_0(VAR_3 != ((void*)0), ("NULL wp in g_bde_start2"));
 FUNC_0(VAR_3->softc != ((void*)0), ("NULL wp->softc"));
 FUNC_5(VAR_1, "g_bde_start2(%p)", VAR_3);
 VAR_4 = VAR_3->softc;
 switch (VAR_3->bp->bio_cmd) {
 case 129:
  VAR_3->sp = FUNC_1(VAR_3, 0);
  if (VAR_3->sp == ((void*)0)) {
   FUNC_4(VAR_3, VAR_0);
   return;
  }
  VAR_3->sp->size = VAR_3->length;
  VAR_3->sp->data = VAR_3->data;
  if (FUNC_3(VAR_3->sp) != 0) {
   FUNC_4(VAR_3, VAR_0);
   return;
  }
  FUNC_2(VAR_4, VAR_3);
  if (VAR_3->ksp == ((void*)0))
   VAR_3->error = VAR_0;
  break;
 case 130:
  VAR_3->sp = FUNC_1(VAR_3, VAR_3->length);
  if (VAR_3->sp == ((void*)0)) {
   FUNC_4(VAR_3, VAR_0);
   return;
  }
  break;
 case 128:
  VAR_3->sp = FUNC_1(VAR_3, VAR_3->length);
  if (VAR_3->sp == ((void*)0)) {
   FUNC_4(VAR_3, VAR_0);
   return;
  }
  FUNC_2(VAR_4, VAR_3);
  if (VAR_3->ksp == ((void*)0)) {
   FUNC_4(VAR_3, VAR_0);
   return;
  }
  break;
 default:
  FUNC_0(0 == 1,
      ("Wrong bio_cmd %d in g_bde_start2", VAR_3->bp->bio_cmd));
 }

 VAR_3->state = VAR_2;
 FUNC_6(VAR_4);
}
