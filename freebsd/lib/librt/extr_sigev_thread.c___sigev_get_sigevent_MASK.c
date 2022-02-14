
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* sival_ptr; } ;
struct sigevent {TYPE_2__ sigev_value; scalar_t__ sigev_notify_thread_id; int sigev_signo; int sigev_notify; } ;
struct sigev_node {TYPE_1__* sn_tn; } ;
typedef scalar_t__ sigev_id_t ;
typedef scalar_t__ lwpid_t ;
struct TYPE_3__ {scalar_t__ tn_lwpid; } ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(struct sigev_node *VAR_2, struct sigevent *VAR_3,
 sigev_id_t VAR_4)
{




 VAR_3->sigev_notify = VAR_0;
 VAR_3->sigev_signo = VAR_1;
 VAR_3->sigev_notify_thread_id = (lwpid_t)VAR_2->sn_tn->tn_lwpid;
 VAR_3->sigev_value.sival_ptr = (void *)VAR_4;
}
