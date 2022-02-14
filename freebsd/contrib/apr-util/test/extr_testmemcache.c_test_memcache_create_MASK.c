
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_uint32_t ;
typedef scalar_t__ apr_status_t ;
typedef scalar_t__ apr_port_t ;
typedef int apr_pool_t ;
typedef int apr_memcache_t ;
typedef int apr_memcache_server_t ;
typedef int abts_case ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,int ,int **) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,int ,scalar_t__) ;
 int * FUNC_8 (int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int *,int ,int ) ;
 scalar_t__ FUNC_10 (int *,int ,scalar_t__,int ,int,int,int,int **) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(abts_case * VAR_5, void *VAR_6)
{
  apr_pool_t *VAR_7 = VAR_3;
  apr_status_t VAR_8;
  apr_memcache_t *VAR_9;
  apr_memcache_server_t *VAR_10, *VAR_11;
  apr_uint32_t VAR_12 = 10;
  apr_uint32_t VAR_13;
  apr_uint32_t VAR_14;

  VAR_8 = FUNC_4(VAR_7, VAR_12, 0, &VAR_9);
  FUNC_0(VAR_5, "memcache create failed", VAR_8 == VAR_0);

  for (VAR_13 = 1; VAR_13 <= VAR_12; VAR_13++) {
    apr_port_t VAR_15;

    VAR_15 = VAR_2 + VAR_13;
    VAR_8 =
      FUNC_10(VAR_7, VAR_1, VAR_2 + VAR_13, 0, 1, 1, 60, &VAR_10);
    FUNC_0(VAR_5, "server create failed", VAR_8 == VAR_0);

    VAR_8 = FUNC_3(VAR_9, VAR_10);
    FUNC_0(VAR_5, "server add failed", VAR_8 == VAR_0);

    VAR_11 = FUNC_7(VAR_9, VAR_1, VAR_15);
    FUNC_1(VAR_5, VAR_10, VAR_11);

    VAR_8 = FUNC_5(VAR_9, VAR_11);
    FUNC_0(VAR_5, "server disable failed", VAR_8 == VAR_0);

    VAR_8 = FUNC_6(VAR_9, VAR_11);
    FUNC_0(VAR_5, "server enable failed", VAR_8 == VAR_0);

    VAR_14 = FUNC_9(VAR_9, VAR_4, FUNC_11(VAR_4));
    FUNC_0(VAR_5, "hash failed", VAR_14 > 0);

    VAR_11 = FUNC_8(VAR_9, VAR_14);
    FUNC_2(VAR_5, VAR_11);
  }

  VAR_8 = FUNC_10(VAR_7, VAR_1, VAR_2, 0, 1, 1, 60, &VAR_10);
  FUNC_0(VAR_5, "server create failed", VAR_8 == VAR_0);

  VAR_8 = FUNC_3(VAR_9, VAR_10);
  FUNC_0(VAR_5, "server add should have failed", VAR_8 != VAR_0);

}
