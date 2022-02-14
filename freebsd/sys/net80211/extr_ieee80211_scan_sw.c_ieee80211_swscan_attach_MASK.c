
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ieee80211com* ss_ic; } ;
struct scan_state {TYPE_1__ base; int ss_scan_curchan; int ss_scan_start; } ;
struct ieee80211com {int ic_scan_mindwell; int ic_scan_curchan; TYPE_1__* ic_scan; int ic_tq; int * ic_scan_methods; } ;


 scalar_t__ FUNC_0 (int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,struct scan_state*) ;
 int FUNC_2 (int ,int *,int ,int ,struct scan_state*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_3(struct ieee80211com *VAR_8)
{
 struct scan_state *VAR_9;




 VAR_8->ic_scan_methods = &VAR_7;


 VAR_9 = (struct scan_state *) FUNC_0(sizeof(struct scan_state),
  VAR_2, VAR_0 | VAR_1);
 if (VAR_9 == ((void*)0)) {
  VAR_8->ic_scan = ((void*)0);
  return;
 }
 FUNC_1(&VAR_9->ss_scan_start, 0, VAR_6, VAR_9);
 FUNC_2(VAR_8->ic_tq, &VAR_9->ss_scan_curchan, 0,
     VAR_4, VAR_9);

 VAR_8->ic_scan = &VAR_9->base;
 VAR_9->base.ss_ic = VAR_8;

 VAR_8->ic_scan_curchan = VAR_3;
 VAR_8->ic_scan_mindwell = VAR_5;
}
