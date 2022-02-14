
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* meth; } ;
struct TYPE_8__ {int (* is_number ) (TYPE_2__ const*,char) ;int (* to_int ) (TYPE_2__ const*,char) ;} ;
typedef TYPE_2__ CONF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int const VAR_3 ;
 char* FUNC_1 (TYPE_2__ const*,char const*,char const*) ;
 int FUNC_2 (TYPE_2__ const*,char) ;
 int FUNC_3 (TYPE_2__ const*,char) ;

int FUNC_4(const CONF *VAR_4, const char *VAR_5, const char *VAR_6,
                       long *VAR_7)
{
    char *VAR_8;
    long VAR_9;
    int (*VAR_10)(const CONF *, char) = &FUNC_2;
    int (*VAR_11)(const CONF *, char) = &FUNC_3;

    if (VAR_7 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }

    VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6);

    if (VAR_8 == ((void*)0))
        return 0;

    if (VAR_4 != ((void*)0)) {
        if (VAR_4->meth->is_number != ((void*)0))
            VAR_10 = VAR_4->meth->is_number;
        if (VAR_4->meth->to_int != ((void*)0))
            VAR_11 = VAR_4->meth->to_int;
    }
    for (VAR_9 = 0; VAR_10(VAR_4, *VAR_8); VAR_8++) {
        const int VAR_12 = VAR_11(VAR_4, *VAR_8);

        if (VAR_9 > (VAR_3 - VAR_12) / 10L) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
        VAR_9 = VAR_9 * 10 + VAR_12;
    }

    *VAR_7 = VAR_9;
    return 1;
}
