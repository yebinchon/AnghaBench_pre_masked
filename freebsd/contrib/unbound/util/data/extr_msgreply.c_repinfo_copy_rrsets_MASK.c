
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct packed_rrset_data {int dummy; } ;
typedef struct packed_rrset_data uint8_t ;
struct TYPE_4__ {void* data; int hash; } ;
struct TYPE_3__ {size_t dname_len; struct packed_rrset_data* dname; } ;
struct ub_packed_rrset_key {TYPE_2__ entry; TYPE_1__ rk; int id; } ;
struct reply_info {size_t rrset_count; struct ub_packed_rrset_key** rrsets; } ;
struct regional {int dummy; } ;


 scalar_t__ FUNC_0 (struct packed_rrset_data*,size_t) ;
 int FUNC_1 (struct packed_rrset_data*) ;
 size_t FUNC_2 (struct packed_rrset_data*) ;
 scalar_t__ FUNC_3 (struct regional*,struct packed_rrset_data*,size_t) ;

__attribute__((used)) static int
FUNC_4(struct reply_info* VAR_0, struct reply_info* VAR_1,
 struct regional* VAR_2)
{
 size_t VAR_3, VAR_4;
 struct packed_rrset_data* VAR_5, *VAR_6;
 struct ub_packed_rrset_key* VAR_7, *VAR_8;
 for(VAR_3=0; VAR_3<VAR_0->rrset_count; VAR_3++) {
  VAR_7 = VAR_1->rrsets[VAR_3];
  VAR_8 = VAR_0->rrsets[VAR_3];
  VAR_5 = (struct packed_rrset_data*)VAR_7->entry.data;
  VAR_8->entry.hash = VAR_7->entry.hash;
  VAR_8->rk = VAR_7->rk;
  if(VAR_2) {
   VAR_8->id = VAR_7->id;
   VAR_8->rk.dname = (uint8_t*)FUNC_3(VAR_2,
    VAR_7->rk.dname, VAR_7->rk.dname_len);
  } else
   VAR_8->rk.dname = (uint8_t*)FUNC_0(VAR_7->rk.dname,
    VAR_7->rk.dname_len);
  if(!VAR_8->rk.dname)
   return 0;
  VAR_4 = FUNC_2(VAR_5);
  if(VAR_2)
   VAR_6 = (struct packed_rrset_data*)FUNC_3(
    VAR_2, VAR_5, VAR_4);
  else VAR_6 = (struct packed_rrset_data*)FUNC_0(VAR_5, VAR_4);
  if(!VAR_6)
   return 0;
  FUNC_1(VAR_6);
  VAR_8->entry.data = (void*)VAR_6;
 }
 return 1;
}
