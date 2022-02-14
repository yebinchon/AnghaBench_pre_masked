
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (unsigned char*,char const*,int ) ;
 char* FUNC_1 (int *,char*,char const*,char const*) ;
 char* FUNC_2 (unsigned char*,int *) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static apr_status_t
FUNC_5(const char **VAR_3,
                 const char *VAR_4,
                 const char *VAR_5,
                 const char *VAR_6,
                 apr_pool_t *VAR_7)
{
    if (!VAR_6 || FUNC_3(VAR_6, "auth") == 0) {
        const char *VAR_8;
        unsigned char VAR_9[VAR_1];
        apr_status_t VAR_10;



        VAR_8 = FUNC_1(VAR_7, "%s:%s",
                           VAR_5,
                           VAR_4);
        VAR_10 = FUNC_0(VAR_9, VAR_8, FUNC_4(VAR_8));
        if (VAR_10)
            return VAR_10;

        *VAR_3 = FUNC_2(VAR_9, VAR_7);

        return VAR_2;
    } else {

        return VAR_0;
    }
}
