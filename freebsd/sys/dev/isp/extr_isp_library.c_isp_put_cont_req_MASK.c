
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_6__ {TYPE_1__* req_dataseg; int req_header; } ;
typedef TYPE_2__ ispcontreq_t ;
struct TYPE_5__ {int ds_count; int ds_base; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int *,int *) ;

void
FUNC_2(ispsoftc_t *VAR_1, ispcontreq_t *VAR_2, ispcontreq_t *VAR_3)
{
 int VAR_4;
 FUNC_1(VAR_1, &VAR_2->req_header, &VAR_3->req_header);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_0(VAR_1, VAR_2->req_dataseg[VAR_4].ds_base, &VAR_3->req_dataseg[VAR_4].ds_base);
  FUNC_0(VAR_1, VAR_2->req_dataseg[VAR_4].ds_count, &VAR_3->req_dataseg[VAR_4].ds_count);
 }
}
