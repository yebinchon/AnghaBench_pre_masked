
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ isc_boolean_t ;
struct TYPE_4__ {scalar_t__ nscheduled; int wakeup; int heap; } ;
typedef TYPE_1__ isc__timermgr_t ;
struct TYPE_5__ {int index; TYPE_1__* manager; } ;
typedef TYPE_2__ isc__timer_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int ,char*) ;

__attribute__((used)) static inline void
FUNC_5(isc__timer_t *VAR_5) {



 isc__timermgr_t *VAR_6;





 VAR_6 = VAR_5->manager;
 if (VAR_5->index > 0) {




  FUNC_3(VAR_6->heap, VAR_5->index);
  VAR_5->index = 0;
  FUNC_0(VAR_6->nscheduled > 0);
  VAR_6->nscheduled--;
 }
}
