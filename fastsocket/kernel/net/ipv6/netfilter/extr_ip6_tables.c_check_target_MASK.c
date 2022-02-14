
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xt_tgchk_param {char const* table; int family; int hook_mask; int targinfo; TYPE_2__* target; struct ip6t_entry* entryinfo; } ;
struct TYPE_7__ {TYPE_2__* target; } ;
struct TYPE_8__ {TYPE_3__ kernel; scalar_t__ target_size; } ;
struct ip6t_entry_target {TYPE_4__ u; int data; } ;
struct TYPE_5__ {int invflags; int proto; } ;
struct ip6t_entry {TYPE_1__ ipv6; int comefrom; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 struct ip6t_entry_target* FUNC_1 (struct ip6t_entry*) ;
 int FUNC_2 (struct xt_tgchk_param*,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ip6t_entry *VAR_2, const char *VAR_3)
{
 struct ip6t_entry_target *VAR_4 = FUNC_1(VAR_2);
 struct xt_tgchk_param VAR_5 = {
  .table = VAR_3,
  .entryinfo = VAR_2,
  .target = VAR_4->u.kernel.target,
  .targinfo = VAR_4->data,
  .hook_mask = VAR_2->comefrom,
  .family = VAR_1,
 };
 int VAR_6;

 VAR_4 = FUNC_1(VAR_2);
 VAR_6 = FUNC_2(&VAR_5, VAR_4->u.target_size - sizeof(*VAR_4),
       VAR_2->ipv6.proto, VAR_2->ipv6.invflags & VAR_0);
 if (VAR_6 < 0) {
  FUNC_0("ip_tables: check failed for `%s'.\n",
    VAR_4->u.kernel.target->name);
  return VAR_6;
 }
 return 0;
}
