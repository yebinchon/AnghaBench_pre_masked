
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_status_t ;
typedef int apr_size_t ;
typedef int apr_file_t ;
typedef int BIO ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int*) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(BIO *VAR_0, char *VAR_1, int VAR_2)
{
    apr_file_t *VAR_3 = FUNC_3(VAR_0);
    apr_status_t VAR_4;
    apr_size_t VAR_5;

    VAR_5 = VAR_2;
    VAR_4 = FUNC_2(VAR_3, VAR_1, &VAR_5);

    if (!FUNC_1(VAR_4)) {

        if (FUNC_0(VAR_4)) {
            return -1;
        } else {
            return VAR_5;
        }
    }

    return -1;
}
