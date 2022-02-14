
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nid; unsigned char const* data; int length; int flags; int * ln; int * sn; } ;
typedef TYPE_1__ ASN1_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int ,int) ;
 int VAR_4 ;
 long VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (unsigned char*) ;
 unsigned char* FUNC_6 (int) ;
 int FUNC_7 (unsigned char*,unsigned char const*,int) ;

ASN1_OBJECT *FUNC_8(ASN1_OBJECT **VAR_7, const unsigned char **VAR_8,
                             long VAR_9)
{
    ASN1_OBJECT *VAR_10 = ((void*)0), VAR_11;
    const unsigned char *VAR_12;
    unsigned char *VAR_13;
    int VAR_14, VAR_15;






    if (VAR_9 <= 0 || VAR_9 > VAR_5 || VAR_8 == ((void*)0) || (VAR_12 = *VAR_8) == ((void*)0) ||
        VAR_12[VAR_9 - 1] & 0x80) {
        FUNC_2(VAR_0, VAR_3);
        return ((void*)0);
    }

    VAR_15 = (int)VAR_9;




    VAR_11.nid = VAR_6;
    VAR_11.data = VAR_12;
    VAR_11.length = VAR_15;
    VAR_11.flags = 0;
    VAR_14 = FUNC_4(&VAR_11);
    if (VAR_14 != VAR_6) {





        VAR_10 = FUNC_3(VAR_14);
        if (VAR_7) {
            FUNC_0(*VAR_7);
            *VAR_7 = VAR_10;
        }
        *VAR_8 += VAR_9;
        return VAR_10;
    }
    for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++, VAR_12++) {
        if (*VAR_12 == 0x80 && (!VAR_14 || !(VAR_12[-1] & 0x80))) {
            FUNC_2(VAR_0, VAR_3);
            return ((void*)0);
        }
    }





    if ((VAR_7 == ((void*)0)) || ((*VAR_7) == ((void*)0)) ||
        !((*VAR_7)->flags & VAR_1)) {
        if ((VAR_10 = FUNC_1()) == ((void*)0))
            return ((void*)0);
    } else
        VAR_10 = (*VAR_7);

    VAR_12 = *VAR_8;

    VAR_13 = (unsigned char *)VAR_10->data;
    VAR_10->data = ((void*)0);

    if ((VAR_13 == ((void*)0)) || (VAR_10->length < VAR_15)) {
        VAR_10->length = 0;
        FUNC_5(VAR_13);
        VAR_13 = FUNC_6(VAR_15);
        if (VAR_13 == ((void*)0)) {
            VAR_14 = VAR_4;
            goto err;
        }
        VAR_10->flags |= VAR_2;
    }
    FUNC_7(VAR_13, VAR_12, VAR_15);

    VAR_10->data = VAR_13;
    VAR_10->length = VAR_15;
    VAR_10->sn = ((void*)0);
    VAR_10->ln = ((void*)0);

    VAR_12 += VAR_15;

    if (VAR_7 != ((void*)0))
        (*VAR_7) = VAR_10;
    *VAR_8 = VAR_12;
    return VAR_10;
 err:
    FUNC_2(VAR_0, VAR_14);
    if ((VAR_7 == ((void*)0)) || (*VAR_7 != VAR_10))
        FUNC_0(VAR_10);
    return ((void*)0);
}
