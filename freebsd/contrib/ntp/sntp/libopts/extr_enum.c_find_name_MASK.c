
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tOptions ;
typedef int tOptDesc ;


 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 char VAR_0 ;
 int FUNC_2 (int *,int *,char const* const*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const* const,char const*,size_t) ;
 unsigned long FUNC_5 (char const*,char**,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static uintptr_t
FUNC_6(char const * VAR_7, tOptions * VAR_8, tOptDesc * VAR_9,
          char const * const * VAR_10, unsigned int VAR_11)
{




    uintptr_t VAR_12 = VAR_11;
    size_t VAR_13 = FUNC_3(VAR_7);
    uintptr_t VAR_14;

    if (FUNC_0(*VAR_7)) {
        char * VAR_15;
        unsigned long VAR_16 = FUNC_5(VAR_7, &VAR_15, 0);
        if ((*VAR_15 == VAR_0) && (VAR_16 < VAR_11))
            return (uintptr_t)VAR_16;
        VAR_2 = VAR_6;
        VAR_1 = VAR_3;
        FUNC_2(VAR_8, VAR_9, VAR_10, (int)VAR_11);
        return VAR_11;
    }

    if (FUNC_1(*VAR_7) && (VAR_7[2] == VAR_0)) {
        if ( ((VAR_7[0] == '~') && (VAR_7[1] == '0'))
           || ((VAR_7[0] == '-') && (VAR_7[1] == '1')))
        return (uintptr_t)(VAR_11 - 1);
        goto oops;
    }





    for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
        if (FUNC_4(VAR_10[VAR_14], VAR_7, VAR_13) == 0) {
            if (VAR_10[VAR_14][VAR_13] == VAR_0)
                return VAR_14;

            if (VAR_12 == VAR_11)
                VAR_12 = VAR_14;
            else
                VAR_12 = (uintptr_t)~0;
        }
    }

    if (VAR_12 < VAR_11)
        return VAR_12;

 oops:

    VAR_2 = (VAR_12 == VAR_11) ? VAR_4 : VAR_5;
    VAR_1 = VAR_3;
    FUNC_2(VAR_8, VAR_9, VAR_10, (int)VAR_11);
    return VAR_11;
}
