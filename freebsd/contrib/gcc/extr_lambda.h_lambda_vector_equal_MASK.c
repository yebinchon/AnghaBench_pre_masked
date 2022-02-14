
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* lambda_vector ;



__attribute__((used)) static inline bool
FUNC_0 (lambda_vector VAR_0, lambda_vector VAR_1, int VAR_2)
{
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    if (VAR_0[VAR_3] != VAR_1[VAR_3])
      return 0;
  return 1;
}
