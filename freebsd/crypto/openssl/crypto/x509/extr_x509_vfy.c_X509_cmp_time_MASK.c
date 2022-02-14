
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_7__ {int type; int length; char const* data; } ;
typedef TYPE_1__ ASN1_TIME ;


 int FUNC_0 (int*,int*,TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;


 TYPE_1__* FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (char const) ;

int FUNC_4(const ASN1_TIME *VAR_0, time_t *VAR_1)
{
    static const size_t VAR_2 = sizeof("YYMMDDHHMMSSZ") - 1;
    static const size_t VAR_3 = sizeof("YYYYMMDDHHMMSSZ") - 1;
    ASN1_TIME *VAR_4 = ((void*)0);
    int VAR_5, VAR_6, VAR_7, VAR_8 = 0;



    const char VAR_9 = 'Z';
    switch (VAR_0->type) {
    case 128:
        if (VAR_0->length != (int)(VAR_2))
            return 0;
        break;
    case 129:
        if (VAR_0->length != (int)(VAR_3))
            return 0;
        break;
    default:
        return 0;
    }






    for (VAR_5 = 0; VAR_5 < VAR_0->length - 1; VAR_5++) {
        if (!FUNC_3(VAR_0->data[VAR_5]))
            return 0;
    }
    if (VAR_0->data[VAR_0->length - 1] != VAR_9)
        return 0;






    VAR_4 = FUNC_2(((void*)0), 0, VAR_1);
    if (VAR_4 == ((void*)0))
        goto err;
    if (!FUNC_0(&VAR_6, &VAR_7, VAR_0, VAR_4))
        goto err;





    VAR_8 = (VAR_6 >= 0 && VAR_7 >= 0) ? -1 : 1;

 err:
    FUNC_1(VAR_4);
    return VAR_8;
}
