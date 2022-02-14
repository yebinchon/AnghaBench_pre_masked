
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int responseStatus; TYPE_2__* responseBytes; } ;
struct TYPE_6__ {size_t length; int data; } ;
struct TYPE_7__ {TYPE_1__ response; int responseType; } ;
typedef TYPE_3__ OCSPResponse ;
typedef int OCSPBasicOCSPResponse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,size_t,int *,size_t*) ;
 int FUNC_1 (void const*,size_t,TYPE_3__*,size_t*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,int ,int) ;


__attribute__((used)) static int
FUNC_6(const void *VAR_4, size_t VAR_5, OCSPBasicOCSPResponse *VAR_6)
{
    OCSPResponse VAR_7;
    size_t VAR_8;
    int VAR_9;

    FUNC_5(VAR_6, 0, sizeof(*VAR_6));

    VAR_9 = FUNC_1(VAR_4, VAR_5, &VAR_7, &VAR_8);
    if (VAR_9)
 return VAR_9;
    if (VAR_5 != VAR_8) {
 FUNC_4(&VAR_7);
 return VAR_0;
    }

    switch (VAR_7.responseStatus) {
    case 128:
 break;
    default:
 FUNC_4(&VAR_7);
 return VAR_2;
    }

    if (VAR_7.responseBytes == ((void*)0)) {
 FUNC_4(&VAR_7);
 return VAR_1;
    }

    VAR_9 = FUNC_2(&VAR_7.responseBytes->responseType,
      &VAR_3);
    if (VAR_9 != 0) {
 FUNC_4(&VAR_7);
 return VAR_2;
    }

    VAR_9 = FUNC_0(VAR_7.responseBytes->response.data,
           VAR_7.responseBytes->response.length,
           VAR_6,
           &VAR_8);
    if (VAR_9) {
 FUNC_4(&VAR_7);
 return VAR_9;
    }
    if (VAR_8 != VAR_7.responseBytes->response.length) {
 FUNC_4(&VAR_7);
 FUNC_3(VAR_6);
 return VAR_0;
    }
    FUNC_4(&VAR_7);

    return 0;
}
