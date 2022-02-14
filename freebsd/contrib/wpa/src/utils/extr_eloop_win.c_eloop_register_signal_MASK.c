
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eloop_signal {int sig; scalar_t__ signaled; int handler; void* user_data; } ;
typedef int eloop_signal_handler ;
struct TYPE_2__ {int signal_count; struct eloop_signal* signals; } ;


 TYPE_1__ VAR_0 ;
 struct eloop_signal* FUNC_0 (struct eloop_signal*,int,int) ;

int FUNC_1(int VAR_1, eloop_signal_handler VAR_2,
     void *VAR_3)
{
 struct eloop_signal *VAR_4;

 VAR_4 = FUNC_0(VAR_0.signals, VAR_0.signal_count + 1,
          sizeof(struct eloop_signal));
 if (VAR_4 == ((void*)0))
  return -1;

 VAR_4[VAR_0.signal_count].sig = VAR_1;
 VAR_4[VAR_0.signal_count].user_data = VAR_3;
 VAR_4[VAR_0.signal_count].handler = VAR_2;
 VAR_4[VAR_0.signal_count].signaled = 0;
 VAR_0.signal_count++;
 VAR_0.signals = VAR_4;



 return 0;
}
