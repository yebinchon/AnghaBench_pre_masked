
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct packed_rrset_data* data; struct ub_packed_rrset_key* key; } ;
struct TYPE_5__ {void* rrset_class; void* type; int dname_len; void* dname; } ;
struct ub_packed_rrset_key {TYPE_3__ entry; TYPE_2__ rk; } ;
struct regional {int dummy; } ;
struct packed_rrset_data {int dummy; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct key_entry_key {int key_class; int namelen; int name; TYPE_1__ entry; } ;
struct key_entry_data {int rrset_data; int rrset_type; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ub_packed_rrset_key*,int ,int) ;
 int FUNC_2 (struct packed_rrset_data*) ;
 int FUNC_3 (int ) ;
 struct ub_packed_rrset_key* FUNC_4 (struct regional*,int) ;
 void* FUNC_5 (struct regional*,int ,int ) ;

struct ub_packed_rrset_key*
FUNC_6(struct key_entry_key* VAR_0, struct regional* VAR_1)
{
 struct key_entry_data* VAR_2 = (struct key_entry_data*)VAR_0->entry.data;
 struct ub_packed_rrset_key* VAR_3;
 struct packed_rrset_data* VAR_4;
 if(!VAR_2 || !VAR_2->rrset_data)
  return ((void*)0);
 VAR_3 = FUNC_4(VAR_1, sizeof(*VAR_3));
 if(!VAR_3)
  return ((void*)0);
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->rk.dname = FUNC_5(VAR_1, VAR_0->name, VAR_0->namelen);
 if(!VAR_3->rk.dname)
  return ((void*)0);
 VAR_3->rk.dname_len = VAR_0->namelen;
 VAR_3->rk.type = FUNC_0(VAR_2->rrset_type);
 VAR_3->rk.rrset_class = FUNC_0(VAR_0->key_class);
 VAR_3->entry.key = VAR_3;
 VAR_4 = FUNC_5(VAR_1, VAR_2->rrset_data,
  FUNC_3(VAR_2->rrset_data));
 if(!VAR_4)
  return ((void*)0);
 VAR_3->entry.data = VAR_4;
 FUNC_2(VAR_4);
 return VAR_3;
}
