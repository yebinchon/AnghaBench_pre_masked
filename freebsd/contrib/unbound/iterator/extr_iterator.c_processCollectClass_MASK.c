
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int qtype; int qname_len; int qname; } ;
struct module_qstate {int query_flags; TYPE_3__ qinfo; TYPE_2__* env; scalar_t__* minfo; } ;
struct TYPE_4__ {scalar_t__ qclass; } ;
struct iter_qstate {scalar_t__ num_current_queries; TYPE_1__ qchase; } ;
struct TYPE_5__ {int fwds; int hints; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct module_qstate*,char*) ;
 int FUNC_1 (struct module_qstate*,int,int ) ;
 int FUNC_2 (int ,int ,int ,int,struct module_qstate*,int,struct iter_qstate*,int ,int ,struct module_qstate**,int) ;
 scalar_t__ FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,char*,int ,int ,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(struct module_qstate* VAR_7, int VAR_8)
{
 struct iter_qstate* VAR_9 = (struct iter_qstate*)VAR_7->minfo[VAR_8];
 struct module_qstate* VAR_10;




 if(VAR_9->qchase.qclass == 0) {
  uint16_t VAR_11 = 0;
  VAR_9->qchase.qclass = VAR_5;
  while(FUNC_3(VAR_7->env->hints,
   VAR_7->env->fwds, &VAR_11)) {

   FUNC_4(VAR_6, "spawn collect query",
    VAR_7->qinfo.qname, VAR_7->qinfo.qtype, VAR_11);
   if(!FUNC_2(VAR_7->qinfo.qname,
    VAR_7->qinfo.qname_len, VAR_7->qinfo.qtype,
    VAR_11, VAR_7, VAR_8, VAR_9, VAR_2,
    VAR_1, &VAR_10,
    (int)!(VAR_7->query_flags&VAR_0))) {
    FUNC_0(VAR_7, "could not generate class ANY"
     " lookup query");
    return FUNC_1(VAR_7, VAR_8,
     VAR_4);
   }

   VAR_9->num_current_queries ++;
   if(VAR_11 == 0xffff)
    break;
   else VAR_11++;
  }

  if(VAR_9->num_current_queries == 0) {
   FUNC_5(VAR_6, "No root hints or fwds, giving up "
    "on qclass ANY");
   return FUNC_1(VAR_7, VAR_8, VAR_3);
  }

 }

 return 0;
}
