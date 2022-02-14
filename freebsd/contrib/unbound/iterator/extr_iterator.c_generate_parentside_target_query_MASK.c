
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_8__ {int qclass; } ;
struct module_qstate {TYPE_1__ qinfo; TYPE_2__* env; scalar_t__ prefetch_leeway; int region; int blacklist; scalar_t__* minfo; } ;
struct iter_qstate {int query_for_pside_glue; int refetch_glue; TYPE_3__* dp; void* dnssec_expected; int deleg_msg; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {scalar_t__* now; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int *,size_t,int ,int ,int ,int *,scalar_t__) ;
 int FUNC_3 (int *,size_t,int ,int ,struct module_qstate*,int,struct iter_qstate*,int ,int ,struct module_qstate**,int ) ;
 void* FUNC_4 (TYPE_2__*,TYPE_3__*,int *,int ) ;
 int FUNC_5 (int ,char*,int *,int ,int ) ;
 int FUNC_6 (int *,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct module_qstate* VAR_3,
 struct iter_qstate* VAR_4, int VAR_5, uint8_t* VAR_6, size_t VAR_7,
 uint16_t VAR_8, uint16_t VAR_9)
{
 struct module_qstate* VAR_10;
 if(!FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9, VAR_3,
  VAR_5, VAR_4, VAR_1, VAR_0, &VAR_10, 0))
  return 0;
 if(VAR_10) {
  struct iter_qstate* VAR_11 =
   (struct iter_qstate*)VAR_10->minfo[VAR_5];

  FUNC_6(&VAR_10->blacklist, ((void*)0), 0, VAR_10->region);
  VAR_11->query_for_pside_glue = 1;
  if(FUNC_1(VAR_6, VAR_4->dp->name)) {
   VAR_11->dp = FUNC_0(VAR_4->dp, VAR_10->region);
   VAR_11->dnssec_expected = FUNC_4(
    VAR_3->env, VAR_11->dp, ((void*)0),
    VAR_10->qinfo.qclass);
   VAR_11->refetch_glue = 1;
  } else {
   VAR_11->dp = FUNC_2(VAR_3->env,
    VAR_6, VAR_7, VAR_8, VAR_9, VAR_10->region,
    &VAR_11->deleg_msg,
    *VAR_3->env->now+VAR_10->prefetch_leeway);

   if(VAR_11->dp) {
    VAR_11->dnssec_expected = FUNC_4(
     VAR_3->env, VAR_11->dp, ((void*)0),
     VAR_10->qinfo.qclass);
    VAR_11->refetch_glue = 1;
   }
  }
 }
 FUNC_5(VAR_2, "new pside target", VAR_6, VAR_8, VAR_9);
 return 1;
}
