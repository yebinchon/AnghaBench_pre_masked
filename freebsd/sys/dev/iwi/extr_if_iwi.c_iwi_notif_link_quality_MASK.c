
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_softc {int sc_linkqual_valid; int sc_linkqual; } ;
struct iwi_notif_link_quality {int dummy; } ;
struct iwi_notif {int type; int len; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct iwi_notif_link_quality*,int) ;

__attribute__((used)) static void
FUNC_3(struct iwi_softc *VAR_0, struct iwi_notif *VAR_1)
{
 struct iwi_notif_link_quality *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->len);

 FUNC_0(5, ("Notification (%u) - len=%d, sizeof=%zu\n",
     VAR_1->type,
     VAR_3,
     sizeof(struct iwi_notif_link_quality)
     ));


 if (VAR_3 != sizeof(struct iwi_notif_link_quality)) {
  FUNC_0(5, ("Notification: (%u) too short (%d)\n",
      VAR_1->type,
      VAR_3));
  return;
 }

 VAR_2 = (struct iwi_notif_link_quality *)(VAR_1 + 1);
 FUNC_2(&VAR_0->sc_linkqual, VAR_2, sizeof(VAR_0->sc_linkqual));
 VAR_0->sc_linkqual_valid = 1;
}
