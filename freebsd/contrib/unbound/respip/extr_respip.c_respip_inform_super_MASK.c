
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct respip_qstate {int state; } ;
struct reply_info {int dummy; } ;
struct module_qstate {scalar_t__ return_rcode; TYPE_2__* return_msg; int region; TYPE_1__* env; int client_info; int qinfo; scalar_t__* minfo; } ;
struct TYPE_4__ {struct reply_info* rep; } ;
struct TYPE_3__ {int need_to_validate; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct reply_info*,int *,struct reply_info*,int ,int ,struct reply_info**,int ) ;

void
FUNC_2(struct module_qstate* VAR_3, int VAR_4,
 struct module_qstate* VAR_5)
{
 struct respip_qstate* VAR_6 = (struct respip_qstate*)VAR_5->minfo[VAR_4];
 struct reply_info* VAR_7 = ((void*)0);

 VAR_6->state = VAR_2;



 FUNC_0(VAR_5->return_msg && VAR_5->return_msg->rep);





 if(!VAR_3->return_msg || !VAR_3->return_msg->rep ||
  VAR_3->return_rcode != VAR_0)
  goto fail;

 if(!FUNC_1(VAR_5->return_msg->rep, &VAR_3->qinfo,
  VAR_3->return_msg->rep, VAR_5->client_info,
  VAR_5->env->need_to_validate, &VAR_7, VAR_5->region))
  goto fail;
 VAR_5->return_msg->rep = VAR_7;
 return;

  fail:
 VAR_5->return_rcode = VAR_1;
 VAR_5->return_msg = ((void*)0);
 return;
}
