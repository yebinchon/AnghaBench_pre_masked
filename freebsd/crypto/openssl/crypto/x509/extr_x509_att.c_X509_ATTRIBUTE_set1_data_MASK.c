
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int set; int object; } ;
typedef TYPE_1__ X509_ATTRIBUTE ;
struct TYPE_10__ {int type; } ;
typedef int ASN1_TYPE ;
typedef TYPE_2__ ASN1_STRING ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,void const*,int) ;
 TYPE_2__* FUNC_2 (int *,void const*,int,int,int ) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int,TYPE_2__*) ;
 int FUNC_7 (int *,int,void const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int *) ;

int FUNC_11(X509_ATTRIBUTE *VAR_4, int VAR_5,
                             const void *VAR_6, int VAR_7)
{
    ASN1_TYPE *VAR_8 = ((void*)0);
    ASN1_STRING *VAR_9 = ((void*)0);
    int VAR_10 = 0;
    if (!VAR_4)
        return 0;
    if (VAR_5 & VAR_2) {
        VAR_9 = FUNC_2(((void*)0), VAR_6, VAR_7, VAR_5,
                                      FUNC_8(VAR_4->object));
        if (!VAR_9) {
            FUNC_9(VAR_3, VAR_0);
            return 0;
        }
        VAR_10 = VAR_9->type;
    } else if (VAR_7 != -1) {
        if ((VAR_9 = FUNC_3(VAR_5)) == ((void*)0))
            goto err;
        if (!FUNC_1(VAR_9, VAR_6, VAR_7))
            goto err;
        VAR_10 = VAR_5;
    }





    if (VAR_5 == 0) {
        FUNC_0(VAR_9);
        return 1;
    }
    if ((VAR_8 = FUNC_5()) == ((void*)0))
        goto err;
    if ((VAR_7 == -1) && !(VAR_5 & VAR_2)) {
        if (!FUNC_7(VAR_8, VAR_5, VAR_6))
            goto err;
    } else {
        FUNC_6(VAR_8, VAR_10, VAR_9);
        VAR_9 = ((void*)0);
    }
    if (!FUNC_10(VAR_4->set, VAR_8))
        goto err;
    return 1;
 err:
    FUNC_9(VAR_3, VAR_1);
    FUNC_4(VAR_8);
    FUNC_0(VAR_9);
    return 0;
}
