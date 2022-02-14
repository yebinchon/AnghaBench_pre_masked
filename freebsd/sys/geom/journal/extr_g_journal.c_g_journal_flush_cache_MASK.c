
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_journal_softc {int sc_bio_flush; TYPE_2__* sc_dconsumer; TYPE_2__* sc_jconsumer; } ;
struct bintime {int dummy; } ;
struct TYPE_4__ {TYPE_1__* provider; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (int,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,struct bintime*) ;
 int FUNC_2 (int,struct bintime*,char*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(struct g_journal_softc *VAR_2)
{
 struct bintime VAR_3;
 int VAR_4;

 if (VAR_2->sc_bio_flush == 0)
  return;
 FUNC_1(1, &VAR_3);
 if (VAR_2->sc_bio_flush & VAR_1) {
  VAR_4 = FUNC_3(VAR_2->sc_jconsumer);
  FUNC_0(VAR_4 == 0 ? 2 : 0, "Flush cache of %s: error=%d.",
      VAR_2->sc_jconsumer->provider->name, VAR_4);
 }
 if (VAR_2->sc_bio_flush & VAR_0) {




  VAR_4 = FUNC_3(VAR_2->sc_dconsumer);
  FUNC_0(VAR_4 == 0 ? 2 : 0, "Flush cache of %s: error=%d.",
      VAR_2->sc_dconsumer->provider->name, VAR_4);
 }
 FUNC_2(1, &VAR_3, "Cache flush time");
}
