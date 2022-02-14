
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pingpong_context {int gidx; TYPE_1__* rem_dest; } ;
struct TYPE_4__ {int hop_limit; int sgid_index; int dgid; } ;
struct ibv_ah_attr {int is_global; TYPE_2__ grh; } ;
struct TYPE_3__ {int gid; } ;



__attribute__((used)) static void FUNC_0(struct ibv_ah_attr *VAR_0, struct pingpong_context *VAR_1,
   int VAR_2)
{
 VAR_0->is_global = 1;
 VAR_0->grh.hop_limit = 5;
 VAR_0->grh.dgid = VAR_1->rem_dest[VAR_2].gid;
 VAR_0->grh.sgid_index = VAR_1->gidx;
}
