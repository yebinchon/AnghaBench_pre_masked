
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_4__ {void* rrset_class; void* type; int dname_len; int dname; } ;
struct TYPE_3__ {int hash; int data; struct ub_packed_rrset_key* key; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; TYPE_1__ entry; } ;
struct regional {int dummy; } ;
struct auth_zone {int dclass; } ;
struct auth_rrset {int type; int data; } ;
struct auth_data {int namelen; int name; } ;
typedef int key ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ub_packed_rrset_key*,int ,int) ;
 struct ub_packed_rrset_key* FUNC_2 (struct ub_packed_rrset_key*,struct regional*,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static struct ub_packed_rrset_key*
FUNC_4(struct auth_zone* VAR_0, struct auth_data* VAR_1,
 struct auth_rrset* VAR_2, struct regional* VAR_3, time_t VAR_4)
{
 struct ub_packed_rrset_key VAR_5;
 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.entry.key = &VAR_5;
 VAR_5.entry.data = VAR_2->data;
 VAR_5.rk.dname = VAR_1->name;
 VAR_5.rk.dname_len = VAR_1->namelen;
 VAR_5.rk.type = FUNC_0(VAR_2->type);
 VAR_5.rk.rrset_class = FUNC_0(VAR_0->dclass);
 VAR_5.entry.hash = FUNC_3(&VAR_5.rk);
 return FUNC_2(&VAR_5, VAR_3, VAR_4);
}
