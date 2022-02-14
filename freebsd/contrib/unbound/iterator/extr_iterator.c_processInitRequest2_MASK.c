
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct module_qstate {TYPE_1__* env; int qinfo; } ;
struct TYPE_7__ {size_t qname_len; scalar_t__ qtype; int qclass; int * qname; } ;
struct iter_qstate {TYPE_3__ qchase; scalar_t__ refetch_glue; TYPE_4__* dp; } ;
struct iter_hints_stub {TYPE_2__* dp; } ;
struct TYPE_8__ {size_t namelen; int * name; } ;
struct TYPE_6__ {int name; int has_parent_side_NS; } ;
struct TYPE_5__ {int hints; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct module_qstate*,struct iter_qstate*,int *,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,size_t*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (struct module_qstate*,char*) ;
 int FUNC_5 (struct module_qstate*,int,int ) ;
 struct iter_hints_stub* FUNC_6 (int ,int *,int ,TYPE_4__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,int *) ;
 int FUNC_9 (struct iter_qstate*,int ) ;
 scalar_t__ FUNC_10 (struct module_qstate*,struct iter_qstate*,int,int *,int ) ;

__attribute__((used)) static int
FUNC_11(struct module_qstate* VAR_4, struct iter_qstate* VAR_5,
 int VAR_6)
{
 uint8_t* VAR_7;
 size_t VAR_8;
 FUNC_8(VAR_3, "resolving (init part 2): ",
  &VAR_4->qinfo);

 VAR_7 = VAR_5->qchase.qname;
 VAR_8 = VAR_5->qchase.qname_len;
 if(VAR_5->refetch_glue) {
  struct iter_hints_stub* VAR_9;
  if(!VAR_5->dp) {
   FUNC_7("internal or malloc fail: no dp for refetch");
   FUNC_4(VAR_4, "malloc failure, no delegation info");
   return FUNC_5(VAR_4, VAR_6, VAR_1);
  }


  VAR_9 = FUNC_6(
   VAR_4->env->hints, VAR_5->qchase.qname, VAR_5->qchase.qclass,
   VAR_5->dp);
  if(!VAR_9 || !VAR_9->dp->has_parent_side_NS ||
   FUNC_3(VAR_5->dp->name, VAR_9->dp->name)) {
   VAR_7 = VAR_5->dp->name;
   VAR_8 = VAR_5->dp->namelen;
  }
 }
 if(VAR_5->qchase.qtype == VAR_2 || VAR_5->refetch_glue) {
  if(!FUNC_1(VAR_7))
   FUNC_2(&VAR_7, &VAR_8);
  VAR_5->refetch_glue = 0;
 }



 if(!FUNC_0(VAR_4, VAR_5, VAR_7, VAR_8))
  return FUNC_5(VAR_4, VAR_6, VAR_1);


 if(FUNC_10(VAR_4, VAR_5, VAR_6, VAR_7, VAR_5->qchase.qclass)) {

  return 0;
 }


 return FUNC_9(VAR_5, VAR_0);
}
