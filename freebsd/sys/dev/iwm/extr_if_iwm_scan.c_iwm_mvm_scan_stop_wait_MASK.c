
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct iwm_softc {int sc_notif_wait; } ;
struct iwm_notification_wait {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwm_softc*,int ,char*) ;
 int FUNC_1 (struct iwm_softc*) ;


 int VAR_1 ;
 int FUNC_2 (struct iwm_softc*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct iwm_softc*,int ) ;
 int FUNC_4 (int ,struct iwm_notification_wait*,int const*,int ,int *,int *) ;
 int FUNC_5 (struct iwm_softc*) ;
 int FUNC_6 (struct iwm_softc*) ;
 int FUNC_7 (int ,struct iwm_notification_wait*) ;
 int FUNC_8 (int ,struct iwm_notification_wait*,int ) ;
 int FUNC_9 (int const*) ;

int
FUNC_10(struct iwm_softc *VAR_3)
{
 struct iwm_notification_wait VAR_4;
 static const uint16_t VAR_5[] = { 129,
         128, };
 int VAR_6;

 FUNC_4(VAR_3->sc_notif_wait, &VAR_4,
       VAR_5, FUNC_9(VAR_5),
       ((void*)0), ((void*)0));

 FUNC_0(VAR_3, VAR_0, "Preparing to stop scan\n");

 if (FUNC_3(VAR_3, VAR_1))
  VAR_6 = FUNC_6(VAR_3);
 else
  VAR_6 = FUNC_5(VAR_3);

 if (VAR_6) {
  FUNC_0(VAR_3, VAR_0, "couldn't stop scan\n");
  FUNC_7(VAR_3->sc_notif_wait, &VAR_4);
  return VAR_6;
 }

 FUNC_2(VAR_3);
 VAR_6 = FUNC_8(VAR_3->sc_notif_wait, &VAR_4, VAR_2);
 FUNC_1(VAR_3);

 return VAR_6;
}
