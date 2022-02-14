
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid3_disk {TYPE_1__* d_softc; } ;
struct g_consumer {struct g_raid3_disk* private; } ;
struct TYPE_2__ {int sc_bump_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct g_raid3_disk*,int ,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct g_consumer *VAR_3)
{
 struct g_raid3_disk *VAR_4;

 FUNC_1();

 VAR_4 = VAR_3->private;
 if (VAR_4 == ((void*)0))
  return;
 VAR_4->d_softc->sc_bump_id = VAR_0;
 FUNC_0(VAR_4, VAR_1,
     VAR_2);
}
