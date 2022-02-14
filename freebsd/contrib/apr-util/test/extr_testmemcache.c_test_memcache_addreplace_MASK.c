
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
 int FUNC_1 (int *,char*,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,void const**,int *,void**) ;
 scalar_t__ FUNC_6 (int *,char const*,void*,scalar_t__,int ,int) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,int,int ,int **) ;
 scalar_t__ FUNC_9 (int *,char const*,int ) ;
 scalar_t__ FUNC_10 (int *,int *,char const*,char**,int *,int *) ;
 scalar_t__ FUNC_11 (int *,char const*,char*,int,int ,int) ;
 scalar_t__ FUNC_12 (int *,int ,int ,int ,int,int,int,int **) ;
 int FUNC_13 (int *,int *) ;
 int * VAR_3 ;
 scalar_t__ FUNC_14 (void*) ;

__attribute__((used)) static void FUNC_15(abts_case * VAR_4, void *VAR_5)
{
 apr_pool_t *VAR_6 = VAR_3;
 apr_status_t VAR_7;
 apr_memcache_t *VAR_8;
 apr_memcache_server_t *VAR_9;
 apr_hash_t *VAR_10;
 apr_hash_index_t *VAR_11;
 char *VAR_12;
 apr_size_t VAR_13;

  VAR_7 = FUNC_8(VAR_6, 1, 0, &VAR_8);
  FUNC_0(VAR_4, "memcache create failed", VAR_7 == VAR_0);

  VAR_7 = FUNC_12(VAR_6, VAR_1, VAR_2, 0, 1, 1, 60, &VAR_9);
  FUNC_0(VAR_4, "server create failed", VAR_7 == VAR_0);

  VAR_7 = FUNC_7(VAR_8, VAR_9);
  FUNC_0(VAR_4, "server add failed", VAR_7 == VAR_0);

  VAR_10 = FUNC_3(VAR_3);
  FUNC_13(VAR_6, VAR_10);

  for (VAR_11 = FUNC_2(VAR_3, VAR_10); VAR_11; VAR_11 = FUNC_4(VAR_11)) {
    const void *VAR_14;
    void *VAR_15;
    const char *VAR_16;

    FUNC_5(VAR_11, &VAR_14, ((void*)0), &VAR_15);
    VAR_16 = VAR_14;


    VAR_7 = FUNC_11(VAR_8, VAR_16, VAR_15, FUNC_14(VAR_15) - 1, 0, 27);
    FUNC_0(VAR_4, "replace should have failed", VAR_7 != VAR_0);


    VAR_7 = FUNC_6(VAR_8, VAR_16, VAR_15, FUNC_14(VAR_15), 0, 27);
    FUNC_0(VAR_4, "add failed", VAR_7 == VAR_0);


    VAR_7 = FUNC_11(VAR_8, VAR_16, "new", sizeof("new") - 1, 0, 27);
    FUNC_0(VAR_4, "replace failed", VAR_7 == VAR_0);


    VAR_7 = FUNC_10(VAR_8, VAR_6, VAR_16, &VAR_12, &VAR_13, ((void*)0));
    FUNC_0(VAR_4, "get failed", VAR_7 == VAR_0);
    FUNC_1(VAR_4, VAR_12, "new", 3);


    VAR_7 = FUNC_6(VAR_8, VAR_16, VAR_15, FUNC_14(VAR_15), 0, 27);
    FUNC_0(VAR_4, "add should have failed", VAR_7 != VAR_0);


    VAR_7 = FUNC_9(VAR_8, VAR_16, 0);
    FUNC_0(VAR_4, "delete failed", VAR_7 == VAR_0);
  }
}
