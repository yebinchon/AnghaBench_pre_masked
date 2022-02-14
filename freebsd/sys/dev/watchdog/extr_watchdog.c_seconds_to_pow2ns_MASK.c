
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;


 unsigned long long FUNC_0 (unsigned long long) ;

__attribute__((used)) static int
FUNC_1(int VAR_0)
{
 uint64_t VAR_1;
 uint64_t VAR_2;
 uint64_t VAR_3;

 VAR_2 = ((uint64_t)VAR_0) * 1000000000ULL;
 VAR_1 = FUNC_0(VAR_2);
 VAR_3 = 1ULL << VAR_1;
 if (VAR_3 <= VAR_2) {
  VAR_1++;
 }
 return (VAR_1);
}
