
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regional {int dummy; } ;
struct query_info {int qtype; int qname_len; int qname; } ;
struct packed_rrset_data {int dummy; } ;
struct dns_msg {TYPE_3__* rep; } ;
struct auth_zone {int dummy; } ;
struct auth_rrset {int dummy; } ;
struct auth_data {int dummy; } ;
struct TYPE_6__ {int rrset_count; TYPE_2__** rrsets; int flags; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_5__ {TYPE_1__ entry; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct auth_zone*,int ,int ,struct regional*,struct dns_msg*,struct auth_data*,struct auth_rrset*) ;
 int FUNC_2 (struct auth_zone*,int ,struct regional*,struct dns_msg*,struct packed_rrset_data*) ;
 int FUNC_3 (struct auth_data*) ;
 int FUNC_4 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_rrset*) ;

__attribute__((used)) static int
FUNC_5(struct auth_zone* VAR_1, struct query_info* VAR_2,
 struct regional* VAR_3, struct dns_msg* VAR_4, struct auth_data* VAR_5,
 struct auth_rrset* VAR_6)
{
 FUNC_3(VAR_5);

 if(!FUNC_4(VAR_1, VAR_3, VAR_4, VAR_5, VAR_6)) return 0;
 if(!FUNC_1(VAR_1, VAR_2->qname, VAR_2->qname_len, VAR_3,
  VAR_4, VAR_5, VAR_6)) return 0;
 if(FUNC_0(VAR_4->rep->flags) == VAR_0)
  return 1;
 if(VAR_4->rep->rrset_count == 0 ||
  !VAR_4->rep->rrsets[VAR_4->rep->rrset_count-1])
  return 0;
 if(!FUNC_2(VAR_1, VAR_2->qtype, VAR_3, VAR_4,
  (struct packed_rrset_data*)VAR_4->rep->rrsets[
  VAR_4->rep->rrset_count-1]->entry.data))
  return 0;
 return 1;
}
