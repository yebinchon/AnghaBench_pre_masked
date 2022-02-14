
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpi_softc {int (* sc_node_free ) (struct ieee80211_node*) ;} ;
struct wpi_node {scalar_t__ id; } ;
struct ieee80211_node {TYPE_1__* ni_ic; } ;
struct TYPE_2__ {struct wpi_softc* ic_softc; } ;


 scalar_t__ VAR_0 ;
 struct wpi_node* FUNC_0 (struct ieee80211_node*) ;
 int FUNC_1 (struct wpi_softc*) ;
 int FUNC_2 (struct wpi_softc*) ;
 int FUNC_3 (struct ieee80211_node*) ;
 scalar_t__ FUNC_4 (struct wpi_softc*,scalar_t__) ;
 int FUNC_5 (struct wpi_softc*,struct ieee80211_node*) ;
 int FUNC_6 (struct wpi_softc*,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct ieee80211_node *VAR_1)
{
 struct wpi_softc *VAR_2 = VAR_1->ni_ic->ic_softc;
 struct wpi_node *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->id != VAR_0) {
  FUNC_1(VAR_2);
  if (FUNC_4(VAR_2, VAR_3->id)) {
   FUNC_6(VAR_2, VAR_3->id);
   FUNC_5(VAR_2, VAR_1);
  }
  FUNC_2(VAR_2);
 }

 VAR_2->sc_node_free(VAR_1);
}
