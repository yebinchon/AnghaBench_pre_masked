
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 scalar_t__* VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static rtx
FUNC_7 (rtx VAR_2, int VAR_3)
{


  rtx VAR_4
    = FUNC_1 (FUNC_4 (VAR_1[VAR_3], 0, VAR_0), 0);



  if (FUNC_6 (VAR_4, 0))
    VAR_4 = FUNC_3 (VAR_4);

  VAR_4 = FUNC_5 (VAR_1[VAR_3], VAR_4);
  VAR_4 = FUNC_2 (VAR_4, FUNC_0 (VAR_2), 0);



  if (VAR_4 == VAR_1[VAR_3])
    VAR_4 = FUNC_3 (VAR_4);
  return VAR_4;
}
