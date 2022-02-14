
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_file_t ;
typedef int abts_case ;


 int FUNC_0 (int *,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int **,char const*,int,int ,int ) ;
 scalar_t__ FUNC_2 (char const*,int *) ;
 int VAR_6 ;

__attribute__((used)) static apr_file_t *FUNC_3(abts_case *VAR_7, const char *VAR_8,
                                  const char *VAR_9)
{
    apr_file_t *VAR_10;

    FUNC_0(VAR_7, "create test file",
                FUNC_1(&VAR_10, VAR_8,
                              VAR_1|VAR_3|VAR_2|VAR_0,
                              VAR_4, VAR_6) == VAR_5);

    FUNC_0(VAR_7, "write test file contents",
                FUNC_2(VAR_9, VAR_10) == VAR_5);

    return VAR_10;
}
