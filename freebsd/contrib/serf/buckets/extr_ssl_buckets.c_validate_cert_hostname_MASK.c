
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int X509_NAME ;
typedef int X509 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,char*,int) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static apr_status_t FUNC_4(X509 *VAR_4, apr_pool_t *VAR_5)
{
    char VAR_6[1024];
    int VAR_7;
    apr_status_t VAR_8;

    VAR_8 = FUNC_2(((void*)0), VAR_4, VAR_1, ((void*)0));
    if (VAR_8) {
      return VAR_8;
    } else {

        X509_NAME *VAR_9 = FUNC_1(VAR_4);
        if (!VAR_9)
            return VAR_3;

        VAR_7 = FUNC_0(VAR_9, VAR_2, VAR_6, 1024);
        if (VAR_7 != -1)
            if (FUNC_3(VAR_6) != VAR_7)
                return VAR_3;
    }

    return VAR_0;
}
