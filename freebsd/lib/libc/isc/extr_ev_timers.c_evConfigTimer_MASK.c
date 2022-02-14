
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* opaque; } ;
typedef TYPE_1__ evTimerID ;
struct TYPE_9__ {int mode; int index; } ;
typedef TYPE_2__ evTimer ;
struct TYPE_10__ {int timers; } ;
typedef TYPE_3__ evContext_p ;
struct TYPE_11__ {TYPE_3__* opaque; } ;
typedef TYPE_4__ evContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

int
FUNC_4(evContext VAR_3,
      evTimerID VAR_4,
      const char *VAR_5,
      int VAR_6
) {
 evContext_p *VAR_7 = VAR_3.opaque;
 evTimer *VAR_8 = VAR_4.opaque;
 int VAR_9=0;

 FUNC_1(VAR_6);

 if (FUNC_2(VAR_7->timers, VAR_8->index) != VAR_8)
  FUNC_0(VAR_1);

 if (FUNC_3(VAR_5, "rate") == 0)
  VAR_8->mode |= VAR_2;
 else if (FUNC_3(VAR_5, "interval") == 0)
  VAR_8->mode &= ~VAR_2;
 else
  FUNC_0(VAR_0);

 return (VAR_9);
}
