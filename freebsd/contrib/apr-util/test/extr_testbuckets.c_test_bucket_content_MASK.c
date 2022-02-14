
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;
typedef int apr_bucket ;
typedef int abts_case ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char const*,char const*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char const**,int *,int ) ;

__attribute__((used)) static void FUNC_4(abts_case *VAR_1,
                                apr_bucket *VAR_2,
                                const char *VAR_3,
                                apr_size_t VAR_4)
{
    const char *VAR_5;
    apr_size_t VAR_6;

    FUNC_2(VAR_1, "read from bucket",
                       FUNC_3(VAR_2, &VAR_5, &VAR_6,
                                       VAR_0));

    FUNC_0(VAR_1, "read expected length", VAR_6 == VAR_4);
    FUNC_1(VAR_1, VAR_3, VAR_5, VAR_4);
}
