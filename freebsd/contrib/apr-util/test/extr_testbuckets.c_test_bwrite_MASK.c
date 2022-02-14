
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_off_t ;
typedef int apr_bucket_brigade ;
typedef int apr_bucket_alloc_t ;
typedef int abts_case ;


 int FUNC_0 (int *,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int ) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int*) ;
 int FUNC_5 (int *,int *,int *,int ,int) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_8(abts_case *VAR_3, void *VAR_4)
{
    apr_bucket_alloc_t *VAR_5 = FUNC_6(VAR_2);
    apr_bucket_brigade *VAR_6 = FUNC_2(VAR_2, VAR_5);
    apr_off_t VAR_7;
    int VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
        FUNC_1(VAR_3, "brigade_write",
                           FUNC_5(VAR_6, ((void*)0), ((void*)0),
                                             VAR_1, sizeof VAR_1));
    }

    FUNC_1(VAR_3, "determine brigade length",
                       FUNC_4(VAR_6, 1, &VAR_7));

    FUNC_0(VAR_3, "brigade has correct length",
                VAR_7 == (VAR_0 * sizeof VAR_1));

    FUNC_3(VAR_6);
    FUNC_7(VAR_5);
}
