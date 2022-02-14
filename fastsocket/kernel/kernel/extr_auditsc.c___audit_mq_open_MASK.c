
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mq_attr {int dummy; } ;
struct TYPE_3__ {int oflag; int mode; int attr; } ;
struct audit_context {int type; TYPE_1__ mq_open; } ;
typedef int mode_t ;
struct TYPE_4__ {struct audit_context* audit_context; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *,struct mq_attr*,int) ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(int VAR_2, mode_t VAR_3, struct mq_attr *VAR_4)
{
 struct audit_context *VAR_5 = VAR_1->audit_context;

 if (VAR_4)
  FUNC_0(&VAR_5->mq_open.attr, VAR_4, sizeof(struct mq_attr));
 else
  FUNC_1(&VAR_5->mq_open.attr, 0, sizeof(struct mq_attr));

 VAR_5->mq_open.oflag = VAR_2;
 VAR_5->mq_open.mode = VAR_3;

 VAR_5->type = VAR_0;
}
