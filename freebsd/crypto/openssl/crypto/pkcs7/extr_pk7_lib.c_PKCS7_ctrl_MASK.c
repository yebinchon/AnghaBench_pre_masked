
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ptr; int * data; } ;
struct TYPE_11__ {TYPE_1__ d; } ;
struct TYPE_9__ {TYPE_2__* sign; } ;
struct TYPE_10__ {long detached; TYPE_3__ d; int type; } ;
struct TYPE_8__ {TYPE_5__* contents; } ;
typedef TYPE_4__ PKCS7 ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,int ) ;

long FUNC_4(PKCS7 *VAR_4, int VAR_5, long VAR_6, char *VAR_7)
{
    int VAR_8;
    long VAR_9;

    VAR_8 = FUNC_1(VAR_4->type);

    switch (VAR_5) {

    case 128:
        if (VAR_8 == VAR_0) {
            VAR_9 = VAR_4->detached = (int)VAR_6;
            if (VAR_9 && FUNC_2(VAR_4->d.sign->contents)) {
                ASN1_OCTET_STRING *VAR_10;
                VAR_10 = VAR_4->d.sign->contents->d.data;
                FUNC_0(VAR_10);
                VAR_4->d.sign->contents->d.data = ((void*)0);
            }
        } else {
            FUNC_3(VAR_1,
                     VAR_2);
            VAR_9 = 0;
        }
        break;
    case 129:
        if (VAR_8 == VAR_0) {
            if (!VAR_4->d.sign || !VAR_4->d.sign->contents->d.ptr)
                VAR_9 = 1;
            else
                VAR_9 = 0;

            VAR_4->detached = VAR_9;
        } else {
            FUNC_3(VAR_1,
                     VAR_2);
            VAR_9 = 0;
        }

        break;
    default:
        FUNC_3(VAR_1, VAR_3);
        VAR_9 = 0;
    }
    return VAR_9;
}
