
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nsproxy {TYPE_1__* net_ns; } ;
struct ctl_table_set {int dummy; } ;
struct ctl_table_root {int dummy; } ;
struct TYPE_2__ {struct ctl_table_set sysctls; } ;



__attribute__((used)) static struct ctl_table_set *
FUNC_0(struct ctl_table_root *VAR_0, struct nsproxy *VAR_1)
{
 return &VAR_1->net_ns->sysctls;
}
