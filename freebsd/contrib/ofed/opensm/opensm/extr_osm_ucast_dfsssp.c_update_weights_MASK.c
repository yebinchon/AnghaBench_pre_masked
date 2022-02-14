
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t num_hca; TYPE_1__* used_link; } ;
typedef TYPE_2__ vertex_t ;
typedef size_t uint32_t ;
struct TYPE_8__ {int p_log; } ;
typedef TYPE_3__ osm_ucast_mgr_t ;
struct TYPE_6__ {size_t from; int weight; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(osm_ucast_mgr_t * VAR_0, vertex_t * VAR_1,
      uint32_t VAR_2)
{
 uint32_t VAR_3 = 0, VAR_4 = 0;
 uint32_t VAR_5 = 0;

 FUNC_0(VAR_0->p_log);

 for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++) {

  if (!(VAR_1[VAR_3].used_link))
   continue;
  VAR_5 = VAR_1[VAR_3].num_hca;

  VAR_4 = VAR_3;
  while (VAR_1[VAR_4].used_link) {

   VAR_1[VAR_4].used_link->weight += VAR_5;

   VAR_4 = VAR_1[VAR_4].used_link->from;
  }
 }

 FUNC_1(VAR_0->p_log);
}
