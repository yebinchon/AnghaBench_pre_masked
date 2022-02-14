
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__* state; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(void)
{


    do {
      asm("": : : "memory");
    } while (VAR_0->state[FUNC_0(VAR_1, VAR_3)/sizeof(uint32_t)]
      && VAR_0->state[FUNC_0(VAR_1, VAR_2)/sizeof(uint32_t)] != 0);
}
