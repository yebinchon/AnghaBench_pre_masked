
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X509_NAME_ENTRY ;
typedef int X509_NAME ;
typedef int X509 ;
struct TYPE_9__ {size_t length; unsigned char* data; int type; scalar_t__ flags; } ;
struct TYPE_7__ {TYPE_3__* dNSName; } ;
struct TYPE_8__ {TYPE_1__ d; int type; } ;
typedef int NAME_CONSTRAINTS ;
typedef TYPE_2__ GENERAL_NAME ;
typedef TYPE_3__ ASN1_STRING ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*) ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_3 ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,unsigned char**,size_t*) ;
 int FUNC_6 (TYPE_2__*,int *) ;

int FUNC_7(X509 *VAR_4, NAME_CONSTRAINTS *VAR_5)
{
    int VAR_6, VAR_7;
    X509_NAME *VAR_8 = FUNC_4(VAR_4);
    ASN1_STRING VAR_9;
    GENERAL_NAME VAR_10;

    VAR_9.flags = 0;
    VAR_9.type = VAR_2;
    VAR_10.type = VAR_0;
    VAR_10.d.dNSName = &VAR_9;



    for (VAR_7 = -1;;) {
        X509_NAME_ENTRY *VAR_11;
        ASN1_STRING *VAR_12;
        unsigned char *VAR_13;
        size_t VAR_14;

        VAR_7 = FUNC_3(VAR_8, VAR_1, VAR_7);
        if (VAR_7 == -1)
            break;
        VAR_11 = FUNC_2(VAR_8, VAR_7);
        VAR_12 = FUNC_1(VAR_11);


        if ((VAR_6 = FUNC_5(VAR_12, &VAR_13, &VAR_14)) != VAR_3)
            return VAR_6;
        if (VAR_14 == 0)
            continue;

        VAR_9.length = VAR_14;
        VAR_9.data = VAR_13;
        VAR_6 = FUNC_6(&VAR_10, VAR_5);
        FUNC_0(VAR_13);
        if (VAR_6 != VAR_3)
            return VAR_6;
    }
    return VAR_3;
}
