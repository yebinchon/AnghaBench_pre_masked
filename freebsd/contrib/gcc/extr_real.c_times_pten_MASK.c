
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REAL_VALUE_TYPE ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (REAL_VALUE_TYPE *VAR_0, int VAR_1)
{
  REAL_VALUE_TYPE VAR_2, *VAR_3;
  bool VAR_4 = (VAR_1 < 0);
  int VAR_5;

  if (VAR_4)
    {
      VAR_1 = -VAR_1;
      VAR_2 = *FUNC_2 (1);
      VAR_3 = &VAR_2;
    }
  else
    VAR_3 = VAR_0;

  for (VAR_5 = 0; VAR_1 > 0; ++VAR_5, VAR_1 >>= 1)
    if (VAR_1 & 1)
      FUNC_1 (VAR_3, VAR_3, FUNC_3 (VAR_5));

  if (VAR_4)
    FUNC_0 (VAR_0, VAR_0, &VAR_2);
}
