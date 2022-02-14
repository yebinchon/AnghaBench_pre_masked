
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int abts_case ;


 int FUNC_0 (int *,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_2(abts_case *VAR_2, void *VAR_3)
{
    apr_pool_t *VAR_4 = VAR_1;
    apr_status_t VAR_5;

    VAR_5 = FUNC_1(VAR_4);
    FUNC_0(VAR_2, "failed to init apr_dbd", VAR_5 == VAR_0);
}
