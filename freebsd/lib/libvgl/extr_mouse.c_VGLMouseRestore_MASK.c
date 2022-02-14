
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int x; } ;
struct TYPE_4__ {TYPE_1__ data; } ;
struct mouse_info {TYPE_2__ u; int operation; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,struct mouse_info*) ;

void
FUNC_3(void)
{
  struct mouse_info VAR_5;

  FUNC_0();
  VAR_5.operation = VAR_1;
  if (FUNC_2(0, VAR_0, &VAR_5) == 0) {
    VAR_5.operation = VAR_2;
    VAR_5.u.data.x = VAR_3;
    VAR_5.u.data.y = VAR_4;
    FUNC_2(0, VAR_0, &VAR_5);
  }
  FUNC_1();
}
