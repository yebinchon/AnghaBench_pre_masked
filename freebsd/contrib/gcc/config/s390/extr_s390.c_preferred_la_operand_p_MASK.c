
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_address {scalar_t__ indx; scalar_t__ base; scalar_t__ pointer; } ;
typedef scalar_t__ rtx ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,struct s390_address*) ;

bool
FUNC_7 (rtx VAR_3, rtx VAR_4)
{
  struct s390_address VAR_5;

  if (VAR_4 != VAR_2)
    VAR_3 = FUNC_5 (VAR_0, VAR_3, VAR_4);

  if (!FUNC_6 (VAR_3, &VAR_5))
    return 0;
  if (VAR_5.base && !FUNC_1 (FUNC_0 (VAR_5.base)))
    return 0;
  if (VAR_5.indx && !FUNC_2 (FUNC_0 (VAR_5.indx)))
    return 0;

  if (!VAR_1 && !VAR_5.pointer)
    return 0;

  if (VAR_5.pointer)
    return 1;

  if ((VAR_5.base && FUNC_3 (VAR_5.base) && FUNC_4 (VAR_5.base))
      || (VAR_5.indx && FUNC_3 (VAR_5.indx) && FUNC_4 (VAR_5.indx)))
    return 1;

  return 0;
}
