
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_3__ {scalar_t__ c_time; int c_id; struct TYPE_3__* c_next; } ;
typedef TYPE_1__ callout ;
struct TYPE_4__ {TYPE_1__* c_next; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (char*,int ,long) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,int ) ;

void
FUNC_2(time_t VAR_3, time_t VAR_4)
{
  callout *VAR_5;

  for (VAR_5 = VAR_1.c_next; VAR_5; VAR_5 = VAR_5->c_next) {
    if (VAR_5->c_time >= VAR_3 && VAR_5->c_time <= VAR_4) {
      FUNC_1(VAR_0, "job %d rescheduled to run immediately", VAR_5->c_id);
      FUNC_0("rescheduling job %d back %ld seconds",
    VAR_5->c_id, (long) (VAR_5->c_time - VAR_3));
      VAR_2 = VAR_5->c_time = VAR_3;
    }
  }
}
