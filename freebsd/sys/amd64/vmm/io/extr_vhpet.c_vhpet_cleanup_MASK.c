
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhpet {TYPE_1__* timer; } ;
struct TYPE_2__ {int callout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vhpet*,int ) ;

void
FUNC_2(struct vhpet *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_0(&VAR_2->timer[VAR_3].callout);

 FUNC_1(VAR_2, VAR_0);
}
