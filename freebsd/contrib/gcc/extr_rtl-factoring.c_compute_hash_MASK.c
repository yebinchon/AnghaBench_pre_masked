
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned int
FUNC_2 (rtx VAR_0)
{
  unsigned int VAR_1 = 0;
  rtx VAR_2;

  VAR_1 = FUNC_0 (VAR_0) * 100;

  VAR_2 = FUNC_1 (VAR_0);
  if (VAR_2)
    VAR_1 += FUNC_0 (VAR_2);

  return VAR_1;
}
