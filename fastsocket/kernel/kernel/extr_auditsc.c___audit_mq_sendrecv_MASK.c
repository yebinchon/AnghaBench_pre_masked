
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_3__ {size_t msg_len; unsigned int msg_prio; int mqdes; struct timespec abs_timeout; } ;
struct audit_context {int type; TYPE_1__ mq_sendrecv; } ;
typedef int mqd_t ;
struct TYPE_4__ {struct audit_context* audit_context; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct timespec*,struct timespec const*,int) ;
 int FUNC_1 (struct timespec*,int ,int) ;

void FUNC_2(mqd_t VAR_2, size_t VAR_3, unsigned int VAR_4,
   const struct timespec *VAR_5)
{
 struct audit_context *VAR_6 = VAR_1->audit_context;
 struct timespec *VAR_7 = &VAR_6->mq_sendrecv.abs_timeout;

 if (VAR_5)
  FUNC_0(VAR_7, VAR_5, sizeof(struct timespec));
 else
  FUNC_1(VAR_7, 0, sizeof(struct timespec));

 VAR_6->mq_sendrecv.mqdes = VAR_2;
 VAR_6->mq_sendrecv.msg_len = VAR_3;
 VAR_6->mq_sendrecv.msg_prio = VAR_4;

 VAR_6->type = VAR_0;
}
