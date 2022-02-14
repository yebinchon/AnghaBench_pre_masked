
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int time_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static uint64_t
FUNC_0(time_t VAR_1, long VAR_2)
{
 uint64_t VAR_3;

 VAR_3 = VAR_1;
 VAR_3 *= 10000000;
 VAR_3 += VAR_2 / 100;
 VAR_3 += VAR_0;
 return (VAR_3);
}
