
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dst; } ;
struct rt6_info {TYPE_1__ u; int rt6i_ref; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static __inline__ void FUNC_2(struct rt6_info *VAR_0)
{
 if (FUNC_0(&VAR_0->rt6i_ref))
  FUNC_1(&VAR_0->u.dst);
}
