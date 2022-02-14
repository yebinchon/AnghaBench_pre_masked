
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int c_lflag; int sg_flags; } ;
struct TYPE_5__ {TYPE_1__ d_t; } ;
typedef TYPE_2__ ttydata_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(ttydata_t *VAR_3)
{



    return !(VAR_3->d_t.sg_flags & (VAR_2 | VAR_0));

}
