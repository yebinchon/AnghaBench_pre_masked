
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int custom_ext_methods ;
struct TYPE_6__ {int context; } ;
typedef TYPE_1__ custom_ext_method ;
struct TYPE_7__ {unsigned int type; int context; } ;
typedef int SSL ;
typedef int RAW_EXTENSION ;
typedef TYPE_2__ EXTENSION_DEFINITION ;
typedef int ENDPOINT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (TYPE_2__*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_1__* FUNC_1 (int *,int ,unsigned int,size_t*) ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (int *,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(SSL *VAR_6, unsigned int VAR_7, unsigned int VAR_8,
                            custom_ext_methods *VAR_9, RAW_EXTENSION *VAR_10,
                            RAW_EXTENSION **VAR_11)
{
    size_t VAR_12;
    size_t VAR_13 = FUNC_0(VAR_5);
    const EXTENSION_DEFINITION *VAR_14;

    for (VAR_12 = 0, VAR_14 = VAR_5; VAR_12 < VAR_13; VAR_12++, VAR_14++) {
        if (VAR_8 == VAR_14->type) {
            if (!FUNC_2(VAR_6, VAR_14->context, VAR_7))
                return 0;

            *VAR_11 = &VAR_10[VAR_12];
            return 1;
        }
    }


    if (VAR_9 != ((void*)0)) {
        size_t VAR_15 = 0;
        ENDPOINT VAR_16 = VAR_0;
        custom_ext_method *VAR_17 = ((void*)0);

        if ((VAR_7 & VAR_3) != 0)
            VAR_16 = VAR_2;
        else if ((VAR_7 & VAR_4) != 0)
            VAR_16 = VAR_1;

        VAR_17 = FUNC_1(VAR_9, VAR_16, VAR_8, &VAR_15);
        if (VAR_17 != ((void*)0)) {
            if (!FUNC_2(VAR_6, VAR_17->context, VAR_7))
                return 0;
            *VAR_11 = &VAR_10[VAR_15 + VAR_13];
            return 1;
        }
    }


    *VAR_11 = ((void*)0);
    return 1;
}
