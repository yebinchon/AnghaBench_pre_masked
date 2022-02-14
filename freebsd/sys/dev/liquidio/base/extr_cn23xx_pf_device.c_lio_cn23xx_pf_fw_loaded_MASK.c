
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct octeon_device {int dummy; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long FUNC_0 (struct octeon_device*,int ) ;

int
FUNC_1(struct octeon_device *VAR_2)
{
 uint64_t VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 return ((VAR_3 >> VAR_1) & 1ULL);
}
