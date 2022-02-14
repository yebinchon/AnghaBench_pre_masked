
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* lambda_vector ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline int
FUNC_1 (lambda_vector VAR_0, int VAR_1, int VAR_2)
{
  int VAR_3;
  int VAR_4 = -1;

  FUNC_0 (VAR_2 <= VAR_1);
  for (VAR_3 = VAR_2; VAR_3 < VAR_1; VAR_3++)
    {
      if (VAR_0[VAR_3])
 if (VAR_4 < 0 || VAR_0[VAR_3] < VAR_0[VAR_4])
   VAR_4 = VAR_3;
    }
  FUNC_0 (VAR_4 >= 0);

  return VAR_4;
}
