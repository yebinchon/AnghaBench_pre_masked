
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int (* svn_wc_notify_func2_t ) (void*,TYPE_1__*,int *) ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void*,TYPE_1__*,int *) ;
 int FUNC_3 (char const*,int *) ;
 int * FUNC_4 (int ,int *,int ,int ) ;
 int FUNC_5 (char const*,scalar_t__*,int *) ;
 int FUNC_6 (char const*,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_7 (char const*,int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_8(const char *VAR_7,
                   svn_boolean_t VAR_8,
                   svn_wc_notify_func2_t VAR_9,
                   void *VAR_10,
                   apr_pool_t *VAR_11)
{
  svn_node_kind_t VAR_12;

  FUNC_0(FUNC_5(VAR_7, &VAR_12, VAR_11));
  if (VAR_12 == VAR_5)
    FUNC_0(FUNC_6(VAR_7, VAR_11));
  else if (VAR_12 == VAR_4)
    return FUNC_4(VAR_0, ((void*)0),
                             FUNC_1("'%s' exists and is not a directory"),
                             FUNC_3(VAR_7, VAR_11));
  else if ((VAR_12 != VAR_3) || (! VAR_8))
    return FUNC_4(VAR_1, ((void*)0),
                             FUNC_1("'%s' already exists"),
                             FUNC_3(VAR_7, VAR_11));

  if (VAR_9)
    {
      svn_wc_notify_t *VAR_13 = FUNC_7(VAR_7,
                                                     VAR_6,
                                                     VAR_11);
      VAR_13->kind = VAR_3;
      (*VAR_9)(VAR_10, VAR_13, VAR_11);
    }

  return VAR_2;
}
