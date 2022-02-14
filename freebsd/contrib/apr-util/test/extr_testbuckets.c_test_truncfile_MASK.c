
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_size_t ;
typedef int apr_file_t ;
typedef int apr_bucket_brigade ;
typedef int apr_bucket_alloc_t ;
typedef int apr_bucket ;
typedef int abts_case ;


 int FUNC_0 (int *,char*,int) ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ,int,int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int *,char const**,scalar_t__*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int * FUNC_13 (int *,char*,char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_14(abts_case *VAR_3, void *VAR_4)
{
    apr_bucket_alloc_t *VAR_5 = FUNC_7(VAR_2);
    apr_bucket_brigade *VAR_6 = FUNC_4(VAR_2, VAR_5);
    apr_file_t *VAR_7 = FUNC_13(VAR_3, "testfile.txt", "hello");
    apr_bucket *VAR_8;
    const char *VAR_9;
    apr_size_t VAR_10;

    FUNC_6(VAR_6, VAR_7, 0, 5, VAR_2);

    FUNC_12(VAR_7, 0);

    VAR_8 = FUNC_1(VAR_6);

    FUNC_0(VAR_3, "single bucket in brigade",
                FUNC_3(VAR_8) == FUNC_2(VAR_6));

    FUNC_9(VAR_8, 0);

    FUNC_0(VAR_3, "read gave APR_EOF",
                FUNC_10(VAR_8, &VAR_9, &VAR_10, VAR_0) == VAR_1);

    FUNC_0(VAR_3, "read length 0", VAR_10 == 0);

    FUNC_0(VAR_3, "still a single bucket in brigade",
                FUNC_3(VAR_8) == FUNC_2(VAR_6));

    FUNC_11(VAR_7);
    FUNC_5(VAR_6);
    FUNC_8(VAR_5);
}
