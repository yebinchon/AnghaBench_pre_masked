
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_5__ {int run_interval; } ;
typedef TYPE_1__ background_thread_stats_t ;
struct TYPE_6__ {TYPE_1__ background_thread; } ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(tsdn_t *VAR_2) {
 background_thread_stats_t *VAR_3 = &VAR_0->background_thread;
 if (!VAR_1 ||
     FUNC_0(VAR_2, VAR_3)) {
  FUNC_1(VAR_3, 0, sizeof(background_thread_stats_t));
  FUNC_2(&VAR_3->run_interval, 0);
 }
}
