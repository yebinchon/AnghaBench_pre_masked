
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bq_node_offset; } ;
typedef TYPE_1__ bqueue_t ;
typedef int bqueue_node_t ;



__attribute__((used)) static inline bqueue_node_t *
FUNC_0(bqueue_t *VAR_0, void *VAR_1)
{
 return ((bqueue_node_t *)((char *)VAR_1 + VAR_0->bq_node_offset));
}
