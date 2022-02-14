
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int children; } ;
typedef TYPE_1__ ctl_named_node_t ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static const ctl_named_node_t *
FUNC_1(const ctl_named_node_t *VAR_0, size_t VAR_1) {
 const ctl_named_node_t *VAR_2 = FUNC_0(VAR_0->children);

 return (VAR_2 ? &VAR_2[VAR_1] : ((void*)0));
}
