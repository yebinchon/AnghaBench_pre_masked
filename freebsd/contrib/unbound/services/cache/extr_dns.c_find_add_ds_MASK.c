
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_6__ {int lock; } ;
struct ub_packed_rrset_key {TYPE_3__ entry; } ;
struct regional {int dummy; } ;
struct module_env {int rrset_cache; } ;
struct TYPE_4__ {int qclass; } ;
struct dns_msg {TYPE_2__* rep; TYPE_1__ qinfo; } ;
struct delegpt {int namelen; int name; } ;
struct TYPE_5__ {size_t rrset_count; int ns_numrrsets; int * rrsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct ub_packed_rrset_key*,int ) ;
 int FUNC_2 (struct ub_packed_rrset_key*,struct regional*,int ) ;
 struct ub_packed_rrset_key* FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct module_env* VAR_2, struct regional* VAR_3,
 struct dns_msg* VAR_4, struct delegpt* VAR_5, time_t VAR_6)
{

 struct ub_packed_rrset_key* VAR_7 = FUNC_3(
  VAR_2->rrset_cache, VAR_5->name, VAR_5->namelen, VAR_0,
  VAR_4->qinfo.qclass, 0, VAR_6, 0);
 if(!VAR_7) {


  VAR_7 = FUNC_3(VAR_2->rrset_cache, VAR_5->name,
   VAR_5->namelen, VAR_1, VAR_4->qinfo.qclass,
   0, VAR_6, 0);



  if(VAR_7 && FUNC_1(VAR_7, VAR_0)) {
   FUNC_0(&VAR_7->entry.lock);
   VAR_7 = ((void*)0);
  }
 }
 if(VAR_7) {

  if((VAR_4->rep->rrsets[VAR_4->rep->rrset_count] =
   FUNC_2(VAR_7, VAR_3, VAR_6))) {
   VAR_4->rep->ns_numrrsets++;
   VAR_4->rep->rrset_count++;
  }
  FUNC_0(&VAR_7->entry.lock);
 }
}
