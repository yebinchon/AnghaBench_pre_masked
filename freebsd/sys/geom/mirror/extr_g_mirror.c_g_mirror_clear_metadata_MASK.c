
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_mirror_disk {TYPE_1__* d_softc; } ;
struct TYPE_2__ {scalar_t__ sc_type; int sc_lock; } ;


 int FUNC_0 (int,char*,int ,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct g_mirror_disk*) ;
 int FUNC_2 (struct g_mirror_disk*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct g_mirror_disk *VAR_2)
{
 int VAR_3;

 FUNC_3();
 FUNC_4(&VAR_2->d_softc->sc_lock, VAR_1);

 if (VAR_2->d_softc->sc_type != VAR_0)
  return (0);
 VAR_3 = FUNC_2(VAR_2, ((void*)0));
 if (VAR_3 == 0) {
  FUNC_0(2, "Metadata on %s cleared.",
      FUNC_1(VAR_2));
 } else {
  FUNC_0(0,
      "Cannot clear metadata on disk %s (error=%d).",
      FUNC_1(VAR_2), VAR_3);
 }
 return (VAR_3);
}
