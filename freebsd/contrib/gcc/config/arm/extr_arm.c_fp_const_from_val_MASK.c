
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REAL_VALUE_TYPE ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 char const** VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static const char *
FUNC_3 (REAL_VALUE_TYPE *VAR_3)
{
  int VAR_4;

  if (!VAR_0)
    FUNC_2 ();

  for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
    if (FUNC_0 (*VAR_3, VAR_2[VAR_4]))
      return VAR_1[VAR_4];

  FUNC_1 ();
}
