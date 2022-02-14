
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_bucket_brigade ;
typedef int apr_bucket_alloc_t ;
typedef int abts_case ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(abts_case *VAR_1, void *VAR_2)
{
    apr_bucket_alloc_t *VAR_3;
    apr_bucket_brigade *VAR_4;

    VAR_3 = FUNC_4(VAR_0);
    VAR_4 = FUNC_2(VAR_0, VAR_3);

    FUNC_0(VAR_1, "new brigade not NULL", VAR_4 != ((void*)0));
    FUNC_0(VAR_1, "new brigade is empty", FUNC_1(VAR_4));

    FUNC_3(VAR_4);
    FUNC_5(VAR_3);
}
