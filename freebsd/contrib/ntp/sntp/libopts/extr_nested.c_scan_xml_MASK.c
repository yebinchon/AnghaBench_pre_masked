
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nestVal; int strVal; } ;
struct TYPE_7__ {int valType; TYPE_1__ v; } ;
typedef TYPE_2__ tOptionValue ;
typedef scalar_t__ tOptionLoadMode ;


 char* FUNC_0 (size_t,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const) ;
 char VAR_0 ;







 scalar_t__ VAR_1 ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (int *,char const*,size_t,char const*,size_t) ;
 int FUNC_5 (int *,char const*,size_t,char*,size_t) ;
 int FUNC_6 (int *,char const*,size_t,char const*,size_t) ;
 TYPE_2__* FUNC_7 (int *,char const*,size_t,char const*,size_t) ;
 char* FUNC_8 (char const*,size_t,char const*,size_t*) ;
 int FUNC_9 (char*,char const*,size_t) ;
 int FUNC_10 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 char* FUNC_11 (char const*,size_t*,TYPE_2__*) ;
 char const* FUNC_12 (char const*) ;

__attribute__((used)) static char const *
FUNC_13(char const * VAR_3, tOptionValue * VAR_4)
{
    size_t VAR_5, VAR_6;
    char const * VAR_7;
    char const * VAR_8;
    tOptionValue VAR_9;
    tOptionLoadMode VAR_10 = VAR_2;

    if (! FUNC_2(*++VAR_3))
        return FUNC_12(VAR_3);




    VAR_8 = FUNC_11(VAR_3, &VAR_5, &VAR_9);
    if (VAR_8 == ((void*)0))
        goto bail_scan_xml;

    if (VAR_9.valType == 130)
        VAR_7 = VAR_8;
    else {
        if (VAR_2 != VAR_1)
            VAR_8 = FUNC_3(VAR_8);
        VAR_7 = FUNC_8(VAR_3, VAR_5, VAR_8, &VAR_6);
        if (VAR_7 == ((void*)0))
            goto bail_scan_xml;
    }







    switch (VAR_9.valType) {
    case 130:
        FUNC_7(&(VAR_4->v.nestVal), VAR_3, VAR_5, ((void*)0), 0);
        break;

    case 128:
    {
        tOptionValue * VAR_11 = FUNC_7(
            &(VAR_4->v.nestVal), VAR_3, VAR_5, VAR_8, VAR_6);

        if (VAR_2 != VAR_1)
            FUNC_10(VAR_11->v.strVal, VAR_2);

        break;
    }

    case 134:
        FUNC_4(&(VAR_4->v.nestVal), VAR_3, VAR_5, VAR_8, VAR_6);
        break;

    case 129:
        FUNC_6(&(VAR_4->v.nestVal), VAR_3, VAR_5, VAR_8, VAR_6);
        break;

    case 132:
    {
        char * VAR_12 = FUNC_0(VAR_6+1, "h scan");
        FUNC_9(VAR_12, VAR_8, VAR_6);
        VAR_12[VAR_6] = VAR_0;
        FUNC_5(&(VAR_4->v.nestVal), VAR_3, VAR_5, VAR_12, VAR_6);
        FUNC_1(VAR_12);
        break;
    }

    case 133:
    case 131:
    default:
        break;
    }

    VAR_2 = VAR_10;
    return VAR_7;

bail_scan_xml:
    VAR_2 = VAR_10;
    return ((void*)0);
}
