
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sigevent {scalar_t__ sigev_signo; } ;
struct TYPE_3__ {int mqdes; scalar_t__ sigev_signo; } ;
struct audit_context {int type; TYPE_1__ mq_notify; } ;
typedef int mqd_t ;
struct TYPE_4__ {struct audit_context* audit_context; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_0(mqd_t VAR_2, const struct sigevent *VAR_3)
{
 struct audit_context *VAR_4 = VAR_1->audit_context;

 if (VAR_3)
  VAR_4->mq_notify.sigev_signo = VAR_3->sigev_signo;
 else
  VAR_4->mq_notify.sigev_signo = 0;

 VAR_4->mq_notify.mqdes = VAR_2;
 VAR_4->type = VAR_0;
}
