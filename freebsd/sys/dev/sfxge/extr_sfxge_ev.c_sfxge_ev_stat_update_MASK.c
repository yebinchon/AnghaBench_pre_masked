
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {unsigned int evq_count; int * ev_stats; struct sfxge_evq** evq; scalar_t__ ev_stats_update_time; } ;
struct sfxge_evq {scalar_t__* stats; } ;
typedef scalar_t__ clock_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct sfxge_softc*) ;
 int FUNC_1 (struct sfxge_softc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct sfxge_evq*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct sfxge_softc *VAR_3)
{
 struct sfxge_evq *VAR_4;
 unsigned int VAR_5;
 clock_t VAR_6;
 unsigned int VAR_7;

 FUNC_0(VAR_3);

 VAR_6 = VAR_2;
 if ((unsigned int)(VAR_6 - VAR_3->ev_stats_update_time) < (unsigned int)VAR_1)
  goto out;

 VAR_3->ev_stats_update_time = VAR_6;

 FUNC_2(VAR_3->ev_stats, 0, sizeof(VAR_3->ev_stats));


 for (VAR_5 = 0; VAR_5 < VAR_3->evq_count; VAR_5++) {
  VAR_4 = VAR_3->evq[VAR_5];
  FUNC_3(VAR_4);
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   VAR_3->ev_stats[VAR_7] += VAR_4->stats[VAR_7];
 }
out:
 FUNC_1(VAR_3);
}
