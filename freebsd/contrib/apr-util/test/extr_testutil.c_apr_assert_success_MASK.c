
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_status_t ;
typedef int abts_case ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (scalar_t__,char*,int) ;
 int FUNC_3 (char*,char*,char const*,scalar_t__,char*) ;

void FUNC_4(abts_case* VAR_3, const char* VAR_4, apr_status_t VAR_5)
{
    if (VAR_5 == VAR_0) {
        FUNC_1(VAR_3, VAR_4);
    }

    if (VAR_5 != VAR_1) {
        char VAR_6[VAR_2], VAR_7[128];
        FUNC_3(VAR_6, "%s (%d): %s\n", VAR_4, VAR_5,
                FUNC_2(VAR_5, VAR_7, sizeof VAR_7));
        FUNC_0(VAR_3, VAR_6);
    }
}
