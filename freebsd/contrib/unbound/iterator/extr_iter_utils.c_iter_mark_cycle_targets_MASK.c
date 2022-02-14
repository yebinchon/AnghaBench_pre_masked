
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qclass; } ;
struct module_qstate {TYPE_1__ qinfo; } ;
struct delegpt_ns {int resolved; int name; int namelen; struct delegpt_ns* next; } ;
struct delegpt {struct delegpt_ns* nslist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct module_qstate*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;

void
FUNC_2(struct module_qstate* VAR_3, struct delegpt* VAR_4)
{
 struct delegpt_ns* VAR_5;
 for(VAR_5 = VAR_4->nslist; VAR_5; VAR_5 = VAR_5->next) {
  if(VAR_5->resolved)
   continue;

  if(FUNC_0(VAR_3, VAR_5->name, VAR_5->namelen,
   VAR_1, VAR_3->qinfo.qclass) ||
     FUNC_0(VAR_3, VAR_5->name, VAR_5->namelen,
   VAR_0, VAR_3->qinfo.qclass)) {
   FUNC_1(VAR_2, "skipping target due "
     "to dependency cycle (harden-glue: no may "
    "fix some of the cycles)",
    VAR_5->name, VAR_0,
    VAR_3->qinfo.qclass);
   VAR_5->resolved = 1;
  }
 }
}
