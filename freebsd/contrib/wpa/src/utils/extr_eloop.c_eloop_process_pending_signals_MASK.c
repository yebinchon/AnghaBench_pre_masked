
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ signaled; int signal_count; TYPE_1__* signals; scalar_t__ pending_terminate; } ;
struct TYPE_3__ {int user_data; int sig; int (* handler ) (int ,int ) ;scalar_t__ signaled; } ;


 int FUNC_0 (int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_1;

 if (VAR_0.signaled == 0)
  return;
 VAR_0.signaled = 0;

 if (VAR_0.pending_terminate) {

  FUNC_0(0);

  VAR_0.pending_terminate = 0;
 }

 for (VAR_1 = 0; VAR_1 < VAR_0.signal_count; VAR_1++) {
  if (VAR_0.signals[VAR_1].signaled) {
   VAR_0.signals[VAR_1].signaled = 0;
   VAR_0.signals[VAR_1].handler(VAR_0.signals[VAR_1].sig,
       VAR_0.signals[VAR_1].user_data);
  }
 }
}
