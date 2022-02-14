
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decomposition {scalar_t__ start; scalar_t__ end; scalar_t__ base; scalar_t__ safe; scalar_t__ reg_flag; } ;
typedef int rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 struct decomposition FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_6 (rtx VAR_3, rtx VAR_4, struct decomposition VAR_5)
{
  struct decomposition VAR_6;

  if (VAR_5.reg_flag)
    return !FUNC_4 (VAR_5.start, VAR_5.end, VAR_3, (rtx*) 0);
  if (VAR_5.safe)
    return 1;

  FUNC_3 (FUNC_1 (VAR_4));

  if (!FUNC_1 (VAR_3))
    return 1;

  VAR_6 = FUNC_2 (VAR_3);

  if (! FUNC_5 (VAR_6.base, VAR_5.base))
    {

      if (FUNC_0 (VAR_6.base) && FUNC_0 (VAR_5.base))
 return 1;

      if (FUNC_0 (VAR_6.base)
   && (VAR_5.base == VAR_0
       || VAR_5.base == VAR_1
       || VAR_5.base == VAR_2))
 return 1;
      if (FUNC_0 (VAR_5.base)
   && (VAR_6.base == VAR_0
       || VAR_6.base == VAR_1
       || VAR_6.base == VAR_2))
 return 1;

      return 0;
    }

  return (VAR_6.start >= VAR_5.end || VAR_5.start >= VAR_6.end);
}
