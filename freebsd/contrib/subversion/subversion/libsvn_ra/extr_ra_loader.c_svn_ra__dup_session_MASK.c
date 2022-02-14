
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* vtable; int * pool; int cancel_baton; int cancel_func; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_11__ {int (* set_svn_ra_open ) (TYPE_2__*,int ) ;int (* dup_session ) (TYPE_2__*,TYPE_2__*,char const*,int *,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,char const*,int *,int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,char const**,char const*,int *) ;
 int FUNC_5 (TYPE_2__*,char const**,int *) ;
 int VAR_1 ;

svn_error_t *
FUNC_6(svn_ra_session_t **VAR_2,
                    svn_ra_session_t *VAR_3,
                    const char *VAR_4,
                    apr_pool_t *VAR_5,
                    apr_pool_t *VAR_6)
{
  svn_ra_session_t *VAR_7;

  if (VAR_4)
    {
      const char *VAR_8;


      FUNC_0(FUNC_4(VAR_3,
                                               &VAR_8,
                                               VAR_4,
                                               VAR_6));
    }
  else
    FUNC_0(FUNC_5(VAR_3, &VAR_4, VAR_6));


  VAR_7 = FUNC_1(VAR_5, sizeof(*VAR_7));
  VAR_7->cancel_func = VAR_3->cancel_func;
  VAR_7->cancel_baton = VAR_3->cancel_baton;
  VAR_7->vtable = VAR_3->vtable;
  VAR_7->pool = VAR_5;

  FUNC_0(VAR_3->vtable->dup_session(VAR_7,
                                           VAR_3,
                                           VAR_4,
                                           VAR_5,
                                           VAR_6));

  if (VAR_7->vtable->set_svn_ra_open)
    FUNC_0(VAR_7->vtable->set_svn_ra_open(VAR_7, VAR_1));

  *VAR_2 = VAR_7;
  return VAR_0;
}
