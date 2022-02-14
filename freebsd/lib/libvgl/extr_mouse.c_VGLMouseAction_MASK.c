
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ x; scalar_t__ y; int buttons; } ;
struct TYPE_4__ {TYPE_1__ data; } ;
struct mouse_info {TYPE_2__ u; int operation; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,struct mouse_info*) ;

__attribute__((used)) static void
FUNC_3(int VAR_8)
{
  struct mouse_info VAR_9;
  int VAR_10;

  if (VAR_6) {
    VAR_2 = 1;
    return;
  }
again:
  FUNC_0();
  VAR_2 = 0;
  VAR_9.operation = VAR_1;
  FUNC_2(0, VAR_0, &VAR_9);
  if (VAR_4 != VAR_9.u.data.x ||
      VAR_5 != VAR_9.u.data.y) {
    VAR_10 = FUNC_1(VAR_7);
    VAR_4 = VAR_9.u.data.x;
    VAR_5 = VAR_9.u.data.y;
    FUNC_1(VAR_10);
  }
  VAR_3 = VAR_9.u.data.buttons;






  VAR_6 = 0;
  if (VAR_2)
    goto again;
}
