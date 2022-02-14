
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;


 unsigned long long VAR_0 ;

__attribute__((used)) static int FUNC_0(u64 VAR_1)
{
 u64 VAR_2 = VAR_1 & VAR_0;
 int VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 64; VAR_4++) {
  if (VAR_2 & (1ULL << VAR_4))
   VAR_3++;
 }

 VAR_3 *= sizeof(u64);

 return VAR_3;
}
