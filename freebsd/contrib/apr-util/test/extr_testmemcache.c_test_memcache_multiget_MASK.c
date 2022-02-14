
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_uint32_t ;
typedef scalar_t__ apr_status_t ;
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
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,void const**,int *,void**) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *,int ,int **) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int,int ,int **) ;
 scalar_t__ FUNC_10 (int *,char const*,int ) ;
 scalar_t__ FUNC_11 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_12 (int *,int ,int ,int ,int,int,int,int **) ;
 scalar_t__ FUNC_13 (int *,char const*,void*,int ,int ,int) ;
 scalar_t__ FUNC_14 (int **,int *) ;
 int FUNC_15 (int *,int ,int ,int *) ;
 int FUNC_16 (int *,int *) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_17 (void*) ;

__attribute__((used)) static void FUNC_18(abts_case * VAR_6, void *VAR_7)
{
  apr_pool_t *VAR_8 = VAR_4;
  apr_pool_t *VAR_9;
  apr_status_t VAR_10;
  apr_memcache_t *VAR_11;
  apr_memcache_server_t *VAR_12;
  apr_hash_t *VAR_13, *VAR_14;
  apr_hash_index_t *VAR_15;
  apr_uint32_t VAR_16;

  VAR_10 = FUNC_9(VAR_8, 1, 0, &VAR_11);
  FUNC_0(VAR_6, "memcache create failed", VAR_10 == VAR_0);

  VAR_10 = FUNC_12(VAR_8, VAR_1, VAR_2, 0, 1, 1, 60, &VAR_12);
  FUNC_0(VAR_6, "server create failed", VAR_10 == VAR_0);

  VAR_10 = FUNC_8(VAR_11, VAR_12);
  FUNC_0(VAR_6, "server add failed", VAR_10 == VAR_0);

  VAR_14 = FUNC_3(VAR_4);
  VAR_13 = FUNC_3(VAR_4);

  FUNC_16(VAR_8, VAR_13);

  for (VAR_15 = FUNC_2(VAR_4, VAR_13); VAR_15; VAR_15 = FUNC_4(VAR_15)) {
    const void *VAR_17;
    void *VAR_18;
    const char *VAR_19;

    FUNC_5(VAR_15, &VAR_17, ((void*)0), &VAR_18);
    VAR_19 = VAR_17;

    VAR_10 = FUNC_13(VAR_11, VAR_19, VAR_18, FUNC_17(VAR_18), 0, 27);
    FUNC_0(VAR_6, "set failed", VAR_10 == VAR_0);
  }

  VAR_10 = FUNC_14(&VAR_9, VAR_8);
  for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++)
    FUNC_7(VAR_8,
                                 FUNC_15(VAR_8, VAR_5,
                                             FUNC_6(VAR_8, VAR_16), ((void*)0)),
                                 &VAR_14);

  VAR_10 = FUNC_11(VAR_11,
                             VAR_9,
                             VAR_8,
                             VAR_14);

  FUNC_0(VAR_6, "multgetp failed", VAR_10 == VAR_0);
  FUNC_0(VAR_6, "multgetp returned too few results",
              FUNC_1(VAR_14) == VAR_3);

  for (VAR_15 = FUNC_2(VAR_4, VAR_13); VAR_15; VAR_15 = FUNC_4(VAR_15)) {
    const void *VAR_20;
    const char *VAR_21;

    FUNC_5(VAR_15, &VAR_20, ((void*)0), ((void*)0));
    VAR_21 = VAR_20;

    VAR_10 = FUNC_10(VAR_11, VAR_21, 0);
    FUNC_0(VAR_6, "delete failed", VAR_10 == VAR_0);
  }

}
