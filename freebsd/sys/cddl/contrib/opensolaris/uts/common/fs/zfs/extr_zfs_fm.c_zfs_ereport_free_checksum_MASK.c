
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* zcr_ckinfo; int zcr_cbinfo; int zcr_cbdata; int (* zcr_free ) (int ,int ) ;int * zcr_detector; int * zcr_ereport; } ;
typedef TYPE_1__ zio_cksum_report_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(zio_cksum_report_t *VAR_1)
{
 VAR_1->zcr_free(VAR_1->zcr_cbdata, VAR_1->zcr_cbinfo);

 if (VAR_1->zcr_ckinfo != ((void*)0))
  FUNC_1(VAR_1->zcr_ckinfo, sizeof (*VAR_1->zcr_ckinfo));

 FUNC_1(VAR_1, sizeof (*VAR_1));
}
