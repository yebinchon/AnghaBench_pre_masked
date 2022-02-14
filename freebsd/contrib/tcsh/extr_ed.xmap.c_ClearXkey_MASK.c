
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* buf; } ;
typedef scalar_t__ KEYCMD ;
typedef TYPE_1__ CStr ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ VAR_2 ;

void
FUNC_1(KEYCMD *VAR_3, const CStr *VAR_4)
{
    unsigned char VAR_5 = (unsigned char) *(VAR_4->buf);
    if ((VAR_3[VAR_5] == VAR_2) &&
 ((VAR_3 == VAR_1 && VAR_0[VAR_5] != VAR_2) ||
  (VAR_3 == VAR_0 && VAR_1[VAR_5] != VAR_2)))
 (void) FUNC_0(VAR_4);
}
