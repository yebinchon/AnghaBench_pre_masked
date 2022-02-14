
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint64_t ;
typedef int apr_size_t ;
typedef scalar_t__ apr_int64_t ;
typedef int apr_int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ,int,int*,char*,int*) ;

__attribute__((used)) static char *FUNC_1(apr_int64_t VAR_4, register int VAR_5,
                     register int *VAR_6, char *VAR_7,
                     register apr_size_t *VAR_8)
{
    register char *VAR_9 = VAR_7;
    apr_uint64_t VAR_10 = VAR_4;






    if ((VAR_10 <= VAR_2 && VAR_5)
        || (VAR_4 <= VAR_0 && VAR_4 >= VAR_1 && !VAR_5))
            return(FUNC_0((apr_int32_t)VAR_4, VAR_5, VAR_6, VAR_7, VAR_8));

    if (VAR_5) {
        *VAR_6 = VAR_3;
    }
    else {
        *VAR_6 = (VAR_4 < 0);
        if (*VAR_6) {
            apr_int64_t VAR_11 = VAR_4 + 1;
            VAR_10 = ((apr_uint64_t) -VAR_11) + 1;
        }
    }




    do {
        apr_uint64_t VAR_12 = VAR_10 / 10;

        *--VAR_9 = (char) (VAR_10 - VAR_12 * 10 + '0');
        VAR_10 = VAR_12;
    }
    while (VAR_10);

    *VAR_8 = VAR_7 - VAR_9;
    return (VAR_9);
}
