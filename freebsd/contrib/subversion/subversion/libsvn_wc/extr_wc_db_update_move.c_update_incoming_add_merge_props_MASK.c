
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_wc_notify_state_t ;
struct TYPE_4__ {int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int ,char const*,int *) ;
 int FUNC_4 (int **,int *,int ,int *) ;
 int FUNC_5 (TYPE_1__*,char const*,int *,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int **,int *,char const*,int ,int *,int *,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_wc_notify_state_t *VAR_1,
                                svn_skel_t **VAR_2,
                                const char *VAR_3,
                                apr_hash_t *VAR_4,
                                apr_hash_t *VAR_5,
                                svn_wc__db_t *VAR_6,
                                svn_wc__db_wcroot_t *VAR_7,
                                apr_pool_t *VAR_8,
                                apr_pool_t *VAR_9)
{
  apr_hash_t *VAR_10;
  apr_array_header_t *VAR_11;
  const char *VAR_12 = FUNC_3(VAR_7->abspath,
                                              VAR_3,
                                              VAR_9);






  FUNC_0(FUNC_4(&VAR_11, VAR_5,
                         FUNC_2(VAR_9), VAR_9));
  FUNC_0(FUNC_7(VAR_2, VAR_1, &VAR_10,
                              VAR_6, VAR_12,
                              FUNC_2(VAR_9),
                              VAR_4, VAR_5, VAR_11,
                              VAR_8, VAR_9));


  if (FUNC_1(VAR_10) > 0)
    FUNC_0(FUNC_5(VAR_7, VAR_3,
                                             VAR_10,
                                             FUNC_6(
                                                      VAR_11),
                                             VAR_9));

  return VAR_0;
}
