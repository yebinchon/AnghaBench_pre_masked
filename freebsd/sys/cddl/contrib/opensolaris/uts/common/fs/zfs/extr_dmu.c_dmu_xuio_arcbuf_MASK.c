
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xuio_t ;
struct TYPE_3__ {int cnt; int ** bufs; } ;
typedef TYPE_1__ dmu_xuio_t ;
typedef int arc_buf_t ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *) ;

arc_buf_t *
FUNC_2(xuio_t *VAR_0, int VAR_1)
{
 dmu_xuio_t *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1 < VAR_2->cnt);
 return (VAR_2->bufs[VAR_1]);
}
