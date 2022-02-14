
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct val_env {int dummy; } ;
struct TYPE_6__ {int data; struct ub_packed_rrset_key* key; } ;
struct TYPE_5__ {int dname_len; int dname; scalar_t__ flags; void* rrset_class; void* type; } ;
struct ub_packed_rrset_key {TYPE_3__ entry; TYPE_2__ rk; } ;
struct module_qstate {int dummy; } ;
struct module_env {int dummy; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct key_entry_key {int namelen; int name; int key_class; TYPE_1__ entry; } ;
struct key_entry_data {int algo; int rrset_data; int rrset_type; } ;
typedef int sldns_pkt_section ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct module_env*,struct val_env*,struct ub_packed_rrset_key*,struct ub_packed_rrset_key*,int ,char**,int ,struct module_qstate*) ;

enum sec_status
FUNC_2(struct module_env* VAR_0, struct val_env* VAR_1,
        struct ub_packed_rrset_key* VAR_2, struct key_entry_key* VAR_3,
 char** VAR_4, sldns_pkt_section VAR_5, struct module_qstate* VAR_6)
{

 struct ub_packed_rrset_key VAR_7;
 struct key_entry_data* VAR_8 = (struct key_entry_data*)VAR_3->entry.data;
 enum sec_status VAR_9;
 VAR_7.rk.type = FUNC_0(VAR_8->rrset_type);
 VAR_7.rk.rrset_class = FUNC_0(VAR_3->key_class);
 VAR_7.rk.flags = 0;
 VAR_7.rk.dname = VAR_3->name;
 VAR_7.rk.dname_len = VAR_3->namelen;
 VAR_7.entry.key = &VAR_7;
 VAR_7.entry.data = VAR_8->rrset_data;
 VAR_9 = FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_7, VAR_8->algo, VAR_4,
  VAR_5, VAR_6);
 return VAR_9;
}
