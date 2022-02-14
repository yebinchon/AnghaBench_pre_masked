
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_repos_dirent_receiver_t ;
typedef int (* svn_repos_authz_func_t ) (int *,int *,char const*,void*,int *) ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_membuf_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {scalar_t__ nelts; } ;
typedef TYPE_1__ apr_array_header_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,char const*,TYPE_1__ const*,scalar_t__,int ,int (*) (int *,int *,char const*,void*,int *),void*,int ,void*,int ,void*,int *,int *) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__ const*,int *) ;
 int FUNC_4 (int *,char const*,scalar_t__,int ,int ,void*,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char const*,int *) ;
 int * FUNC_6 (int ,int *,char*,char const*) ;
 int FUNC_7 (scalar_t__*,int *,char const*,int *) ;
 int FUNC_8 (int *,int,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

svn_error_t *
FUNC_9(svn_fs_root_t *VAR_6,
               const char *VAR_7,
               const apr_array_header_t *VAR_8,
               svn_depth_t VAR_9,
               svn_boolean_t VAR_10,
               svn_repos_authz_func_t VAR_11,
               void *VAR_12,
               svn_repos_dirent_receiver_t VAR_13,
               void *VAR_14,
               svn_cancel_func_t VAR_15,
               void *VAR_16,
               apr_pool_t *VAR_17)
{
  svn_membuf_t VAR_18;


  svn_node_kind_t VAR_19;
  if (VAR_9 < VAR_3)
    return FUNC_6(VAR_1, ((void*)0),
                             "Invalid depth '%d' in svn_repos_list", VAR_9);


  if (VAR_11)
    {
      svn_boolean_t VAR_20;
      FUNC_0(VAR_11(&VAR_20, VAR_6, VAR_7, VAR_12,
                              VAR_17));
      if (!VAR_20)
        return VAR_2;
    }





  FUNC_0(FUNC_7(&VAR_19, VAR_6, VAR_7, VAR_17));
  if (VAR_19 == VAR_5)
    {

      VAR_9 = VAR_3;
    }
  else if (VAR_19 != VAR_4)
    {
      return FUNC_6(VAR_0, ((void*)0),
                               FUNC_1("Path '%s' not found"), VAR_7);
    }



  if (VAR_8 && VAR_8->nelts == 0)
    return VAR_2;



  FUNC_8(&VAR_18, 256, VAR_17);


  if (FUNC_3(FUNC_5(VAR_7, VAR_17), VAR_8,
                  &VAR_18))
    FUNC_0(FUNC_4(VAR_6, VAR_7, VAR_19, VAR_10,
                          VAR_13, VAR_14, VAR_17));


  if (VAR_9 > VAR_3)
    FUNC_0(FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9,
                    VAR_10, VAR_11, VAR_12,
                    VAR_13, VAR_14, VAR_15, VAR_16,
                    &VAR_18, VAR_17));

  return VAR_2;
}
