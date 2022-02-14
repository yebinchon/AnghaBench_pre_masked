
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* __state; } ;
struct qman_cgrs {TYPE_1__ q; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static __inline__ void FUNC_2(struct qman_cgrs *VAR_0, int VAR_1)
{
    VAR_0->q.__state[FUNC_1(VAR_1)] &= ~(0x80000000 >> FUNC_0(VAR_1));
}
