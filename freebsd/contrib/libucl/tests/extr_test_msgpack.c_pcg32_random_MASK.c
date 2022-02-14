
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {unsigned long long state; int inc; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_0 (void)
{
 uint64_t VAR_1 = VAR_0.state;

 VAR_0.state = VAR_1 * 6364136223846793005ULL + (VAR_0.inc | 1);
 uint32_t VAR_2 = ((VAR_1 >> 18u) ^ VAR_1) >> 27u;
 uint32_t VAR_3 = VAR_1 >> 59u;
 return (VAR_2 >> VAR_3) | (VAR_2 << ((-VAR_3) & 31));
}
