
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ qtype; int qname; } ;
struct module_qstate {int query_flags; int region; scalar_t__* minfo; TYPE_1__ qinfo; } ;
struct TYPE_7__ {int qclass; } ;
struct iter_qstate {TYPE_3__* dp; TYPE_2__ qchase; } ;
struct TYPE_8__ {int namelen; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int ,struct module_qstate*,int,struct iter_qstate*,int ,int ,struct module_qstate**,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,char*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6(struct module_qstate* VAR_6,
 struct iter_qstate* VAR_7, int VAR_8)
{
 struct module_qstate* VAR_9;
 FUNC_2(VAR_7->dp);


 if(VAR_6->qinfo.qtype == VAR_4 &&
  FUNC_4(VAR_7->dp->name, VAR_6->qinfo.qname)==0 &&
  (VAR_6->query_flags&VAR_1) && !(VAR_6->query_flags&VAR_0)){
  return;
 }


 FUNC_3(VAR_5, "schedule dnskey prefetch",
  VAR_7->dp->name, VAR_4, VAR_7->qchase.qclass);
 if(!FUNC_1(VAR_7->dp->name, VAR_7->dp->namelen,
  VAR_4, VAR_7->qchase.qclass, VAR_6, VAR_8, VAR_7,
  VAR_3, VAR_2, &VAR_9, 0)) {

  FUNC_5(VAR_5, "could not generate dnskey prefetch");
  return;
 }
 if(VAR_9) {
  struct iter_qstate* VAR_10 =
   (struct iter_qstate*)VAR_9->minfo[VAR_8];


  VAR_10->dp = FUNC_0(VAR_7->dp, VAR_9->region);

 }
}
