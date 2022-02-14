
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* sw; scalar_t__ dropped; } ;
typedef TYPE_2__ vertex_t ;
typedef size_t uint32_t ;
struct TYPE_4__ {scalar_t__ num_of_mcm; scalar_t__ is_mc_member; } ;



__attribute__((used)) static void FUNC_0(vertex_t * VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2 = 0;

 for (VAR_2 = 1; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0[VAR_2].dropped)
   continue;

  VAR_0[VAR_2].sw->is_mc_member = 0;
  VAR_0[VAR_2].sw->num_of_mcm = 0;
 }
}
