
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int time_t ;
struct TYPE_4__ {int lock; scalar_t__ data; } ;
struct TYPE_3__ {int dname; } ;
struct ub_packed_rrset_key {TYPE_2__ entry; TYPE_1__ rk; } ;
struct regional {int dummy; } ;
struct packed_rrset_data {int count; } ;
struct module_env {int dummy; } ;
struct dns_msg {int dummy; } ;
struct delegpt {int dummy; } ;


 int VAR_0 ;
 struct delegpt* FUNC_0 (struct regional*) ;
 int FUNC_1 (struct delegpt*,struct regional*,struct ub_packed_rrset_key*,int ) ;
 int FUNC_2 (struct delegpt*,struct regional*,int ) ;
 int FUNC_3 (struct dns_msg*,struct regional*,struct ub_packed_rrset_key*,int ) ;
 struct dns_msg* FUNC_4 (int *,size_t,int ,int ,struct regional*,int) ;
 int FUNC_5 (struct module_env*,int ,struct regional*,struct delegpt*,int ,struct dns_msg**) ;
 int FUNC_6 (struct module_env*,struct regional*,struct dns_msg*,struct delegpt*,int ) ;
 struct ub_packed_rrset_key* FUNC_7 (struct module_env*,int *,size_t,int ,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;

struct delegpt*
FUNC_10(struct module_env* VAR_1, uint8_t* VAR_2,
 size_t VAR_3, uint16_t VAR_4, uint16_t VAR_5,
 struct regional* VAR_6, struct dns_msg** VAR_7, time_t VAR_8)
{

 struct ub_packed_rrset_key* VAR_9;
 struct packed_rrset_data* VAR_10;
 struct delegpt* VAR_11;

 VAR_9 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_5, VAR_8,
  VAR_0, 0);
 if(!VAR_9)
  return ((void*)0);
 VAR_10 = (struct packed_rrset_data*)VAR_9->entry.data;

 VAR_11 = FUNC_0(VAR_6);
 if(!VAR_11 || !FUNC_2(VAR_11, VAR_6, VAR_9->rk.dname)) {
  FUNC_8(&VAR_9->entry.lock);
  FUNC_9("find_delegation: out of memory");
  return ((void*)0);
 }

 if(VAR_7) {





  *VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
   2 + VAR_10->count*2);
  if(!*VAR_7 || !FUNC_3(*VAR_7, VAR_6, VAR_9, VAR_8)) {
   FUNC_8(&VAR_9->entry.lock);
   FUNC_9("find_delegation: out of memory");
   return ((void*)0);
  }
 }
 if(!FUNC_1(VAR_11, VAR_6, VAR_9, 0))
  FUNC_9("find_delegation: addns out of memory");
 FUNC_8(&VAR_9->entry.lock);

 if(VAR_7)
  FUNC_6(VAR_1, VAR_6, *VAR_7, VAR_11, VAR_8);

 if(!FUNC_5(VAR_1, VAR_5, VAR_6, VAR_11, VAR_8, VAR_7))
  FUNC_9("find_delegation: addrs out of memory");
 return VAR_11;
}
