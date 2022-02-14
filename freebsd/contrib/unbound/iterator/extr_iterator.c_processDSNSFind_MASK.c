
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct module_qstate {int dummy; } ;
struct TYPE_4__ {int qclass; int qname_len; scalar_t__ qname; } ;
struct iter_qstate {scalar_t__ dsns_point; TYPE_2__ qchase; int dsns_point_len; int state; TYPE_1__* dp; } ;
struct TYPE_3__ {scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__*,int *) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct module_qstate*,char*,scalar_t__) ;
 int FUNC_3 (struct module_qstate*,int,int ) ;
 int FUNC_4 (scalar_t__,int ,int ,int ,struct module_qstate*,int,struct iter_qstate*,int ,int ,struct module_qstate**,int ) ;
 int FUNC_5 (int ,char*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int
FUNC_8(struct module_qstate* VAR_7, struct iter_qstate* VAR_8, int VAR_9)
{
 struct module_qstate* VAR_10 = ((void*)0);
 FUNC_7(VAR_6, "processDSNSFind");

 if(!VAR_8->dsns_point) {

  VAR_8->dsns_point = VAR_8->qchase.qname;
  VAR_8->dsns_point_len = VAR_8->qchase.qname_len;
 }

 if(!FUNC_1(VAR_8->dsns_point, VAR_8->dp->name)) {
  FUNC_2(VAR_7, "for DS query parent-child nameserver search the query is not under the zone", VAR_8->dp->name);
  return FUNC_3(VAR_7, VAR_9, VAR_3);
 }


 FUNC_0(&VAR_8->dsns_point, &VAR_8->dsns_point_len);
 if(FUNC_6(VAR_8->dsns_point, VAR_8->dp->name) == 0) {



  VAR_8->state = VAR_5;
  return 1;
 }
 VAR_8->state = VAR_0;


 FUNC_5(VAR_6, "fetch nameservers",
  VAR_8->dsns_point, VAR_4, VAR_8->qchase.qclass);
 if(!FUNC_4(VAR_8->dsns_point, VAR_8->dsns_point_len,
  VAR_4, VAR_8->qchase.qclass, VAR_7, VAR_9, VAR_8,
  VAR_2, VAR_1, &VAR_10, 0)) {
  FUNC_2(VAR_7, "for DS query parent-child nameserver search, could not generate NS lookup for", VAR_8->dsns_point);
  return FUNC_3(VAR_7, VAR_9, VAR_3);
 }

 return 0;
}
