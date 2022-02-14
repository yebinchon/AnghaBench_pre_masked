
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int mem_res; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_1__* VAR_0 ;

void
FUNC_4(uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;

 FUNC_0(VAR_0);
 VAR_4 = FUNC_2(VAR_0->mem_res, VAR_1);
 VAR_4 &= ~(VAR_2);
 VAR_4 |= VAR_3;
 FUNC_3(VAR_0->mem_res, VAR_1, VAR_4);
 FUNC_1(VAR_0);
}
