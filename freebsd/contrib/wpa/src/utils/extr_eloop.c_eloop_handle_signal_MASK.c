
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pending_terminate; int signal_count; TYPE_1__* signals; int signaled; } ;
struct TYPE_3__ {int sig; int signaled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(int VAR_5)
{
 int VAR_6;


 if ((VAR_5 == VAR_1 || VAR_5 == VAR_2) && !VAR_3.pending_terminate) {


  VAR_3.pending_terminate = 1;
  FUNC_1(VAR_0, VAR_4);
  FUNC_0(2);
 }


 VAR_3.signaled++;
 for (VAR_6 = 0; VAR_6 < VAR_3.signal_count; VAR_6++) {
  if (VAR_3.signals[VAR_6].sig == VAR_5) {
   VAR_3.signals[VAR_6].signaled++;
   break;
  }
 }
}
