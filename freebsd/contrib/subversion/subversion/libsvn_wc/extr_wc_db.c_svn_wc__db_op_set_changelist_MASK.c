
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_notify_func2_t ;
typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_cancel_func_t ;
struct set_changelist_baton_t {char const* new_changelist; int depth; int const* changelist_filter; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,char const*,int ,int *) ;
 int VAR_2 ;
 int FUNC_4 (char const*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int **,char const**,int *,char const*,int *,int *) ;
 int FUNC_7 (int *,char const*,int ,struct set_changelist_baton_t*,int ,int *,int ,void*,int ,void*,int ,int *) ;

svn_error_t *
FUNC_8(svn_wc__db_t *VAR_3,
                             const char *VAR_4,
                             const char *VAR_5,
                             const apr_array_header_t *VAR_6,
                             svn_depth_t VAR_7,
                             svn_wc_notify_func2_t VAR_8,
                             void *VAR_9,
                             svn_cancel_func_t VAR_10,
                             void *VAR_11,
                             apr_pool_t *VAR_12)
{
  svn_wc__db_wcroot_t *VAR_13;
  const char *VAR_14;
  struct set_changelist_baton_t VAR_15;

  VAR_15.new_changelist = VAR_5;
  VAR_15.changelist_filter = VAR_6;
  VAR_15.depth = VAR_7;

  FUNC_1(FUNC_4(VAR_4));

  FUNC_0(FUNC_6(&VAR_13, &VAR_14,
                                                VAR_3, VAR_4,
                                                VAR_12, VAR_12));
  FUNC_2(VAR_13);



  FUNC_0(FUNC_3(VAR_13, VAR_4, VAR_7, VAR_12));



  return FUNC_5(FUNC_7(VAR_13, VAR_14,
                                           VAR_2, &VAR_15,
                                           VAR_1, ((void*)0),
                                           VAR_10, VAR_11,
                                           VAR_8, VAR_9,
                                           VAR_0,
                                           VAR_12));
}
