
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct query_info {int qname; int qclass; } ;
struct module_qstate {TYPE_1__* env; } ;
struct iter_hints_stub {TYPE_2__* dp; } ;
struct delegpt {int no_cache; int name; int namelabs; } ;
struct TYPE_4__ {int no_cache; int name; int namelabs; } ;
struct TYPE_3__ {int fwds; int hints; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 struct delegpt* FUNC_2 (int ,int ,int ) ;
 struct iter_hints_stub* FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,char*,char*,char*) ;

int
FUNC_5(struct module_qstate *VAR_1, struct query_info *VAR_2)
{
 struct iter_hints_stub *VAR_3;
 struct delegpt *VAR_4;


 VAR_3 = FUNC_3(VAR_1->env->hints, VAR_2->qname,
     VAR_2->qclass, ((void*)0));
 VAR_4 = FUNC_2(VAR_1->env->fwds, VAR_2->qname, VAR_2->qclass);


 if(VAR_3 && VAR_3->dp && VAR_4) {
  if(FUNC_1(VAR_4->name, VAR_4->namelabs,
   VAR_3->dp->name, VAR_3->dp->namelabs)) {
   VAR_3 = ((void*)0);
  } else {
   VAR_4 = ((void*)0);
  }
 }


 if (VAR_3 != ((void*)0) && VAR_3->dp != ((void*)0)) {
  if(VAR_3->dp->no_cache) {
   char VAR_5[255+1];
   char VAR_6[255+1];
   FUNC_0(VAR_2->qname, VAR_5);
   FUNC_0(VAR_3->dp->name, VAR_6);
   FUNC_4(VAR_0, "stub for %s %s has no_cache", VAR_5, VAR_6);
  }
  return (VAR_3->dp->no_cache);
 }


 if (VAR_4) {
  if(VAR_4->no_cache) {
   char VAR_7[255+1];
   char VAR_8[255+1];
   FUNC_0(VAR_2->qname, VAR_7);
   FUNC_0(VAR_4->name, VAR_8);
   FUNC_4(VAR_0, "forward for %s %s has no_cache", VAR_7, VAR_8);
  }
  return (VAR_4->no_cache);
 }
 return 0;
}
