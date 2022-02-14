
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int counter_up; } ;
typedef TYPE_1__ ftree_port_group_t ;


 int FUNC_0 (TYPE_1__ const**,TYPE_1__ const**) ;

__attribute__((used)) static inline int FUNC_1(const ftree_port_group_t * VAR_0,
                                             const ftree_port_group_t * VAR_1)
{
        int VAR_2 = VAR_0->counter_up - VAR_1->counter_up;
        if (VAR_2 > 0)
                return 1;
        if (VAR_2 < 0)
                return -1;


        return FUNC_0 (&VAR_0,&VAR_1);
}
