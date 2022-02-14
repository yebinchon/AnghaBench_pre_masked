
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef scalar_t__ cch_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__**,int) ;

__attribute__((used)) static time_t
FUNC_3 (time_t VAR_3, cch_t ** VAR_4, cch_t * VAR_5, int VAR_6)
{
  cch_t * VAR_7 = *VAR_4;
  time_t VAR_8;

  if (VAR_3 == VAR_0)
    return VAR_3;

  VAR_2 = 0;
  VAR_8 = FUNC_2 (VAR_7, &VAR_7, 10);
  if (VAR_2 != 0)
    return VAR_0;
  while (FUNC_0 ((unsigned char)*VAR_7))
    VAR_7++;
  if (VAR_7 != VAR_5)
    {
      VAR_2 = VAR_1;
      return VAR_0;
    }

  *VAR_4 = VAR_7;
  return FUNC_1 (VAR_3, VAR_8, VAR_6);
}
