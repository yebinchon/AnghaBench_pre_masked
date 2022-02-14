
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_membuf_t ;
typedef int svn_error_t ;
struct TYPE_5__ {TYPE_1__* filtered; int * full; int * authz_id; } ;
typedef TYPE_2__ svn_authz_t ;
typedef int node_t ;
typedef int authz_full_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {char* repository; char* user; int * root; int * pool; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_2 (char const*,char const*,int *,int *) ;
 int * FUNC_3 (int *,char const*,char const*,int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void**,scalar_t__,int *,int *,int *,int *) ;
 int FUNC_6 (void**,scalar_t__,int *,int *) ;
 int * FUNC_7 (scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_authz_t *VAR_3,
            apr_pool_t *VAR_4)
{
  apr_pool_t *VAR_5 = VAR_3->filtered->pool;
  const char *VAR_6 = VAR_3->filtered->repository;
  const char *VAR_7 = VAR_3->filtered->user;
  node_t *VAR_8;

  if (VAR_2)
    {
      svn_membuf_t *VAR_9 = FUNC_2(VAR_6, VAR_7,
                                                 VAR_3->authz_id,
                                                 VAR_4);


      FUNC_0(FUNC_6((void **)&VAR_8, VAR_2, VAR_9,
                                      VAR_5));

      if (!VAR_8)
        {
          apr_pool_t *VAR_10 = FUNC_7(VAR_1);
          authz_full_t *VAR_11 = ((void*)0);
          FUNC_4(FUNC_6((void **)&VAR_11,
                                                  VAR_1, VAR_3->authz_id,
                                                  VAR_10));
          FUNC_1(VAR_11 == VAR_3->full);


          VAR_8 = FUNC_3(VAR_3->full, VAR_6, VAR_7, VAR_10,
                                   VAR_4);
          FUNC_4(FUNC_5((void **)&VAR_8,
                                                  VAR_2, VAR_9, VAR_8,
                                                  VAR_10, VAR_5));
        }
     }
  else
    {
      VAR_8 = FUNC_3(VAR_3->full, VAR_6, VAR_7, VAR_5,
                               VAR_4);
    }


  VAR_3->filtered->root = VAR_8;

  return VAR_0;
}
