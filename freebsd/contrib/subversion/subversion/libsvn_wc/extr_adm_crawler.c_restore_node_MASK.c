
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int (* svn_wc_notify_func2_t ) (void*,TYPE_1__*,int *) ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,char const*,int ,int ,int ,void*,int *) ;
 int FUNC_2 (void*,TYPE_1__*,int *) ;
 int FUNC_3 (char const*,int ,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_4 (char const*,int ,int *) ;
 int VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_wc__db_t *VAR_6,
             const char *VAR_7,
             svn_node_kind_t VAR_8,
             svn_boolean_t VAR_9,
             svn_boolean_t VAR_10,
             svn_cancel_func_t VAR_11,
             void *VAR_12,
             svn_wc_notify_func2_t VAR_13,
             void *VAR_14,
             apr_pool_t *VAR_15)
{
  if (VAR_8 == VAR_3 || VAR_8 == VAR_4)
    {

      FUNC_0(FUNC_1(VAR_6, VAR_7, VAR_10,
                           VAR_9,
                           VAR_11, VAR_12,
                           VAR_15));
    }
  else if (VAR_8 == VAR_2)
    {

      FUNC_0(FUNC_3(VAR_7, VAR_0, VAR_15));
    }


  if (VAR_13 != ((void*)0))
    {
      svn_wc_notify_t *VAR_16 = FUNC_4(VAR_7,
                                                     VAR_5,
                                                     VAR_15);
      VAR_16->kind = VAR_3;
      (*VAR_13)(VAR_14, VAR_16, VAR_15);
    }

  return VAR_1;
}
