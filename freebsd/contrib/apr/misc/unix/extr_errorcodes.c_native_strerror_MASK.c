
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_status_t ;
typedef int apr_size_t ;


 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (char*,int ,char const*) ;

__attribute__((used)) static char *FUNC_3(apr_status_t VAR_0, char *VAR_1,
                             apr_size_t VAR_2)
{





    const char *VAR_3 = FUNC_1(VAR_0);
    if (VAR_3) {
        return FUNC_2(VAR_1, VAR_2, VAR_3);
    } else {
        return FUNC_2(VAR_1, VAR_2,
                           "APR does not understand this error code");
    }

}
