
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid3_disk {struct g_consumer* d_consumer; TYPE_1__* d_softc; } ;
struct g_provider {int name; } ;
struct g_consumer {scalar_t__ index; struct g_raid3_disk* private; } ;
struct TYPE_2__ {int sc_geom; int sc_name; } ;


 int FUNC_0 (int,char*,int ,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct g_consumer*,int,int,int) ;
 int FUNC_3 (struct g_consumer*,struct g_provider*) ;
 int FUNC_4 (struct g_consumer*) ;
 int FUNC_5 (struct g_consumer*) ;
 struct g_consumer* FUNC_6 (int ) ;
 int FUNC_7 (struct g_raid3_disk*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11(struct g_raid3_disk *VAR_0, struct g_provider *VAR_1)
{
 struct g_consumer *VAR_2;
 int VAR_3;

 FUNC_8();
 FUNC_1(VAR_0->d_consumer == ((void*)0),
     ("Disk already connected (device %s).", VAR_0->d_softc->sc_name));

 FUNC_9();
 VAR_2 = FUNC_6(VAR_0->d_softc->sc_geom);
 VAR_3 = FUNC_3(VAR_2, VAR_1);
 if (VAR_3 != 0) {
  FUNC_4(VAR_2);
  FUNC_10();
  return (VAR_3);
 }
 VAR_3 = FUNC_2(VAR_2, 1, 1, 1);
  FUNC_10();
 if (VAR_3 != 0) {
  FUNC_5(VAR_2);
  FUNC_4(VAR_2);
  FUNC_0(0, "Cannot open consumer %s (error=%d).",
      VAR_1->name, VAR_3);
  return (VAR_3);
 }
 VAR_0->d_consumer = VAR_2;
 VAR_0->d_consumer->private = VAR_0;
 VAR_0->d_consumer->index = 0;
 FUNC_0(2, "Disk %s connected.", FUNC_7(VAR_0));
 return (0);
}
