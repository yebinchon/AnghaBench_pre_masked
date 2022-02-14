
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dropped; int * sw; scalar_t__ heap_id; int state; scalar_t__ distance; int * used_link; scalar_t__ hops; int * links; scalar_t__ num_hca; scalar_t__ lid; scalar_t__ guid; } ;
typedef TYPE_1__ vertex_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(vertex_t * VAR_2)
{
 VAR_2->guid = 0;
 VAR_2->lid = 0;
 VAR_2->num_hca = 0;
 VAR_2->links = ((void*)0);
 VAR_2->hops = 0;
 VAR_2->used_link = ((void*)0);
 VAR_2->distance = 0;
 VAR_2->state = VAR_1;
 VAR_2->heap_id = 0;
 VAR_2->sw = ((void*)0);
 VAR_2->dropped = VAR_0;
}
