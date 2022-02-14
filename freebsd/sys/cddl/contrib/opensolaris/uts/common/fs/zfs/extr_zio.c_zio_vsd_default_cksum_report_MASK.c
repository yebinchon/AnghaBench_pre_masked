
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int io_size; int io_abd; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_6__ {int zcr_free; int zcr_finish; void* zcr_cbdata; int zcr_cbinfo; } ;
typedef TYPE_2__ zio_cksum_report_t ;


 int FUNC_0 (void*,int ,int ) ;
 void* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_2(zio_t *VAR_2, zio_cksum_report_t *VAR_3, void *VAR_4)
{
 void *VAR_5 = FUNC_1(VAR_2->io_size);

 FUNC_0(VAR_5, VAR_2->io_abd, VAR_2->io_size);

 VAR_3->zcr_cbinfo = VAR_2->io_size;
 VAR_3->zcr_cbdata = VAR_5;
 VAR_3->zcr_finish = VAR_1;
 VAR_3->zcr_free = VAR_0;
}
