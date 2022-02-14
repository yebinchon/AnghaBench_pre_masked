
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_wc_adm_access_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct diff_callbacks3_wrapper_baton {int baton; int anchor; TYPE_1__* callbacks3; int anchor_abspath; int db; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* dir_opened ) (int *,int *,int ,int ,int ) ;} ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,int ,int ,int ) ;
 int FUNC_1 (int ,char const*,int *) ;
 int * FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_boolean_t *VAR_1,
                     svn_boolean_t *VAR_2,
                     svn_boolean_t *VAR_3,
                     const char *VAR_4,
                     svn_revnum_t VAR_5,
                     void *VAR_6,
                     apr_pool_t *VAR_7)
{
  struct diff_callbacks3_wrapper_baton *VAR_8 = VAR_6;
  svn_wc_adm_access_t *VAR_9;

  VAR_9 = FUNC_2(
                        VAR_8->db,
                        FUNC_1(VAR_8->anchor_abspath, VAR_4, VAR_7),
                        VAR_7);
  if (VAR_3)
    *VAR_3 = VAR_0;

  return VAR_8->callbacks3->dir_opened(VAR_9, VAR_1,
                                   FUNC_1(VAR_8->anchor, VAR_4,
                                                     VAR_7),
                                   VAR_5, VAR_8->baton);
}
