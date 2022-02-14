
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhpet {TYPE_1__* timer; } ;
struct TYPE_2__ {int cap_config; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vhpet*,int) ;

__attribute__((used)) static __inline int
FUNC_1(struct vhpet *VAR_1, int VAR_2)
{




 if (FUNC_0(VAR_1, VAR_2))
  return (0);

 return ((VAR_1->timer[VAR_2].cap_config & VAR_0) >> 9);
}
