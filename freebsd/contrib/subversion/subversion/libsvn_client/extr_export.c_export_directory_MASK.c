
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_ra_session_t ;
struct TYPE_10__ {int (* finish_report ) (void*,int *) ;int (* set_path ) (void*,char*,int ,int ,int ,int *,int *) ;} ;
typedef TYPE_1__ svn_ra_reporter3_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
struct TYPE_11__ {int notify_baton2; int notify_func2; } ;
typedef TYPE_2__ svn_client_ctx_t ;
struct TYPE_12__ {int rev; } ;
typedef TYPE_3__ svn_client__pathrev_t ;
typedef int svn_boolean_t ;
struct edit_baton {int repos_root_url; int externals; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int const**,void**,struct edit_baton*,TYPE_2__*,int *,int *) ;
 int FUNC_3 (int const**,void**,struct edit_baton*,TYPE_2__*,int *,int *) ;
 int FUNC_4 (char const*,int ,int ,int ,int *) ;
 int FUNC_5 (void*,char*,int ,int ,int ,int *,int *) ;
 int FUNC_6 (void*,int *) ;
 int FUNC_7 (int ,char const*,char const*,int ,int ,char const*,int ,TYPE_2__*,int *) ;
 int VAR_4 ;
 int FUNC_8 (char const**,char const*,int *) ;
 int FUNC_9 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int *,TYPE_1__ const**,void**,int ,char*,int ,int ,int ,int const*,void*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(const char *VAR_6,
                 const char *VAR_7,
                 struct edit_baton *VAR_8,
                 svn_client__pathrev_t *VAR_9,
                 svn_ra_session_t *VAR_10,
                 svn_boolean_t VAR_11,
                 svn_boolean_t VAR_12,
                 svn_boolean_t VAR_13,
                 svn_depth_t VAR_14,
                 const char *VAR_15,
                 svn_client_ctx_t *VAR_16,
                 apr_pool_t *VAR_17)
{
  void *VAR_18;
  const svn_delta_editor_t *VAR_19;
  const svn_ra_reporter3_t *VAR_20;
  void *VAR_21;
  svn_node_kind_t VAR_22;

  FUNC_1(FUNC_10(VAR_6));

  if (!VAR_0)
    FUNC_0(FUNC_2(&VAR_19, &VAR_18, VAR_8, VAR_16,
                           VAR_17, VAR_17));
  else
    FUNC_0(FUNC_3(&VAR_19, &VAR_18, VAR_8, VAR_16,
                           VAR_17, VAR_17));


  FUNC_0(FUNC_11(VAR_10,
                            &VAR_20, &VAR_21,
                            VAR_9->rev,
                            "",
                            VAR_14,
                            VAR_1,
                            VAR_1,
                            VAR_19, VAR_18,
                            VAR_17, VAR_17));

  FUNC_0(VAR_20->set_path(VAR_21, "", VAR_9->rev,


                             VAR_4,
                             VAR_3,
                             ((void*)0), VAR_17));

  FUNC_0(VAR_20->finish_report(VAR_21, VAR_17));
  FUNC_0(FUNC_9(VAR_7, &VAR_22, VAR_17));
  if (VAR_22 == VAR_5)
    FUNC_0(FUNC_4
            (VAR_7, VAR_11, VAR_16->notify_func2,
             VAR_16->notify_baton2, VAR_17));

  if (! VAR_12 && VAR_14 == VAR_4)
    {
      const char *VAR_23;

      FUNC_0(FUNC_8(&VAR_23, VAR_7, VAR_17));
      FUNC_0(FUNC_7(VAR_8->externals,
                                           VAR_6,
                                           VAR_23, VAR_8->repos_root_url,
                                           VAR_14, VAR_15,
                                           VAR_13,
                                           VAR_16, VAR_17));
    }

  return VAR_2;
}
