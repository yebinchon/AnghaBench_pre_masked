
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* lambda_vector ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static inline void
FUNC_1 (FILE * VAR_0, lambda_vector VAR_1, int VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    FUNC_0 (VAR_0, "%3d ", VAR_1[VAR_3]);
  FUNC_0 (VAR_0, "\n");
}
