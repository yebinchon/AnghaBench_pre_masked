
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_bucket_brigade ;
typedef int apr_bucket_alloc_t ;
typedef int abts_case ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,int) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int *,char*) ;
 int * FUNC_7 (int *,char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(abts_case *VAR_2, void *VAR_3)
{
    apr_bucket_alloc_t *VAR_4 = FUNC_4(VAR_1);
    apr_bucket_brigade *VAR_5, *VAR_6;

    VAR_5 = FUNC_7(VAR_4, "blah blah blah-",
                              "end of line.\nfoo foo foo");
    VAR_6 = FUNC_1(VAR_1, VAR_4);

    FUNC_0(VAR_2, "split line",
                       FUNC_3(VAR_6, VAR_5,
                                              VAR_0, 100));

    FUNC_6(VAR_2, "split line", VAR_6, "blah blah blah-end of line.\n");
    FUNC_6(VAR_2, "remainder", VAR_5, "foo foo foo");

    FUNC_2(VAR_6);
    FUNC_2(VAR_5);
    FUNC_5(VAR_4);
}
