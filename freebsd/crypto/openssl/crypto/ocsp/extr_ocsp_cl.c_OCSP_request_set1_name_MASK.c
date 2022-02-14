
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_8__ {int directoryName; } ;
struct TYPE_11__ {int type; TYPE_1__ d; } ;
struct TYPE_9__ {TYPE_4__* requestorName; } ;
struct TYPE_10__ {TYPE_2__ tbsRequest; } ;
typedef TYPE_3__ OCSP_REQUEST ;
typedef TYPE_4__ GENERAL_NAME ;


 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(OCSP_REQUEST *VAR_1, X509_NAME *VAR_2)
{
    GENERAL_NAME *VAR_3;

    VAR_3 = FUNC_1();
    if (VAR_3 == ((void*)0))
        return 0;
    if (!FUNC_2(&VAR_3->d.directoryName, VAR_2)) {
        FUNC_0(VAR_3);
        return 0;
    }
    VAR_3->type = VAR_0;
    FUNC_0(VAR_1->tbsRequest.requestorName);
    VAR_1->tbsRequest.requestorName = VAR_3;
    return 1;
}
