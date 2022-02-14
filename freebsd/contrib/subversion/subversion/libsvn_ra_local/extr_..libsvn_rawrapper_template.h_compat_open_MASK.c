
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * pool; TYPE_7__* vtable; } ;
typedef TYPE_1__ svn_ra_session_t ;
struct TYPE_9__ {int * auth_baton; int invalidate_wc_props; int push_wc_prop; int set_wc_prop; int get_wc_prop; int open_tmp_file; } ;
typedef TYPE_2__ svn_ra_callbacks_t ;
struct TYPE_10__ {int * progress_baton; int * progress_func; int invalidate_wc_props; int push_wc_prop; int set_wc_prop; int get_wc_prop; int * auth_baton; int open_tmp_file; } ;
typedef TYPE_3__ svn_ra_callbacks2_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_11__ {int (* open_session ) (TYPE_1__*,char const**,char const*,TYPE_3__*,void*,int *,int *,int *,int *) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 TYPE_7__ VAR_2 ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (TYPE_1__*,char const**,char const*,TYPE_3__*,void*,int *,int *,int *,int *) ;
 int * FUNC_5 (int ,int *,int ,char const*,char const*) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static svn_error_t *FUNC_8(void **VAR_3,
                                const char *VAR_4,
                                const svn_ra_callbacks_t *VAR_5,
                                void *VAR_6,
                                apr_hash_t *VAR_7,
                                apr_pool_t *VAR_8)
{
  apr_pool_t *VAR_9 = FUNC_6(VAR_8);
  svn_ra_callbacks2_t *VAR_10 = FUNC_2(VAR_9,
                                                sizeof(*VAR_10));

  svn_ra_session_t *VAR_11 = FUNC_2(VAR_9, sizeof(*VAR_11));
  const char *VAR_12;

  VAR_11->vtable = &VAR_2;
  VAR_11->pool = VAR_9;

  VAR_10->open_tmp_file = VAR_5->open_tmp_file;
  VAR_10->auth_baton = VAR_5->auth_baton;
  VAR_10->get_wc_prop = VAR_5->get_wc_prop;
  VAR_10->set_wc_prop = VAR_5->set_wc_prop;
  VAR_10->push_wc_prop = VAR_5->push_wc_prop;
  VAR_10->invalidate_wc_props = VAR_5->invalidate_wc_props;
  VAR_10->progress_func = ((void*)0);
  VAR_10->progress_baton = ((void*)0);

  FUNC_0(VAR_2.open_session(VAR_11, &VAR_12, VAR_4,
                            VAR_10, VAR_6,
                            VAR_5 ? VAR_5->auth_baton : ((void*)0),
                            VAR_7, VAR_9, VAR_9));

  if (FUNC_3(VAR_4, VAR_12) != 0)
    {
      FUNC_7(VAR_9);
      return FUNC_5(VAR_0, ((void*)0),
                               FUNC_1("Session URL '%s' does not match requested "
                                 " URL '%s', and redirection was disallowed."),
                               VAR_12, VAR_4);
    }

  *VAR_3 = VAR_11;
  return VAR_1;
}
