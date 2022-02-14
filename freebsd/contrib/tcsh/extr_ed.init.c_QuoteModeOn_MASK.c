
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sg_flags; int c_lflag; int c_cflag; int c_oflag; int c_iflag; } ;
struct TYPE_8__ {int d_lb; TYPE_1__ d_t; } ;
struct TYPE_7__ {int t_setmask; int t_clrmask; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__ VAR_9 ;
 int VAR_10 ;
 TYPE_3__ VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 TYPE_2__** VAR_12 ;
 int FUNC_2 (char*,int ) ;

void
FUNC_3(void)
{
    if (VAR_5 >= 0)
 return;


    VAR_11 = VAR_9;
    VAR_11.d_t.sg_flags &= ~VAR_12[VAR_6][VAR_0].t_clrmask;
    VAR_11.d_t.sg_flags |= VAR_12[VAR_6][VAR_0].t_setmask;
    VAR_11.d_lb &= ~VAR_12[VAR_6][VAR_3].t_clrmask;
    VAR_11.d_lb |= VAR_12[VAR_6][VAR_3].t_setmask;


    if (FUNC_1(VAR_7, &VAR_11) == -1) {



 return;
    }

    VAR_8 = 1;
    return;
}
