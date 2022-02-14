
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef long apr_off_t ;
typedef int apr_file_t ;
typedef int abts_case ;


 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int **,char*,int,int *) ;
 scalar_t__ FUNC_2 (char*,int *) ;
 scalar_t__ FUNC_3 (int *,int ,long*) ;

__attribute__((used)) static apr_status_t FUNC_4(abts_case *VAR_8, apr_pool_t *VAR_9,
                                            apr_file_t **VAR_10)
{
    int VAR_11;
    apr_status_t VAR_12;
    apr_off_t VAR_13 = 0L;
    char VAR_14[] = "data/testxmldummyerrorXXXXXX";

    VAR_12 = FUNC_1(VAR_10, VAR_14, VAR_0 | VAR_4 | VAR_1 |
                         VAR_3 | VAR_5 | VAR_2, VAR_9);
    FUNC_0(VAR_8, VAR_7, VAR_12);

    if (VAR_12 != VAR_7)
        return VAR_12;

    VAR_12 = FUNC_2("<?xml version=\"1.0\" ?>\n<maryx>"
                       "<had a=\"little\"/><lamb/>\n", *VAR_10);
    FUNC_0(VAR_8, VAR_7, VAR_12);

    for (VAR_11 = 0; VAR_11 < 5000; VAR_11++) {
        VAR_12 = FUNC_2("<hmm roast=\"lamb\" "
                           "for=\"dinner\">yummy</hmm>\n", *VAR_10);
        FUNC_0(VAR_8, VAR_7, VAR_12);
    }

    VAR_12 = FUNC_2("</mary>\n", *VAR_10);
    FUNC_0(VAR_8, VAR_7, VAR_12);

    VAR_12 = FUNC_3(*VAR_10, VAR_6, &VAR_13);
    FUNC_0(VAR_8, VAR_7, VAR_12);

    return VAR_12;
}
