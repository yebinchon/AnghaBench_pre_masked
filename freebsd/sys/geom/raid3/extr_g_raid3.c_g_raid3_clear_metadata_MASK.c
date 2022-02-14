
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid3_disk {TYPE_1__* d_softc; } ;
struct TYPE_2__ {int sc_lock; } ;


 int FUNC_0 (int,char*,int ,...) ;
 int VAR_0 ;
 int FUNC_1 (struct g_raid3_disk*) ;
 int FUNC_2 (struct g_raid3_disk*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;

int
FUNC_5(struct g_raid3_disk *VAR_1)
{
 int VAR_2;

 FUNC_3();
 FUNC_4(&VAR_1->d_softc->sc_lock, VAR_0);

 VAR_2 = FUNC_2(VAR_1, ((void*)0));
 if (VAR_2 == 0) {
  FUNC_0(2, "Metadata on %s cleared.",
      FUNC_1(VAR_1));
 } else {
  FUNC_0(0,
      "Cannot clear metadata on disk %s (error=%d).",
      FUNC_1(VAR_1), VAR_2);
 }
 return (VAR_2);
}
