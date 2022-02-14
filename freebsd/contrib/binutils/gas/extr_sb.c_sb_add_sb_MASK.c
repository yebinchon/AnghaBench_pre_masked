
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; scalar_t__ ptr; } ;
typedef TYPE_1__ sb ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

void
FUNC_2 (sb *VAR_0, sb *VAR_1)
{
  FUNC_1 (VAR_0, VAR_1->len);
  FUNC_0 (VAR_0->ptr + VAR_0->len, VAR_1->ptr, VAR_1->len);
  VAR_0->len += VAR_1->len;
}
