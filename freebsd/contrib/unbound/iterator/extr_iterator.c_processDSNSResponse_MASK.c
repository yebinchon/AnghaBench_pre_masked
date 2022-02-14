
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int qclass; int qname_len; int qname; } ;
struct module_qstate {scalar_t__ return_rcode; int region; TYPE_2__* return_msg; TYPE_1__ qinfo; scalar_t__* minfo; } ;
struct iter_qstate {int dp; int state; } ;
struct TYPE_4__ {int rep; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct module_qstate*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct module_qstate* VAR_3, int VAR_4,
 struct module_qstate* VAR_5)
{
 struct iter_qstate* VAR_6 = (struct iter_qstate*)VAR_5->minfo[VAR_4];



 if(VAR_3->return_rcode != VAR_0)
  return;

 if(!FUNC_3(VAR_3->return_msg->rep, VAR_3->qinfo.qname,
  VAR_3->qinfo.qname_len, VAR_1,
  VAR_3->qinfo.qclass)){
  return;
 }


 VAR_6->state = VAR_2;
 VAR_6->dp = FUNC_0(VAR_3->return_msg, VAR_5->region);
 if(!VAR_6->dp) {
  FUNC_2("out of memory in dsns dp alloc");
  FUNC_1(VAR_3, "malloc failure, in DS search");
  return;
 }

}
