
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int requestList; } ;
struct TYPE_5__ {TYPE_1__ tbsRequest; } ;
typedef TYPE_2__ OCSP_REQUEST ;
typedef int OCSP_ONEREQ ;


 int * FUNC_0 (int ,int) ;

OCSP_ONEREQ *FUNC_1(OCSP_REQUEST *VAR_0, int VAR_1)
{
    return FUNC_0(VAR_0->tbsRequest.requestList, VAR_1);
}
