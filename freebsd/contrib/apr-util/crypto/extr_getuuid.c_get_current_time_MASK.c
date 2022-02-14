
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_uint64_t ;


 int FUNC_0 (scalar_t__*) ;

__attribute__((used)) static void FUNC_1(apr_uint64_t *VAR_0)
{


    apr_uint64_t VAR_1;
    static apr_uint64_t VAR_2 = 0;
    static apr_uint64_t VAR_3 = 0;

    FUNC_0(&VAR_1);


    if (VAR_2 != VAR_1) {



        if (VAR_2 + VAR_3 > VAR_1)
            VAR_3 = VAR_2 + VAR_3 - VAR_1 + 1;
        else
            VAR_3 = 0;
        VAR_2 = VAR_1;
    }
    else {

        ++VAR_3;
    }

    *VAR_0 = VAR_1 + VAR_3;
}
