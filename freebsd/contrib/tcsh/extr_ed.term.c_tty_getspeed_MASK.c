
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int c_cflag; int sg_ispeed; } ;
struct TYPE_5__ {TYPE_3__ d_t; } ;
typedef TYPE_1__ ttydata_t ;
typedef int speed_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

speed_t
FUNC_2(ttydata_t *VAR_1)
{
    speed_t VAR_2;
    VAR_2 = VAR_1->d_t.sg_ispeed;



    return VAR_2;
}
