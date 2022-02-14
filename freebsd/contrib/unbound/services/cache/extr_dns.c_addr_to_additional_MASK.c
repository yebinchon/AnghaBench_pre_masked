
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct ub_packed_rrset_key {int dummy; } ;
struct regional {int dummy; } ;
struct dns_msg {TYPE_1__* rep; } ;
struct TYPE_2__ {size_t rrset_count; int ar_numrrsets; int * rrsets; } ;


 int FUNC_0 (struct ub_packed_rrset_key*,struct regional*,int ) ;

__attribute__((used)) static void
FUNC_1(struct ub_packed_rrset_key* VAR_0, struct regional* VAR_1,
 struct dns_msg* VAR_2, time_t VAR_3)
{
 if((VAR_2->rep->rrsets[VAR_2->rep->rrset_count] =
  FUNC_0(VAR_0, VAR_1, VAR_3))) {
  VAR_2->rep->ar_numrrsets++;
  VAR_2->rep->rrset_count++;
 }
}
