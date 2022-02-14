
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static rtx
FUNC_1 (rtx VAR_1, rtx VAR_2)
{
  static unsigned int VAR_3;
  rtx VAR_4;

  if (VAR_3 > 3 + VAR_0)
    return VAR_1;

  VAR_3++;
  VAR_4 = FUNC_0 (VAR_1, VAR_2);
  VAR_3--;

  return VAR_4;
}
