
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int low; int high; } ;
typedef TYPE_1__ t_FmPhysAddr ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static __inline__ void FUNC_2(volatile t_FmPhysAddr *VAR_0, uint64_t VAR_1)
{
    FUNC_1(VAR_0->high,(uint8_t)((VAR_1 & 0x000000ff00000000LL) >> 32));
    FUNC_0(VAR_0->low,(uint32_t)VAR_1);
}
