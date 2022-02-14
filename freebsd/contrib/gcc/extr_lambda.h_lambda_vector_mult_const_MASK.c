
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* lambda_vector ;


 int FUNC_0 (int*,int) ;

__attribute__((used)) static inline void
FUNC_1 (lambda_vector VAR_0, lambda_vector VAR_1,
     int VAR_2, int VAR_3)
{
  int VAR_4;

  if (VAR_3 == 0)
    FUNC_0 (VAR_1, VAR_2);
  else
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
      VAR_1[VAR_4] = VAR_3 * VAR_0[VAR_4];
}
