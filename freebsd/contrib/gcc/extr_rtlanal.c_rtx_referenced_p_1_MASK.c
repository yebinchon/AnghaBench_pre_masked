
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_7 (rtx *VAR_3, void *VAR_4)
{
  rtx VAR_5 = (rtx) VAR_4;

  if (*VAR_3 == VAR_1)
    return VAR_5 == VAR_1;


  if (FUNC_1 (*VAR_3) == VAR_0 && FUNC_2 (VAR_5))
    return FUNC_3 (*VAR_3, 0) == VAR_5;


  if (FUNC_1 (*VAR_3) == VAR_2
      && FUNC_0 (*VAR_3))
    return FUNC_6 (VAR_5, FUNC_4 (*VAR_3));


  return FUNC_5 (*VAR_3, VAR_5);
}
