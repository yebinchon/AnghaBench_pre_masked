
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
struct TYPE_23__ {int nelts; } ;
typedef TYPE_4__ svn_ra_svn__list_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_boolean_t ;
struct TYPE_24__ {TYPE_3__* repository; TYPE_2__* client_info; } ;
typedef TYPE_5__ server_baton_t ;
struct TYPE_25__ {char const** date; char const** author; char const** post_commit_err; int * new_rev; int * pool; } ;
typedef TYPE_6__ commit_callback_baton_t ;
struct TYPE_26__ {int * conn; TYPE_5__* server; } ;
typedef TYPE_7__ authz_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_22__ {int fs; TYPE_1__* fs_path; int repos_url; int repos; } ;
struct TYPE_21__ {char const* user; scalar_t__ tunnel; } ;
struct TYPE_20__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*,int *) ;
 int * FUNC_3 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_5__*,int *,int *,char*,int ) ;
 int FUNC_5 (int *,int *,TYPE_5__*,int ,int *,int) ;
 int VAR_7 ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (TYPE_4__*,int *,int **) ;
 int FUNC_11 (TYPE_4__*,char*,char const**,...) ;
 int FUNC_12 (int *,int *,char*) ;
 int FUNC_13 (int *,int *,char*,int ,char const*,char const*,char const*) ;
 int FUNC_14 (int *,int *,int const*,void*,int *,int ) ;
 int FUNC_15 (int const**,void**,int ,int *,int ,int ,int *,int ,TYPE_6__*,int ,TYPE_7__*,int *) ;
 int * FUNC_16 (char const*,int *) ;
 int FUNC_17 (int *,int *,TYPE_5__*) ;
 int FUNC_18 (TYPE_4__*,TYPE_5__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_19(svn_ra_svn_conn_t *VAR_8,
       apr_pool_t *VAR_9,
       svn_ra_svn__list_t *VAR_10,
       void *VAR_11)
{
  server_baton_t *VAR_12 = VAR_11;
  const char *VAR_13,
             *VAR_14 = ((void*)0),
             *VAR_15 = ((void*)0),
             *VAR_16 = ((void*)0);
  svn_ra_svn__list_t *VAR_17;
  svn_boolean_t VAR_18;
  svn_ra_svn__list_t *VAR_19;
  apr_hash_t *VAR_20;
  const svn_delta_editor_t *VAR_21;
  void *VAR_22;
  svn_boolean_t VAR_23;
  commit_callback_baton_t VAR_24;
  svn_revnum_t VAR_25;
  authz_baton_t VAR_26;

  VAR_26.server = VAR_12;
  VAR_26.conn = VAR_8;

  if (VAR_10->nelts == 1)
    {


      FUNC_1(FUNC_11(VAR_10, "c", &VAR_13));
      VAR_17 = ((void*)0);
      VAR_18 = VAR_4;
      VAR_19 = ((void*)0);
    }
  else
    {

      FUNC_1(FUNC_11(VAR_10, "clb?l", &VAR_13,
                                      &VAR_17, &VAR_18,
                                      &VAR_19));
    }






  FUNC_1(FUNC_5(VAR_8, VAR_9, VAR_12, VAR_7,
                           ((void*)0),
                           (VAR_17 && VAR_17->nelts)));



  if (VAR_17 && VAR_17->nelts)
    FUNC_0(FUNC_2(VAR_17, VAR_12, VAR_9));


  if (VAR_19)
    FUNC_1(FUNC_10(VAR_19, VAR_9, &VAR_20));
  else
    {
      VAR_20 = FUNC_3(VAR_9);
      FUNC_7(VAR_20, VAR_3,
                    FUNC_16(VAR_13, VAR_9));
    }



  FUNC_7(VAR_20, VAR_2,
                VAR_12->client_info->user
                   ? FUNC_16(VAR_12->client_info->user, VAR_9)
                   : ((void*)0));

  VAR_24.pool = VAR_9;
  VAR_24.new_rev = &VAR_25;
  VAR_24.date = &VAR_14;
  VAR_24.author = &VAR_15;
  VAR_24.post_commit_err = &VAR_16;

  FUNC_0(FUNC_15
              (&VAR_21, &VAR_22, VAR_12->repository->repos, ((void*)0),
               FUNC_9(VAR_12->repository->repos_url, VAR_9),
               VAR_12->repository->fs_path->data, VAR_20,
               VAR_6, &VAR_24,
               VAR_5, &VAR_26, VAR_9));
  FUNC_1(FUNC_12(VAR_8, VAR_9, ""));
  FUNC_1(FUNC_14(VAR_8, VAR_9, VAR_21, VAR_22,
                                   &VAR_23, VAR_0));
  if (!VAR_23)
    {
      FUNC_1(FUNC_4(VAR_12, VAR_8, VAR_9, "%s",
                          FUNC_8(VAR_25, VAR_9)));
      FUNC_1(FUNC_17(VAR_8, VAR_9, VAR_12));






      if (VAR_12->client_info->tunnel)
        FUNC_1(FUNC_6(VAR_12->repository->fs, VAR_25, VAR_9));


      if (! VAR_18 && VAR_17 && VAR_17->nelts)
        FUNC_1(FUNC_18(VAR_17, VAR_12, VAR_9));

      FUNC_1(FUNC_13(VAR_8, VAR_9, "r(?c)(?c)(?c)",
                                      VAR_25, VAR_14, VAR_15, VAR_16));

      if (! VAR_12->client_info->tunnel)
        FUNC_1(FUNC_6(VAR_12->repository->fs, VAR_25, VAR_9));
    }
  return VAR_1;
}
