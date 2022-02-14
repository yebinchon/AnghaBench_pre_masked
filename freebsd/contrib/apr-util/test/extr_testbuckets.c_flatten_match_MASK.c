
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_size_t ;
typedef int apr_bucket_brigade ;
typedef int abts_case ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char const*,char*,scalar_t__) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,scalar_t__*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,char*,char const*,...) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(abts_case *VAR_0, const char *VAR_1,
                          apr_bucket_brigade *VAR_2,
                          const char *VAR_3)
{
    apr_size_t VAR_4 = FUNC_7(VAR_3);
    char *VAR_5 = FUNC_5(VAR_4);
    apr_size_t VAR_6 = VAR_4;
    char VAR_7[200];

    FUNC_6(VAR_7, "%s: flatten brigade", VAR_1);
    FUNC_2(VAR_0, VAR_7, FUNC_3(VAR_2, VAR_5, &VAR_6));
    FUNC_6(VAR_7, "%s: length match (%ld not %ld)", VAR_1,
            (long)VAR_6, (long)VAR_4);
    FUNC_0(VAR_0, VAR_7, VAR_6 == VAR_4);
    FUNC_6(VAR_7, "%s: result match", VAR_7);
    FUNC_1(VAR_0, VAR_3, VAR_5, VAR_6);
    FUNC_4(VAR_5);
}
