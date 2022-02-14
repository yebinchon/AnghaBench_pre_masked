
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_status_t ;
typedef int abts_case ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (char*,char*,char const*,scalar_t__) ;

void FUNC_3(abts_case* VAR_3, const char* VAR_4, apr_status_t VAR_5,
                        int VAR_6)
{
    if (VAR_5 == VAR_0) {
        FUNC_1(VAR_3, VAR_4, VAR_6);
    } else if (VAR_5 == VAR_1) {
        char VAR_7[VAR_2];
        FUNC_2(VAR_7, "%s (%d): expected failure, got success\n", VAR_4, VAR_5);
        FUNC_0(VAR_3, VAR_7, VAR_6);
    }
}
