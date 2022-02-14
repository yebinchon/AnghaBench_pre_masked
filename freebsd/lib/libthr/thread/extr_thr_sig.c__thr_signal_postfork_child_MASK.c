
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urwlock {int dummy; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;

void
FUNC_2(void)
{
 int VAR_1;

 for (VAR_1 = 1; VAR_1 <= VAR_0; ++VAR_1) {
  FUNC_1(&FUNC_0(VAR_1) -> lock,
      sizeof(struct urwlock));
 }
}
