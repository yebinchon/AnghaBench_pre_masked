
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xuio_t ;
typedef int iovec_t ;
struct TYPE_4__ {int cnt; struct TYPE_4__* bufs; struct TYPE_4__* iovp; } ;
typedef TYPE_1__ dmu_xuio_t ;
typedef int arc_buf_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_4(xuio_t *VAR_3)
{
 dmu_xuio_t *VAR_4 = FUNC_1(VAR_3);
 int VAR_5 = VAR_4->cnt;

 FUNC_3(VAR_4->iovp, VAR_5 * sizeof (iovec_t));
 FUNC_3(VAR_4->bufs, VAR_5 * sizeof (arc_buf_t *));
 FUNC_3(VAR_4, sizeof (dmu_xuio_t));

 if (FUNC_2(VAR_3) == VAR_0)
  FUNC_0(VAR_1, -VAR_5);
 else
  FUNC_0(VAR_2, -VAR_5);
}
