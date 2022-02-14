
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ parent_tag; } ;
struct TYPE_5__ {TYPE_1__ flags; int parent_tag; } ;
typedef TYPE_2__ qla_host_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(qla_host_t *VAR_0)
{
        if (VAR_0->flags.parent_tag) {
                FUNC_0(VAR_0->parent_tag);
                VAR_0->flags.parent_tag = 0;
        }
}
