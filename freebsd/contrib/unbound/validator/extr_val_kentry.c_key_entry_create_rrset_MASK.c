
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ time_t ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; TYPE_1__ entry; } ;
struct regional {int dummy; } ;
struct packed_rrset_data {scalar_t__ ttl; } ;
struct key_entry_key {int dummy; } ;
struct key_entry_data {struct packed_rrset_data* rrset_data; int * algo; int rrset_type; int * reason; scalar_t__ isbad; scalar_t__ ttl; } ;


 int FUNC_0 (struct regional*,int *,size_t,int ,struct key_entry_key**,struct key_entry_data**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct packed_rrset_data*) ;
 int FUNC_3 (struct packed_rrset_data*) ;
 scalar_t__ FUNC_4 (struct regional*,struct packed_rrset_data*,int ) ;
 scalar_t__ FUNC_5 (struct regional*,char*) ;

struct key_entry_key*
FUNC_6(struct regional* VAR_0,
 uint8_t* VAR_1, size_t VAR_2, uint16_t VAR_3,
 struct ub_packed_rrset_key* VAR_4, uint8_t* VAR_5, time_t VAR_6)
{
 struct key_entry_key* VAR_7;
 struct key_entry_data* VAR_8;
 struct packed_rrset_data* VAR_9 = (struct packed_rrset_data*)
  VAR_4->entry.data;
 if(!FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_7, &VAR_8))
  return ((void*)0);
 VAR_8->ttl = VAR_9->ttl + VAR_6;
 VAR_8->isbad = 0;
 VAR_8->reason = ((void*)0);
 VAR_8->rrset_type = FUNC_1(VAR_4->rk.type);
 VAR_8->rrset_data = (struct packed_rrset_data*)FUNC_4(VAR_0,
  VAR_9, FUNC_3(VAR_9));
 if(!VAR_8->rrset_data)
  return ((void*)0);
 if(VAR_5) {
  VAR_8->algo = (uint8_t*)FUNC_5(VAR_0, (char*)VAR_5);
  if(!VAR_8->algo)
   return ((void*)0);
 } else VAR_8->algo = ((void*)0);
 FUNC_2(VAR_8->rrset_data);
 return VAR_7;
}
