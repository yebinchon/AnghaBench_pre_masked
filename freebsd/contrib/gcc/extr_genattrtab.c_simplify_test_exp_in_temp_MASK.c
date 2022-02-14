
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obstack {int dummy; } ;
typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct obstack* VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__,int,int) ;
 struct obstack* VAR_1 ;

__attribute__((used)) static rtx
FUNC_3 (rtx VAR_2, int VAR_3, int VAR_4)
{
  rtx VAR_5;
  struct obstack *VAR_6;
  if (FUNC_0 (VAR_2))
    return VAR_2;
  VAR_6 = VAR_0;
  VAR_0 = VAR_1;
  VAR_5 = FUNC_2 (VAR_2, VAR_3, VAR_4);
  VAR_0 = VAR_6;
  if (VAR_5 == VAR_2 || VAR_0 == VAR_1)
    return VAR_5;
  return FUNC_1 (VAR_5);
}
