
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_journal_softc {int sc_name; } ;
struct g_consumer {TYPE_2__* provider; TYPE_1__* geom; } ;
typedef int name ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {struct g_journal_softc* softc; } ;


 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (struct g_journal_softc*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct g_consumer *VAR_0)
{
 struct g_journal_softc *VAR_1;
 char VAR_2[256];
 int VAR_3;

 FUNC_2();
 VAR_1 = VAR_0->geom->softc;
 FUNC_3(VAR_2, VAR_0->provider->name, sizeof(VAR_2));
 FUNC_0(0, "Lost provider %s.", VAR_2);
 if (VAR_1 == ((void*)0))
  return;
 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 == 0)
  FUNC_0(0, "Journal %s destroyed.", VAR_2);
 else {
  FUNC_0(0, "Cannot destroy journal %s (error=%d). "
      "Destroy it manually after last close.", VAR_1->sc_name,
      VAR_3);
 }
}
