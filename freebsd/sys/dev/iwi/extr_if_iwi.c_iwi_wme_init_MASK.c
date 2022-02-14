
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmeParams {int wmep_acm; int wmep_txopLimit; int wmep_logcwmax; int wmep_logcwmin; int wmep_aifsn; } ;
struct iwi_softc {TYPE_1__* wme; } ;
struct TYPE_2__ {int * acm; void** burst; void** cwmax; void** cwmin; int * aifsn; } ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int VAR_0 ;
 struct wmeParams* VAR_1 ;
 struct wmeParams* VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct iwi_softc *VAR_3)
{
 const struct wmeParams *VAR_4;
 int VAR_5;

 FUNC_2(VAR_3->wme, 0, sizeof VAR_3->wme);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {

  VAR_4 = &VAR_1[VAR_5];
  VAR_3->wme[1].aifsn[VAR_5] = VAR_4->wmep_aifsn;
  VAR_3->wme[1].cwmin[VAR_5] = FUNC_0(VAR_4->wmep_logcwmin);
  VAR_3->wme[1].cwmax[VAR_5] = FUNC_0(VAR_4->wmep_logcwmax);
  VAR_3->wme[1].burst[VAR_5] = FUNC_1(VAR_4->wmep_txopLimit);
  VAR_3->wme[1].acm[VAR_5] = VAR_4->wmep_acm;


  VAR_4 = &VAR_2[VAR_5];
  VAR_3->wme[2].aifsn[VAR_5] = VAR_4->wmep_aifsn;
  VAR_3->wme[2].cwmin[VAR_5] = FUNC_0(VAR_4->wmep_logcwmin);
  VAR_3->wme[2].cwmax[VAR_5] = FUNC_0(VAR_4->wmep_logcwmax);
  VAR_3->wme[2].burst[VAR_5] = FUNC_1(VAR_4->wmep_txopLimit);
  VAR_3->wme[2].acm[VAR_5] = VAR_4->wmep_acm;
 }
}
