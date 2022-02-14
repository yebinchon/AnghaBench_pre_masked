
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ qtype; } ;
struct module_qstate {int query_flags; TYPE_1__* return_msg; TYPE_2__ qinfo; int env; scalar_t__* minfo; } ;
struct dns64_qstate {scalar_t__ state; int started_no_cache_store; } ;
typedef enum module_ext_state { ____Placeholder_module_ext_state } module_ext_state ;
struct TYPE_4__ {scalar_t__ rep; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct module_qstate*,int) ;
 int FUNC_1 (int ,TYPE_2__*,scalar_t__,int ,int ,int ,int *,int) ;
 int FUNC_2 (struct module_qstate*,int) ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static enum module_ext_state
FUNC_6(struct module_qstate* VAR_5, int VAR_6)
{
 struct dns64_qstate* VAR_7 = (struct dns64_qstate*)VAR_5->minfo[VAR_6];
 if((!VAR_7 || VAR_7->state != VAR_1)
            && VAR_5->qinfo.qtype == VAR_2
     && !(VAR_5->query_flags & VAR_0)
     && !(VAR_5->return_msg &&
      VAR_5->return_msg->rep &&
      FUNC_4(&VAR_5->qinfo,
       VAR_5->return_msg->rep)))


  return FUNC_2(VAR_5, VAR_6);

 if((!VAR_7 || VAR_7->state != VAR_1)
     && VAR_5->qinfo.qtype == VAR_2
     && !(VAR_5->query_flags & VAR_0)
     && FUNC_0(VAR_5, VAR_6)) {


  FUNC_5(VAR_3, "dns64: ignore-aaaa and synthesize anyway");
  return FUNC_2(VAR_5, VAR_6);
 }


 if ( (!VAR_7 || !VAR_7->started_no_cache_store) &&
  VAR_5->return_msg && VAR_5->return_msg->rep &&
  !FUNC_1(VAR_5->env, &VAR_5->qinfo, VAR_5->return_msg->rep,
  0, 0, 0, ((void*)0), VAR_5->query_flags))
  FUNC_3("out of memory");


 return VAR_4;
}
