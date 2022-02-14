
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_provider {int name; } ;
struct g_mirror_disk {struct g_consumer* d_consumer; TYPE_1__* d_softc; } ;
struct g_consumer {scalar_t__ index; struct g_mirror_disk* private; int flags; } ;
struct TYPE_2__ {int sc_geom; int sc_name; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct g_consumer*,int,int,int) ;
 int FUNC_3 (struct g_consumer*,struct g_provider*) ;
 int FUNC_4 (struct g_consumer*) ;
 int FUNC_5 (struct g_consumer*) ;
 int FUNC_6 (struct g_mirror_disk*) ;
 struct g_consumer* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11(struct g_mirror_disk *VAR_1, struct g_provider *VAR_2)
{
 struct g_consumer *VAR_3;
 int VAR_4;

 FUNC_8();
 FUNC_1(VAR_1->d_consumer == ((void*)0),
     ("Disk already connected (device %s).", VAR_1->d_softc->sc_name));

 FUNC_9();
 VAR_3 = FUNC_7(VAR_1->d_softc->sc_geom);
 VAR_3->flags |= VAR_0;
 VAR_4 = FUNC_3(VAR_3, VAR_2);
 if (VAR_4 != 0) {
  FUNC_4(VAR_3);
  FUNC_10();
  return (VAR_4);
 }
 VAR_4 = FUNC_2(VAR_3, 1, 1, 1);
 if (VAR_4 != 0) {
  FUNC_5(VAR_3);
  FUNC_4(VAR_3);
  FUNC_10();
  FUNC_0(0, "Cannot open consumer %s (error=%d).",
      VAR_2->name, VAR_4);
  return (VAR_4);
 }
 FUNC_10();
 VAR_1->d_consumer = VAR_3;
 VAR_1->d_consumer->private = VAR_1;
 VAR_1->d_consumer->index = 0;

 FUNC_0(2, "Disk %s connected.", FUNC_6(VAR_1));
 return (0);
}
