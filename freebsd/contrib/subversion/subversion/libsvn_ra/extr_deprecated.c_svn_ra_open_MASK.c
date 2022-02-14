
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_ra_session_t ;
struct TYPE_6__ {int invalidate_wc_props; int push_wc_prop; int set_wc_prop; int get_wc_prop; int auth_baton; int open_tmp_file; } ;
typedef TYPE_1__ svn_ra_callbacks_t ;
struct TYPE_7__ {int * progress_baton; int * progress_func; int invalidate_wc_props; int push_wc_prop; int set_wc_prop; int get_wc_prop; int auth_baton; int open_tmp_file; } ;
typedef TYPE_2__ svn_ra_callbacks2_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__**,int *) ;
 int * FUNC_2 (int **,char const*,TYPE_2__*,void*,int *,int *) ;

svn_error_t *FUNC_3(svn_ra_session_t **VAR_0,
                         const char *VAR_1,
                         const svn_ra_callbacks_t *VAR_2,
                         void *VAR_3,
                         apr_hash_t *VAR_4,
                         apr_pool_t *VAR_5)
{


  svn_ra_callbacks2_t *VAR_6;
  FUNC_0(FUNC_1(&VAR_6, VAR_5));
  VAR_6->open_tmp_file = VAR_2->open_tmp_file;
  VAR_6->auth_baton = VAR_2->auth_baton;
  VAR_6->get_wc_prop = VAR_2->get_wc_prop;
  VAR_6->set_wc_prop = VAR_2->set_wc_prop;
  VAR_6->push_wc_prop = VAR_2->push_wc_prop;
  VAR_6->invalidate_wc_props = VAR_2->invalidate_wc_props;
  VAR_6->progress_func = ((void*)0);
  VAR_6->progress_baton = ((void*)0);
  return FUNC_2(VAR_0, VAR_1,
                      VAR_6, VAR_3,
                      VAR_4, VAR_5);
}
