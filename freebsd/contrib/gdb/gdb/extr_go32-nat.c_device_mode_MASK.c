
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ax; int bx; int flags; int dx; } ;
struct TYPE_5__ {TYPE_1__ x; } ;
typedef TYPE_2__ __dpmi_regs ;


 int FUNC_0 (int,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_1 (int VAR_0, int VAR_1)
{
  int VAR_2, VAR_3;
  __dpmi_regs VAR_4;

  VAR_4.x.ax = 0x4400;
  VAR_4.x.bx = VAR_0;
  FUNC_0 (0x21, &VAR_4);
  if (VAR_4.x.flags & 1)
    return -1;
  VAR_3 = VAR_2 = VAR_4.x.dx;

  if (VAR_1)
    VAR_3 |= 0x20;
  else
    VAR_3 &= ~0x20;

  if (VAR_2 & 0x80)
  {
    VAR_4.x.ax = 0x4401;
    VAR_4.x.bx = VAR_0;
    VAR_4.x.dx = VAR_3 & 0xff;
    FUNC_0 (0x21, &VAR_4);
    if (VAR_4.x.flags & 1)
      return -1;
  }
  return (VAR_2 & 0x20) == 0x20;
}
