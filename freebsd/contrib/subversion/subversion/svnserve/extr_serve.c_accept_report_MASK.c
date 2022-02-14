
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
typedef int svn_boolean_t ;
struct TYPE_12__ {TYPE_2__* repository; } ;
typedef TYPE_3__ server_baton_t ;
struct TYPE_13__ {int entry_counter; scalar_t__ only_empty_entries; int * err; int * from_rev; void* report_baton; int repos_url; TYPE_3__* sb; } ;
typedef TYPE_4__ report_driver_baton_t ;
struct TYPE_14__ {int * conn; TYPE_3__* server; } ;
typedef TYPE_5__ authz_baton_t ;
typedef int apr_pool_t ;
struct TYPE_11__ {int repos_url; TYPE_1__* fs_path; int repos; } ;
struct TYPE_10__ {int data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int * FUNC_5 (int *,int *,int ,TYPE_4__*,scalar_t__) ;
 int FUNC_6 (int *,int *,char*) ;
 int FUNC_7 (int const**,void**,int *,int *,int *,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (void**,int ,int ,int ,char const*,char const*,int,int ,int,int,int const*,void*,int ,TYPE_5__*,int ,int *) ;

__attribute__((used)) static svn_error_t *FUNC_10(svn_boolean_t *VAR_4,
                                  svn_revnum_t *VAR_5,
                                  svn_ra_svn_conn_t *VAR_6, apr_pool_t *VAR_7,
                                  server_baton_t *VAR_8, svn_revnum_t VAR_9,
                                  const char *VAR_10, const char *VAR_11,
                                  svn_boolean_t VAR_12,
                                  svn_depth_t VAR_13,
                                  svn_boolean_t VAR_14,
                                  svn_boolean_t VAR_15)
{
  const svn_delta_editor_t *VAR_16;
  void *VAR_17, *VAR_18;
  report_driver_baton_t VAR_19;
  svn_error_t *VAR_20;
  authz_baton_t VAR_21;

  VAR_21.server = VAR_8;
  VAR_21.conn = VAR_6;



  FUNC_7(&VAR_16, &VAR_17, VAR_6, VAR_7, ((void*)0), ((void*)0));
  FUNC_0(FUNC_9(&VAR_18, VAR_9,
                                      VAR_8->repository->repos,
                                      VAR_8->repository->fs_path->data, VAR_10,
                                      VAR_11, VAR_12, VAR_13,
                                      VAR_15, VAR_14,
                                      VAR_16, VAR_17,
                                      FUNC_2(VAR_8),
                                      &VAR_21, FUNC_8(VAR_6),
                                      VAR_7));

  VAR_19.sb = VAR_8;
  VAR_19.repos_url = FUNC_4(VAR_8->repository->repos_url, VAR_7);
  VAR_19.report_baton = VAR_18;
  VAR_19.err = ((void*)0);
  VAR_19.entry_counter = 0;
  VAR_19.only_empty_entries = VAR_2;
  VAR_19.from_rev = VAR_5;
  if (VAR_5)
    *VAR_5 = VAR_0;
  VAR_20 = FUNC_5(VAR_6, VAR_7, VAR_3, &VAR_19, VAR_2);
  if (VAR_20)
    {

      FUNC_3(VAR_19.err);
      return VAR_20;
    }
  else if (VAR_19.err)
    {

      FUNC_0(VAR_19.err);
    }
  FUNC_1(FUNC_6(VAR_6, VAR_7, ""));

  if (VAR_4)
    *VAR_4 = VAR_19.entry_counter == 1 && VAR_19.only_empty_entries;

  return VAR_1;
}
