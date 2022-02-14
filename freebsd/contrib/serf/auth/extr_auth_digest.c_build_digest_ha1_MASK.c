
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char*,char const*,int ) ;
 char* FUNC_1 (int *,char*,char const*,char const*,char const*) ;
 char* FUNC_2 (unsigned char*,int *) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static apr_status_t
FUNC_4(const char **VAR_2,
                 const char *VAR_3,
                 const char *VAR_4,
                 const char *VAR_5,
                 apr_pool_t *VAR_6)
{
    const char *VAR_7;
    unsigned char VAR_8[VAR_0];
    apr_status_t VAR_9;



    VAR_7 = FUNC_1(VAR_6, "%s:%s:%s",
                       VAR_3,
                       VAR_5,
                       VAR_4);
    VAR_9 = FUNC_0(VAR_8, VAR_7, FUNC_3(VAR_7));
    if (VAR_9)
        return VAR_9;

    *VAR_2 = FUNC_2(VAR_8, VAR_6);

    return VAR_1;
}
