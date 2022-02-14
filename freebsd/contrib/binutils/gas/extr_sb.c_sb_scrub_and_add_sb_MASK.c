
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ len; scalar_t__ ptr; } ;
typedef TYPE_1__ sb ;


 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_2 (sb *VAR_3, sb *VAR_4)
{
  VAR_0 = VAR_4;
  VAR_2 = VAR_4->ptr;

  FUNC_1 (VAR_3, VAR_4->len);
  VAR_3->len += FUNC_0 (VAR_1, VAR_3->ptr + VAR_3->len, VAR_4->len);

  VAR_0 = 0;
  VAR_2 = 0;
}
