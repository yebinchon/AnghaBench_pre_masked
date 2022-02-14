
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int sbintime_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(sbintime_t VAR_1)
{

 VAR_1 += (uint64_t)VAR_1 >> 1;
 if (sizeof(long) >= sizeof(sbintime_t))
  return (FUNC_0(VAR_1));
 if (VAR_1 >= VAR_0)
  return (FUNC_0(((uint64_t)VAR_1) >> 32) + 32);
 return (FUNC_0(VAR_1));
}
