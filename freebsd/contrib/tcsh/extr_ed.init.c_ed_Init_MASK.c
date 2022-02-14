
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ len; int * buf; } ;
struct TYPE_6__ {int c_iflag; int c_oflag; int c_cflag; int c_lflag; int sg_flags; int c_line; } ;
struct TYPE_8__ {int d_lb; TYPE_1__ d_t; } ;
struct TYPE_7__ {int t_clrmask; int t_setmask; } ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (int ) ;
 TYPE_3__ VAR_16 ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int * VAR_17 ;
 TYPE_2__** VAR_18 ;
 int FUNC_5 (int *) ;

void
FUNC_6(void)
{
    FUNC_2(1);
    VAR_1 = 0;
    if (FUNC_3(0) == -1)
 return;






    if (!VAR_2)
 FUNC_1();
    if (VAR_13) {
 VAR_16.d_t.sg_flags &= ~(VAR_18[VAR_0][VAR_7].t_clrmask | VAR_14);
 VAR_16.d_t.sg_flags |= VAR_18[VAR_0][VAR_7].t_setmask;
    }
    else {
 VAR_16.d_t.sg_flags &= ~VAR_18[VAR_0][VAR_7].t_clrmask;
 VAR_16.d_t.sg_flags |= (VAR_18[VAR_0][VAR_7].t_setmask | VAR_14);
    }

    VAR_16.d_lb &= ~VAR_18[VAR_0][VAR_10].t_clrmask;
    VAR_16.d_lb |= VAR_18[VAR_0][VAR_10].t_setmask;


    FUNC_4(&VAR_16, VAR_17[VAR_0]);

}
