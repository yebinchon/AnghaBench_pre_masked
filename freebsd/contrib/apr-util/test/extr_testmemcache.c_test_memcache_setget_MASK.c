
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_status_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_memcache_t ;
typedef int apr_memcache_server_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
typedef int abts_case ;


 int FUNC_0 (int *,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,void const**,int *,void**) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int,int ,int **) ;
 scalar_t__ FUNC_7 (int *,char const*,int ) ;
 scalar_t__ FUNC_8 (int *,int *,char const*,char**,int *,int *) ;
 scalar_t__ FUNC_9 (int *,int ,int ,int ,int,int,int,int **) ;
 scalar_t__ FUNC_10 (int *,char const*,void*,int ,int ,int) ;
 int FUNC_11 (int *,int *) ;
 int * VAR_3 ;
 int FUNC_12 (void*) ;

__attribute__((used)) static void FUNC_13(abts_case * VAR_4, void *VAR_5)
{
    apr_pool_t *VAR_6 = VAR_3;
    apr_status_t VAR_7;
    apr_memcache_t *VAR_8;
    apr_memcache_server_t *VAR_9;
    apr_hash_t *VAR_10;
    apr_hash_index_t *VAR_11;
    char *VAR_12;
    apr_size_t VAR_13;

    VAR_7 = FUNC_6(VAR_6, 1, 0, &VAR_8);
    FUNC_0(VAR_4, "memcache create failed", VAR_7 == VAR_0);

    VAR_7 = FUNC_9(VAR_6, VAR_1, VAR_2, 0, 1, 1, 60, &VAR_9);
    FUNC_0(VAR_4, "server create failed", VAR_7 == VAR_0);

    VAR_7 = FUNC_5(VAR_8, VAR_9);
    FUNC_0(VAR_4, "server add failed", VAR_7 == VAR_0);

    VAR_10 = FUNC_2(VAR_6);

    FUNC_11(VAR_6, VAR_10);

    for (VAR_11 = FUNC_1(VAR_3, VAR_10); VAR_11; VAR_11 = FUNC_3(VAR_11)) {
 const void *VAR_14;
 void *VAR_15;
        const char *VAR_16;

 FUNC_4(VAR_11, &VAR_14, ((void*)0), &VAR_15);
        VAR_16 = VAR_14;

 VAR_7 = FUNC_10(VAR_8, VAR_16, VAR_15, FUNC_12(VAR_15), 0, 27);
 FUNC_0(VAR_4, "set failed", VAR_7 == VAR_0);
 VAR_7 = FUNC_8(VAR_8, VAR_6, VAR_16, &VAR_12, &VAR_13, ((void*)0));
 FUNC_0(VAR_4, "get failed", VAR_7 == VAR_0);
    }

    VAR_7 = FUNC_8(VAR_8, VAR_6, "nothere3423", &VAR_12, &VAR_13, ((void*)0));

    FUNC_0(VAR_4, "get should have failed", VAR_7 != VAR_0);

    for (VAR_11 = FUNC_1(VAR_3, VAR_10); VAR_11; VAR_11 = FUNC_3(VAR_11)) {
 const void *VAR_17;
 const char *VAR_18;

 FUNC_4(VAR_11, &VAR_17, ((void*)0), ((void*)0));
 VAR_18 = VAR_17;

 VAR_7 = FUNC_7(VAR_8, VAR_18, 0);
 FUNC_0(VAR_4, "delete failed", VAR_7 == VAR_0);
    }
}
