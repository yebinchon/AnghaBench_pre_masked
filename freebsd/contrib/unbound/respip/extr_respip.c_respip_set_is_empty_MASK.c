
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; } ;
struct respip_set {TYPE_1__ ip_tree; } ;



int
FUNC_0(const struct respip_set* VAR_0)
{
 return VAR_0 ? VAR_0->ip_tree.count == 0 : 1;
}
