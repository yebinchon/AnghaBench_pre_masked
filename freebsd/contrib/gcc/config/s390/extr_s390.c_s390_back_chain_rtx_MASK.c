
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_5 ;

rtx
FUNC_3 (void)
{
  rtx VAR_6;

  FUNC_0 (VAR_2);

  if (VAR_3)
    VAR_6 = FUNC_2 (VAR_5,
      VAR_1 - VAR_4);
  else
    VAR_6 = VAR_5;

  VAR_6 = FUNC_1 (VAR_0, VAR_6);
  return VAR_6;
}
