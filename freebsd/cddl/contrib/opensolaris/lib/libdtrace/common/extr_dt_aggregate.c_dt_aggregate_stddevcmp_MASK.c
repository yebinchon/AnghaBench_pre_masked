
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_1(int64_t *VAR_2, int64_t *VAR_3)
{
 uint64_t VAR_4 = FUNC_0((uint64_t *)VAR_2, 1);
 uint64_t VAR_5 = FUNC_0((uint64_t *)VAR_3, 1);

 if (VAR_4 < VAR_5)
  return (VAR_1);

 if (VAR_4 > VAR_5)
  return (VAR_0);

 return (0);
}
