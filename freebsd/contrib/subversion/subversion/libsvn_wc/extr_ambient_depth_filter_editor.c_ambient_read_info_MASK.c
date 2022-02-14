
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_wc__db_t ;
typedef int svn_wc__db_status_t ;
typedef int svn_node_kind_t ;
struct TYPE_7__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_depth_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_3 (int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 int VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_wc__db_status_t *VAR_5,
                  svn_node_kind_t *VAR_6,
                  svn_depth_t *VAR_7,
                  svn_wc__db_t *VAR_8,
                  const char *VAR_9,
                  apr_pool_t *VAR_10)
{
  svn_error_t *VAR_11;
  FUNC_1(VAR_6 != ((void*)0));

  VAR_11 = FUNC_3(VAR_5, VAR_6, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                 ((void*)0), ((void*)0), ((void*)0), VAR_7, ((void*)0), ((void*)0),
                                 ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                 VAR_8, VAR_9,
                                 VAR_10, VAR_10);

  if (VAR_11 && VAR_11->apr_err == VAR_0)
    {
      FUNC_2(VAR_11);

      *VAR_6 = VAR_3;
      if (VAR_5)
        *VAR_5 = VAR_4;
      if (VAR_7)
        *VAR_7 = VAR_2;

      return VAR_1;
    }
  else
    FUNC_0(VAR_11);

  return VAR_1;
}
