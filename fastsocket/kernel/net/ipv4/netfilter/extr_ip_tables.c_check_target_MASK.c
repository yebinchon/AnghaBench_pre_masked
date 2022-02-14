
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xt_tgchk_param {char const* table; int family; int hook_mask; int targinfo; TYPE_3__* target; struct ipt_entry* entryinfo; } ;
struct TYPE_8__ {TYPE_3__* target; } ;
struct TYPE_6__ {TYPE_4__ kernel; scalar_t__ target_size; } ;
struct ipt_entry_target {TYPE_2__ u; int data; } ;
struct TYPE_5__ {int invflags; int proto; } ;
struct ipt_entry {TYPE_1__ ip; int comefrom; } ;
struct TYPE_7__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 struct ipt_entry_target* FUNC_1 (struct ipt_entry*) ;
 int FUNC_2 (struct xt_tgchk_param*,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ipt_entry *VAR_2, const char *VAR_3)
{
 struct ipt_entry_target *VAR_4 = FUNC_1(VAR_2);
 struct xt_tgchk_param VAR_5 = {
  .table = VAR_3,
  .entryinfo = VAR_2,
  .target = VAR_4->u.kernel.target,
  .targinfo = VAR_4->data,
  .hook_mask = VAR_2->comefrom,
  .family = VAR_1,
 };
 int VAR_6;

 VAR_6 = FUNC_2(&VAR_5, VAR_4->u.target_size - sizeof(*VAR_4),
       VAR_2->ip.proto, VAR_2->ip.invflags & VAR_0);
 if (VAR_6 < 0) {
  FUNC_0("ip_tables: check failed for `%s'.\n",
    VAR_4->u.kernel.target->name);
  return VAR_6;
 }
 return 0;
}
