
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int which_server; } ;
typedef TYPE_1__ my_hash_server_baton ;
typedef int apr_uint32_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
struct TYPE_13__ {TYPE_1__* server_baton; int server_func; int hash_func; } ;
typedef TYPE_2__ apr_memcache_t ;
struct TYPE_14__ {int port; } ;
typedef TYPE_3__ apr_memcache_server_t ;
typedef int abts_case ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *,int,int ,TYPE_2__**) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,char*,int) ;
 scalar_t__ FUNC_6 (int *,int ,int,int ,int,int,int,TYPE_3__**) ;
 TYPE_1__* FUNC_7 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_8(abts_case * VAR_6, void *VAR_7)
{
  apr_pool_t *VAR_8 = VAR_5;
  apr_status_t VAR_9;
  apr_memcache_t *VAR_10;
  apr_memcache_server_t *VAR_11;
  apr_uint32_t VAR_12 = 10;
  apr_uint32_t VAR_13;
  apr_uint32_t VAR_14;
  my_hash_server_baton *VAR_15 =
    FUNC_7(VAR_8, sizeof(my_hash_server_baton));

  VAR_9 = FUNC_3(VAR_8, VAR_12, 0, &VAR_10);
  FUNC_0(VAR_6, "memcache create failed", VAR_9 == VAR_0);





  VAR_10->hash_func = VAR_3;

  VAR_13 = FUNC_5(VAR_10, "whatever", sizeof("whatever") - 1);
  FUNC_1(VAR_6, VAR_1, VAR_13);


  for(VAR_14 = 1; VAR_14 <= 10; VAR_14++) {
    apr_memcache_server_t *VAR_16;

    VAR_9 = FUNC_6(VAR_8, VAR_2, VAR_14, 0, 1, 1, 60, &VAR_16);
    FUNC_0(VAR_6, "server create failed", VAR_9 == VAR_0);

    VAR_9 = FUNC_2(VAR_10, VAR_16);
    FUNC_0(VAR_6, "server add failed", VAR_9 == VAR_0);
  }





  VAR_15->which_server = 3;
  VAR_10->server_func = VAR_4;
  VAR_10->server_baton = VAR_15;
  VAR_11 = FUNC_4(VAR_10, 0);
  FUNC_0(VAR_6, "wrong server found", VAR_11->port == VAR_15->which_server);
}
