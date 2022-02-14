
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * stdname; } ;
typedef TYPE_1__ const SSL_CIPHER ;


 size_t FUNC_0 (TYPE_1__ const**) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__ const* VAR_3 ;
 TYPE_1__ const* VAR_4 ;
 scalar_t__ FUNC_1 (char const*,int *) ;
 TYPE_1__ const* VAR_5 ;

const SSL_CIPHER *FUNC_2(const char *VAR_6)
{
    SSL_CIPHER *VAR_7 = ((void*)0), *VAR_8;
    SSL_CIPHER *VAR_9[] = {VAR_5, VAR_3};
    size_t VAR_10, VAR_11, VAR_12[] = {VAR_2, VAR_0};


    for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_9); VAR_11++) {
        for (VAR_10 = 0, VAR_8 = VAR_9[VAR_11]; VAR_10 < VAR_12[VAR_11]; VAR_10++, VAR_8++) {
            if (VAR_8->stdname == ((void*)0))
                continue;
            if (FUNC_1(VAR_6, VAR_8->stdname) == 0) {
                VAR_7 = VAR_8;
                break;
            }
        }
    }
    if (VAR_7 == ((void*)0)) {
        VAR_8 = VAR_4;
        for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++, VAR_8++) {
            if (FUNC_1(VAR_6, VAR_8->stdname) == 0) {
                VAR_7 = VAR_8;
                break;
            }
        }
    }
    return VAR_7;
}
