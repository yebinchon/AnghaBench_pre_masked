
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ub_packed_rrset_key {int dummy; } ;
struct regional {int dummy; } ;
struct dns_msg {TYPE_1__* rep; } ;
struct auth_zone {int dclass; } ;
struct auth_rrset {int dummy; } ;
struct auth_data {int dummy; } ;
struct TYPE_2__ {size_t rrset_count; int an_numrrsets; struct ub_packed_rrset_key** rrsets; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,size_t,struct regional*,struct auth_data*,struct auth_rrset*,int ,struct ub_packed_rrset_key**) ;
 int FUNC_1 (struct regional*,struct dns_msg*) ;
 int FUNC_2 (struct dns_msg*) ;

__attribute__((used)) static int
FUNC_3(struct auth_zone* VAR_1, uint8_t* VAR_2, size_t VAR_3,
 struct regional* VAR_4, struct dns_msg* VAR_5, struct auth_data* VAR_6,
 struct auth_rrset* VAR_7)
{
 struct ub_packed_rrset_key* VAR_8;

 if(!FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6, VAR_7,
  VAR_1->dclass, &VAR_8)) {

  return 0;
 }
 if(!VAR_8) {

  VAR_5->rep->flags |= VAR_0;
  return 1;
 }

 if(!FUNC_1(VAR_4, VAR_5))
  return 0;
 VAR_5->rep->rrsets[VAR_5->rep->rrset_count] = VAR_8;
 VAR_5->rep->rrset_count++;
 VAR_5->rep->an_numrrsets++;
 FUNC_2(VAR_5);
 return 1;
}
