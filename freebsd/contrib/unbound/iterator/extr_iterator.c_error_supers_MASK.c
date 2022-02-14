
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ qtype; int qname_len; int qname; } ;
struct module_qstate {TYPE_2__ qinfo; int region; int env; scalar_t__* minfo; } ;
struct TYPE_3__ {int qclass; } ;
struct iter_qstate {int state; int * dp; TYPE_1__ qchase; int num_target_queries; } ;
struct delegpt_ns {int resolved; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 struct delegpt_ns* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,TYPE_2__*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(struct module_qstate* VAR_5, int VAR_6, struct module_qstate* VAR_7)
{
 struct iter_qstate* VAR_8 = (struct iter_qstate*)VAR_7->minfo[VAR_6];

 if(VAR_5->qinfo.qtype == VAR_0 ||
  VAR_5->qinfo.qtype == VAR_1) {

  struct delegpt_ns* VAR_9 = ((void*)0);
  VAR_8->num_target_queries--;
  if(VAR_8->dp)
   VAR_9 = FUNC_1(VAR_8->dp,
    VAR_5->qinfo.qname, VAR_5->qinfo.qname_len);
  if(!VAR_9) {





   FUNC_4(VAR_4, "subq error, but not interested");
   FUNC_3(VAR_4, "superq", &VAR_7->qinfo);
   return;
  } else {

   if(!FUNC_0(VAR_7->env, VAR_8->qchase.qclass,
    VAR_7->region, VAR_8->dp))
    FUNC_2("out of memory adding missing");
  }
  VAR_9->resolved = 1;
 }
 if(VAR_5->qinfo.qtype == VAR_2) {

  VAR_8->dp = ((void*)0);
 }

 VAR_8->state = VAR_3;

}
