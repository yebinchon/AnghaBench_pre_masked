
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int REAL_VALUE_TYPE ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 char const** VAR_1 ;
 int * VAR_2 ;

const char *
FUNC_4 (rtx VAR_3)
{
  REAL_VALUE_TYPE VAR_4;
  int VAR_5;

  if (!VAR_0)
    FUNC_3 ();

  FUNC_1 (VAR_4, VAR_3);
  for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
    if (FUNC_0 (VAR_4, VAR_2[VAR_5]))
      return VAR_1[VAR_5];

  FUNC_2 ();
}
