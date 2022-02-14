
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eloop_signal {int sig; scalar_t__ signaled; int handler; void* user_data; } ;
typedef int eloop_signal_handler ;
struct TYPE_2__ {int signal_count; struct eloop_signal* signals; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 struct eloop_signal* FUNC_0 (struct eloop_signal*,int,int) ;
 int FUNC_1 (int,int ) ;

int FUNC_2(int VAR_2, eloop_signal_handler VAR_3,
     void *VAR_4)
{
 struct eloop_signal *VAR_5;

 VAR_5 = FUNC_0(VAR_0.signals, VAR_0.signal_count + 1,
          sizeof(struct eloop_signal));
 if (VAR_5 == ((void*)0))
  return -1;

 VAR_5[VAR_0.signal_count].sig = VAR_2;
 VAR_5[VAR_0.signal_count].user_data = VAR_4;
 VAR_5[VAR_0.signal_count].handler = VAR_3;
 VAR_5[VAR_0.signal_count].signaled = 0;
 VAR_0.signal_count++;
 VAR_0.signals = VAR_5;
 FUNC_1(VAR_2, VAR_1);

 return 0;
}
