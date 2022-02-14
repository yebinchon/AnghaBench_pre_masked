
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int X509_NAME ;
typedef int X509 ;
struct TYPE_12__ {int type; } ;
struct TYPE_11__ {int dp_reasons; TYPE_7__* distpoint; int CRLissuer; TYPE_1__* reasons; } ;
struct TYPE_9__ {int * directoryName; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_2__ d; } ;
struct TYPE_8__ {int length; int* data; } ;
typedef TYPE_3__ GENERAL_NAME ;
typedef TYPE_4__ DIST_POINT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*,int *) ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(X509 *VAR_2, DIST_POINT *VAR_3)
{
    X509_NAME *VAR_4 = ((void*)0);
    int VAR_5;
    if (VAR_3->reasons) {
        if (VAR_3->reasons->length > 0)
            VAR_3->dp_reasons = VAR_3->reasons->data[0];
        if (VAR_3->reasons->length > 1)
            VAR_3->dp_reasons |= (VAR_3->reasons->data[1] << 8);
        VAR_3->dp_reasons &= VAR_0;
    } else
        VAR_3->dp_reasons = VAR_0;
    if (!VAR_3->distpoint || (VAR_3->distpoint->type != 1))
        return;
    for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_3->CRLissuer); VAR_5++) {
        GENERAL_NAME *VAR_6 = FUNC_3(VAR_3->CRLissuer, VAR_5);
        if (VAR_6->type == VAR_1) {
            VAR_4 = VAR_6->d.directoryName;
            break;
        }
    }
    if (!VAR_4)
        VAR_4 = FUNC_1(VAR_2);

    FUNC_0(VAR_3->distpoint, VAR_4);

}
