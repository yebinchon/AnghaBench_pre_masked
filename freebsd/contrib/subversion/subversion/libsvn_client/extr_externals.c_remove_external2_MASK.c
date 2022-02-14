
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_context_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,char const*,char const*,int,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_boolean_t *VAR_3,
                svn_wc_context_t *VAR_4,
                const char *VAR_5,
                const char *VAR_6,
                svn_node_kind_t VAR_7,
                svn_cancel_func_t VAR_8,
                void *VAR_9,
                apr_pool_t *VAR_10)
{
  FUNC_0(FUNC_1(VAR_4, VAR_5,
                                  VAR_6,
                                  (VAR_7 == VAR_2),
                                  VAR_8, VAR_9,
                                  VAR_10));

  *VAR_3 = VAR_1;
  return VAR_0;
}
