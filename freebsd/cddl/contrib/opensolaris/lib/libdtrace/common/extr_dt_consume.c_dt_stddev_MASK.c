
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int int64_t ;


 int FUNC_0 (scalar_t__*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__*) ;

uint64_t
FUNC_4(uint64_t *VAR_0, uint64_t VAR_1)
{
 uint64_t VAR_2[2];
 uint64_t VAR_3[2];
 int64_t VAR_4;
 uint64_t VAR_5[2];

 if (VAR_0[0] == 0)
  return (0);







 FUNC_0(VAR_0 + 2, VAR_1, VAR_2);
 FUNC_0(VAR_2, VAR_1, VAR_2);
 FUNC_0(VAR_2, VAR_0[0], VAR_2);

 VAR_4 = (int64_t)VAR_0[1] / (int64_t)VAR_1 / (int64_t)VAR_0[0];

 if (VAR_4 < 0)
  VAR_4 = -VAR_4;

 FUNC_1((uint64_t)VAR_4, (uint64_t)VAR_4, VAR_3);

 FUNC_3(VAR_2, VAR_3, VAR_5);

 return (FUNC_2(VAR_5));
}
