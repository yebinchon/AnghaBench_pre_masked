
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int p_sw; } ;
struct TYPE_8__ {int counter_down; TYPE_1__ remote_hca_or_sw; } ;
typedef TYPE_2__ ftree_port_group_t ;


 int FUNC_0 (TYPE_2__ const**,TYPE_2__ const**) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(const ftree_port_group_t * VAR_0,
            const ftree_port_group_t * VAR_1)
{
 int VAR_2 = VAR_0->counter_down - VAR_1->counter_down;
 if (VAR_2 > 0)
  return 1;
 if (VAR_2 < 0)
  return -1;


 do {
  uint32_t VAR_3 =
      FUNC_1(VAR_0->remote_hca_or_sw.p_sw);
  uint32_t VAR_4 =
      FUNC_1(VAR_1->remote_hca_or_sw.p_sw);
  VAR_2 = VAR_3 - VAR_4;
  if (VAR_2 > 0)
   return 1;
 } while (0);

 return FUNC_0(&VAR_0, &VAR_1);
}
