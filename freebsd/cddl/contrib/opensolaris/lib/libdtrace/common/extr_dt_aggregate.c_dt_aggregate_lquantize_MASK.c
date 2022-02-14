
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(int64_t *VAR_0, int64_t *VAR_1, size_t VAR_2)
{
 int64_t VAR_3 = *VAR_0++;
 uint16_t VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 <= VAR_4 + 1; VAR_5++)
  VAR_0[VAR_5] = VAR_0[VAR_5] + VAR_1[VAR_5 + 1];
}
