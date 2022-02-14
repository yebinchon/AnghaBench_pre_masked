
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef TYPE_2__* edge ;
struct TYPE_4__ {scalar_t__ r; } ;
struct TYPE_5__ {TYPE_1__ insns; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static bool
FUNC_4 (rtx VAR_0, edge VAR_1)
{
  rtx VAR_2;

  for (VAR_2 = VAR_1->insns.r; VAR_2; VAR_2 = FUNC_1 (VAR_2))
    if (FUNC_0 (VAR_2) && FUNC_3 (VAR_0, FUNC_2 (VAR_2)))
      return 1;

  return 0;
}
