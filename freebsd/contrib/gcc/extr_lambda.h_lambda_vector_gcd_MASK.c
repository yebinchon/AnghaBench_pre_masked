
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* lambda_vector ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static inline int
FUNC_1 (lambda_vector VAR_0, int VAR_1)
{
  int VAR_2;
  int VAR_3 = 0;

  if (VAR_1 > 0)
    {
      VAR_3 = VAR_0[0];
      for (VAR_2 = 1; VAR_2 < VAR_1; VAR_2++)
 VAR_3 = FUNC_0 (VAR_3, VAR_0[VAR_2]);
    }
  return VAR_3;
}
