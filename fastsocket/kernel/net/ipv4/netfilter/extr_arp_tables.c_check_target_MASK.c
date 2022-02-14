
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_tgchk_param {char const* table; int family; int hook_mask; int targinfo; TYPE_1__* target; struct arpt_entry* entryinfo; } ;
struct TYPE_5__ {TYPE_1__* target; } ;
struct TYPE_6__ {TYPE_2__ kernel; scalar_t__ target_size; } ;
struct arpt_entry_target {TYPE_3__ u; int data; } ;
struct arpt_entry {int comefrom; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 struct arpt_entry_target* FUNC_0 (struct arpt_entry*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct xt_tgchk_param*,scalar_t__,int ,int) ;

__attribute__((used)) static inline int FUNC_3(struct arpt_entry *VAR_1, const char *VAR_2)
{
 struct arpt_entry_target *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;
 struct xt_tgchk_param VAR_5 = {
  .table = VAR_2,
  .entryinfo = VAR_1,
  .target = VAR_3->u.kernel.target,
  .targinfo = VAR_3->data,
  .hook_mask = VAR_1->comefrom,
  .family = VAR_0,
 };

 VAR_4 = FUNC_2(&VAR_5, VAR_3->u.target_size - sizeof(*VAR_3), 0, 0);
 if (VAR_4 < 0) {
  FUNC_1("arp_tables: check failed for `%s'.\n",
    VAR_3->u.kernel.target->name);
  return VAR_4;
 }
 return 0;
}
