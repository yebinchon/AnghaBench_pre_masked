
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint32_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_memcache_t ;
typedef int apr_memcache_server_t ;
typedef int abts_case ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int,int ,int **) ;
 scalar_t__ FUNC_4 (int *,int ,int,int*) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (int *,int *,int ,char**,int *,int *) ;
 scalar_t__ FUNC_7 (int *,int ,int,int*) ;
 scalar_t__ FUNC_8 (int *,int ,int ,int ,int,int,int,int **) ;
 scalar_t__ FUNC_9 (int *,int ,char*,int,int ,int) ;
 int FUNC_10 (char*) ;
 int * VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_11(abts_case * VAR_6, void *VAR_7)
{
 apr_pool_t *VAR_8 = VAR_4;
 apr_status_t VAR_9;
 apr_memcache_t *VAR_10;
 apr_memcache_server_t *VAR_11;
 apr_uint32_t VAR_12;
 char *VAR_13;
 apr_size_t VAR_14;
 apr_uint32_t VAR_15;

  VAR_9 = FUNC_3(VAR_8, 1, 0, &VAR_10);
  FUNC_0(VAR_6, "memcache create failed", VAR_9 == VAR_0);

  VAR_9 = FUNC_8(VAR_8, VAR_1, VAR_2, 0, 1, 1, 60, &VAR_11);
  FUNC_0(VAR_6, "server create failed", VAR_9 == VAR_0);

  VAR_9 = FUNC_2(VAR_10, VAR_11);
  FUNC_0(VAR_6, "server add failed", VAR_9 == VAR_0);

  VAR_9 = FUNC_9(VAR_10, VAR_5, "271", sizeof("271") - 1, 0, 27);
  FUNC_0(VAR_6, "set failed", VAR_9 == VAR_0);

  for( VAR_15 = 1; VAR_15 <= VAR_3; VAR_15++) {
    apr_uint32_t VAR_16;

    VAR_9 = FUNC_6(VAR_10, VAR_8, VAR_5, &VAR_13, &VAR_14, ((void*)0));
    FUNC_0(VAR_6, "get failed", VAR_9 == VAR_0);

    VAR_16 = VAR_15 + FUNC_10(VAR_13);

    VAR_9 = FUNC_7(VAR_10, VAR_5, VAR_15, &VAR_12);
    FUNC_0(VAR_6, "incr failed", VAR_9 == VAR_0);

    FUNC_1(VAR_6, VAR_16, VAR_12);

    VAR_9 = FUNC_4(VAR_10, VAR_5, VAR_15, &VAR_12);
    FUNC_0(VAR_6, "decr failed", VAR_9 == VAR_0);
    FUNC_1(VAR_6, FUNC_10(VAR_13), VAR_12);

  }

  VAR_9 = FUNC_6(VAR_10, VAR_8, VAR_5, &VAR_13, &VAR_14, ((void*)0));
  FUNC_0(VAR_6, "get failed", VAR_9 == VAR_0);

  FUNC_1(VAR_6, 271, FUNC_10(VAR_13));

  VAR_9 = FUNC_5(VAR_10, VAR_5, 0);
  FUNC_0(VAR_6, "delete failed", VAR_9 == VAR_0);
}
