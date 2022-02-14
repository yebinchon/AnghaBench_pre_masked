
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* io_private; } ;
typedef TYPE_1__ zio_t ;
typedef int dmu_buf_impl_t ;
struct TYPE_6__ {int * dr_dbuf; } ;
typedef TYPE_2__ dbuf_dirty_record_t ;


 int FUNC_0 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static void
FUNC_1(zio_t *VAR_0)
{
 dbuf_dirty_record_t *VAR_1 = VAR_0->io_private;
 dmu_buf_impl_t *VAR_2 = VAR_1->dr_dbuf;

 FUNC_0(VAR_0, ((void*)0), VAR_2);
}
