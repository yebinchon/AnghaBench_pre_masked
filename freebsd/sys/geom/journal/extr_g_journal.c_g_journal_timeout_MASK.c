
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_journal_softc {TYPE_1__* sc_geom; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct g_journal_softc*,int ,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2)
{
 struct g_journal_softc *VAR_3;

 VAR_3 = VAR_2;
 FUNC_0(0, "Timeout. Journal %s cannot be completed.",
     VAR_3->sc_geom->name);
 FUNC_1(VAR_1, VAR_3, VAR_0, ((void*)0));
}
