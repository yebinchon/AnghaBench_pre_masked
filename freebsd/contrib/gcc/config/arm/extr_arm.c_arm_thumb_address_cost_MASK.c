
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static inline int
FUNC_2 (rtx VAR_3)
{
  enum rtx_code VAR_4 = FUNC_0 (VAR_3);

  if (VAR_4 == VAR_2)
    return 1;
  if (VAR_4 == VAR_1
      && FUNC_0 (FUNC_1 (VAR_3, 0)) == VAR_2
      && FUNC_0 (FUNC_1 (VAR_3, 1)) == VAR_0)
    return 1;

  return 2;
}
