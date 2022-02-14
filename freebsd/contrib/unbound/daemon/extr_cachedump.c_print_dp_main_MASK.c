
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_2__ entry; } ;
struct packed_rrset_data {scalar_t__ security; } ;
struct dns_msg {TYPE_1__* rep; } ;
struct delegpt {scalar_t__ bogus; } ;
struct TYPE_3__ {size_t rrset_count; struct ub_packed_rrset_key** rrsets; } ;
typedef int RES ;


 int FUNC_0 (struct delegpt*,size_t*,size_t*,size_t*) ;
 int FUNC_1 (struct delegpt*,size_t*,size_t*) ;
 int FUNC_2 (int *,struct ub_packed_rrset_key*,struct packed_rrset_data*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_4(RES* VAR_1, struct delegpt* VAR_2, struct dns_msg* VAR_3)
{
 size_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;


 if(VAR_3)
     for(VAR_4=0; VAR_4<VAR_3->rep->rrset_count; VAR_4++) {
  struct ub_packed_rrset_key* VAR_10 = VAR_3->rep->rrsets[VAR_4];
  struct packed_rrset_data* VAR_11 =
   (struct packed_rrset_data*)VAR_10->entry.data;
  if(VAR_11->security == VAR_0) {
   if(!FUNC_3(VAR_1, "Address is BOGUS:\n"))
    return;
  }
  if(!FUNC_2(VAR_1, VAR_10, VAR_11, 0))
   return;
     }
 FUNC_1(VAR_2, &VAR_5, &VAR_6);
 FUNC_0(VAR_2, &VAR_7, &VAR_8, &VAR_9);

 if(!FUNC_3(VAR_1, "Delegation with %d names, of which %d "
  "can be examined to query further addresses.\n"
  "%sIt provides %d IP addresses.\n",
  (int)VAR_5, (int)VAR_6, (VAR_2->bogus?"It is BOGUS. ":""),
  (int)VAR_7))
  return;
}
