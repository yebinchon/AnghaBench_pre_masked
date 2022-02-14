
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int hashval_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static hashval_t
FUNC_5 (const void *VAR_1)
{
  rtx VAR_2 = (rtx) VAR_1;
  hashval_t VAR_3;

  if (FUNC_3 (VAR_2) == VAR_0)
    VAR_3 = FUNC_1 (VAR_2) ^ FUNC_0 (VAR_2);
  else
    {
      VAR_3 = FUNC_4 (FUNC_2 (VAR_2));

      VAR_3 ^= FUNC_3 (VAR_2);
    }
  return VAR_3;
}
