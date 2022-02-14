
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static unsigned
FUNC_3 (rtx VAR_1)
{
  unsigned VAR_2 = 0;
  rtx VAR_3;

  for (; VAR_1; VAR_1 = FUNC_0 (VAR_1))
    {
      VAR_3 = FUNC_2 (VAR_1);
      if (VAR_3)
 VAR_2 += FUNC_1 (VAR_3, VAR_0);
      else
 VAR_2++;
    }

  return VAR_2;
}
