
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vhpet {TYPE_1__* timer; } ;
struct TYPE_2__ {scalar_t__ comprate; int compval; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static void
FUNC_1(struct vhpet *VAR_0, int VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5;

 FUNC_0(VAR_0->timer[VAR_1].comprate != 0, ("hpet t%d is not periodic", VAR_1));

 VAR_3 = VAR_0->timer[VAR_1].compval;
 VAR_4 = VAR_0->timer[VAR_1].comprate;
 VAR_5 = VAR_3 + ((VAR_2 - VAR_3) / VAR_4 + 1) * VAR_4;

 VAR_0->timer[VAR_1].compval = VAR_5;
}
