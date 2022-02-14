
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sg_flags; } ;
struct TYPE_4__ {int c_oflag; TYPE_1__ sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;

void
FUNC_0(int VAR_6)
{

 if (VAR_6)
  VAR_5.sg.sg_flags |= VAR_4;
 else
  VAR_5.sg.sg_flags &= ~VAR_4;
}
