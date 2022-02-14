
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ qtype; int qname_len; int * qname; } ;
struct module_qstate {int query_flags; TYPE_3__ qinfo; TYPE_2__* env; scalar_t__* minfo; } ;
struct dns64_qstate {scalar_t__ state; } ;
typedef enum module_ext_state { ____Placeholder_module_ext_state } module_ext_state ;
struct TYPE_5__ {TYPE_1__* cfg; } ;
struct TYPE_4__ {scalar_t__ dns64_synthall; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct module_qstate*,int) ;
 int FUNC_1 (struct module_qstate*,int) ;
 int FUNC_2 (struct module_qstate*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static enum module_ext_state
FUNC_5(struct module_qstate* VAR_8, int VAR_9)
{
 struct dns64_qstate* VAR_10 = (struct dns64_qstate*)VAR_8->minfo[VAR_9];
 if (VAR_10 && VAR_10->state == VAR_1
            && VAR_8->qinfo.qtype == VAR_4
            && VAR_8->qinfo.qname_len == 74
            && !FUNC_3((char*)&VAR_8->qinfo.qname[64], "\03ip6\04arpa"))

        return FUNC_2(VAR_8, VAR_9);

 if (VAR_8->env->cfg->dns64_synthall &&
     VAR_10 && VAR_10->state == VAR_1
     && VAR_8->qinfo.qtype == VAR_3)
  return FUNC_1(VAR_8, VAR_9);

 if(FUNC_0(VAR_8, VAR_9) &&
     VAR_10 && VAR_10->state == VAR_1
     && !(VAR_8->query_flags & VAR_0)
     && VAR_8->qinfo.qtype == VAR_3) {
  FUNC_4(VAR_5, "dns64: ignore-aaaa and synthesize anyway");
  return FUNC_1(VAR_8, VAR_9);
 }


 if (VAR_10 && VAR_10->state == VAR_2)
  return VAR_6;


 FUNC_4(VAR_5, "dns64: pass to next module");
 return VAR_7;
}
