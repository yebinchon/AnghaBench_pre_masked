
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_status_t ;
typedef int apr_file_t ;
typedef int BIO ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(BIO *VAR_0, char *VAR_1, int VAR_2)
{
    apr_file_t *VAR_3 = FUNC_2(VAR_0);
    apr_status_t VAR_4;

    VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);

    if (! VAR_4) {
        return (int)FUNC_3(VAR_1);
    } else if (FUNC_0(VAR_4)) {
        return 0;
    } else {
        return -1;
    }
}
