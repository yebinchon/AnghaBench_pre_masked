
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ml_offset; } ;
typedef TYPE_1__ multilist_t ;
typedef int multilist_node_t ;



__attribute__((used)) static multilist_node_t *
FUNC_0(multilist_t *VAR_0, void *VAR_1)
{
 return ((multilist_node_t *)((char *)VAR_1 + VAR_0->ml_offset));
}
