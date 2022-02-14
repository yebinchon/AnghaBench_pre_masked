
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_fs_root_t ;
typedef scalar_t__ svn_fs_node_relation_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_3 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,int *,int ,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__*,int *,char const*,int *) ;
 int FUNC_6 (scalar_t__*,int *,char const*,int *,char const*,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int **,int ,scalar_t__,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_fs_root_t *VAR_5,
           const char *VAR_6,
           svn_revnum_t VAR_7,
           apr_pool_t *VAR_8)
{
  svn_revnum_t VAR_9;



  FUNC_0(FUNC_5(&VAR_9, VAR_5, VAR_6,
                                  VAR_8));
  if (!FUNC_1(VAR_9))
    return VAR_3;
  if (!FUNC_1(VAR_7))
    return VAR_3;
  if (VAR_7 < VAR_9)
    {


      return FUNC_3(VAR_1, ((void*)0),
                               FUNC_2("'%s' is out of date; try updating"),
                               VAR_6);
    }

  if (VAR_7 > VAR_9)
    {
      svn_fs_root_t *VAR_10;
      svn_fs_node_relation_t VAR_11;


      FUNC_0(FUNC_7(&VAR_10, FUNC_8(VAR_5),
                                   VAR_7, VAR_8));
      FUNC_0(FUNC_6(&VAR_11, VAR_5, VAR_6, VAR_10,
                                   VAR_6, VAR_8));
      FUNC_4(VAR_10);


      if (VAR_11 != VAR_4)
        {



          return FUNC_3(VAR_0, ((void*)0),
                                   FUNC_2("'%s' has been modified since the "
                                     "commit began (restart the commit)"),
                                   VAR_6);
        }
    }

  return VAR_3;
}
