
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmeParams {int wmep_acm; int wmep_txopLimit; int wmep_logcwmax; int wmep_logcwmin; int wmep_aifsn; } ;
struct ieee80211com {int dummy; } ;
struct iwi_softc {TYPE_1__* wme; struct ieee80211com sc_ic; } ;
struct chanAccParams {struct wmeParams* cap_wmeParams; } ;
struct TYPE_2__ {int * acm; int * burst; void** cwmax; void** cwmin; int * aifsn; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct ieee80211com*,struct chanAccParams*) ;
 int FUNC_4 (struct iwi_softc*,int ,TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_5(struct iwi_softc *VAR_2)
{
 struct ieee80211com *VAR_3 = &VAR_2->sc_ic;
 struct chanAccParams VAR_4;
 const struct wmeParams *VAR_5;
 int VAR_6;

 FUNC_3(VAR_3, &VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {

  VAR_5 = &VAR_4.cap_wmeParams[VAR_6];
  VAR_2->wme[0].aifsn[VAR_6] = VAR_5->wmep_aifsn;
  VAR_2->wme[0].cwmin[VAR_6] = FUNC_1(VAR_5->wmep_logcwmin);
  VAR_2->wme[0].cwmax[VAR_6] = FUNC_1(VAR_5->wmep_logcwmax);
  VAR_2->wme[0].burst[VAR_6] = FUNC_2(VAR_5->wmep_txopLimit);
  VAR_2->wme[0].acm[VAR_6] = VAR_5->wmep_acm;
 }

 FUNC_0(("Setting WME parameters\n"));
 return FUNC_4(VAR_2, VAR_0, VAR_2->wme, sizeof VAR_2->wme);
}
