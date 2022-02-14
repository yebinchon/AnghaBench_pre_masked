
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_5__ {scalar_t__ targ; scalar_t__ init; TYPE_1__* sport; } ;
typedef TYPE_2__ ocs_node_t ;
typedef int ocs_node_enable_e ;
struct TYPE_4__ {scalar_t__ enable_tgt; scalar_t__ enable_ini; } ;



__attribute__((used)) static inline ocs_node_enable_e FUNC_0(ocs_node_t *VAR_0)
{
 uint32_t VAR_1 = 0;

 if (VAR_0->sport->enable_ini) VAR_1 |= (1U << 3);
 if (VAR_0->sport->enable_tgt) VAR_1 |= (1U << 2);
 if (VAR_0->init) VAR_1 |= (1U << 1);
 if (VAR_0->targ) VAR_1 |= (1U << 0);
 return (ocs_node_enable_e) VAR_1;
}
