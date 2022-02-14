
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* priv; } ;
typedef TYPE_1__ svn_ra_session_t ;
struct TYPE_7__ {int * useragent; int * username; int * uuid; int fs; int repos; int fs_path; int repos_url; int callback_baton; int callbacks; } ;
typedef TYPE_2__ svn_ra_local__session_baton_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *,int *,char const**,char const*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_ra_session_t *VAR_2,
                          svn_ra_session_t *VAR_3,
                          const char *VAR_4,
                          apr_pool_t *VAR_5,
                          apr_pool_t *VAR_6)
{
  svn_ra_local__session_baton_t *VAR_7 = VAR_3->priv;
  svn_ra_local__session_baton_t *VAR_8;
  const char *VAR_9;


  VAR_8 = FUNC_1(VAR_5, sizeof(*VAR_8));
  VAR_8->callbacks = VAR_7->callbacks;
  VAR_8->callback_baton = VAR_7->callback_baton;




  FUNC_0(FUNC_4(&(VAR_8->repos),
                                  &(VAR_8->repos_url),
                                  &VAR_9,
                                  VAR_4,
                                  VAR_5));

  VAR_8->fs_path = FUNC_6(VAR_9, VAR_5);



  VAR_8->fs = FUNC_5(VAR_8->repos);


  FUNC_3(VAR_8->fs, VAR_1, ((void*)0));


  VAR_8->uuid = FUNC_2(VAR_5, VAR_7->uuid);

  VAR_8->username = VAR_7->username
                            ? FUNC_2(VAR_5, VAR_7->username)
                            : ((void*)0);

  VAR_8->useragent = FUNC_2(VAR_5, VAR_7->useragent);
  VAR_2->priv = VAR_8;

  return VAR_0;
}
