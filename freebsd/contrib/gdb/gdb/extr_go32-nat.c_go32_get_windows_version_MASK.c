
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int al; scalar_t__ ah; } ;
struct TYPE_5__ {int ax; } ;
struct TYPE_7__ {TYPE_2__ h; TYPE_1__ x; } ;
typedef TYPE_3__ __dpmi_regs ;


 int FUNC_0 (int,TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(void)
{
  __dpmi_regs VAR_2;

  VAR_2.x.ax = 0x1600;
  FUNC_0(0x2f, &VAR_2);
  if (VAR_2.h.al > 2 && VAR_2.h.al != 0x80 && VAR_2.h.al != 0xff
      && (VAR_2.h.al > 3 || VAR_2.h.ah > 0))
    {
      VAR_0 = VAR_2.h.al;
      VAR_1 = VAR_2.h.ah;
    }
  else
    VAR_0 = 0xff;
}
