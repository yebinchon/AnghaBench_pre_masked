
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* lambda_vector ;



__attribute__((used)) static inline int
FUNC_0 (lambda_vector VAR_0, int VAR_1, int VAR_2)
{
  int VAR_3 = VAR_2;
  while (VAR_3 < VAR_1 && VAR_0[VAR_3] == 0)
    VAR_3++;
  return VAR_3;
}
