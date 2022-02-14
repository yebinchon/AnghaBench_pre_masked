
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mq_attr {int dummy; } ;
struct TYPE_3__ {struct mq_attr mqstat; int mqdes; } ;
struct audit_context {int type; TYPE_1__ mq_getsetattr; } ;
typedef int mqd_t ;
struct TYPE_4__ {struct audit_context* audit_context; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_0(mqd_t VAR_2, struct mq_attr *VAR_3)
{
 struct audit_context *VAR_4 = VAR_1->audit_context;
 VAR_4->mq_getsetattr.mqdes = VAR_2;
 VAR_4->mq_getsetattr.mqstat = *VAR_3;
 VAR_4->type = VAR_0;
}
