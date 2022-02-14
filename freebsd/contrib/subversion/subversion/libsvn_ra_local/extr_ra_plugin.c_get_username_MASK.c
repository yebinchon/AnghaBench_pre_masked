
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pool; TYPE_2__* priv; } ;
typedef TYPE_1__ svn_ra_session_t ;
struct TYPE_6__ {char* username; int fs; scalar_t__ auth_baton; int uuid; } ;
typedef TYPE_2__ svn_ra_local__session_baton_t ;
typedef int svn_fs_access_t ;
typedef int svn_error_t ;
typedef int svn_auth_iterstate_t ;
struct TYPE_7__ {scalar_t__ username; } ;
typedef TYPE_3__ svn_auth_cred_username_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 char* FUNC_2 (int ,scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (void**,int **,int ,int ,scalar_t__,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int **,char*,int ) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_ra_session_t *VAR_4,
             apr_pool_t *VAR_5)
{
  svn_ra_local__session_baton_t *VAR_6 = VAR_4->priv;


  if (! VAR_6->username)
    {


      if (VAR_6->auth_baton)
        {
          void *VAR_7;
          svn_auth_cred_username_t *VAR_8;
          svn_auth_iterstate_t *VAR_9;

          FUNC_0(FUNC_3(&VAR_7, &VAR_9,
                                             VAR_0,
                                             VAR_6->uuid,
                                             VAR_6->auth_baton,
                                             VAR_5));





          VAR_8 = VAR_7;
          if (VAR_8 && VAR_8->username)
            {
              VAR_6->username = FUNC_2(VAR_4->pool,
                                           VAR_8->username);
              FUNC_5(FUNC_4(VAR_9,
                                                        VAR_5));
            }
          else
            VAR_6->username = "";
        }
      else
        VAR_6->username = "";
    }





  if (*VAR_6->username)
    {
      svn_fs_access_t *VAR_10;

      FUNC_0(FUNC_6(&VAR_10, VAR_6->username,
                                   VAR_4->pool));
      FUNC_0(FUNC_7(VAR_6->fs, VAR_10));



      FUNC_1(VAR_4->pool, VAR_6->fs, VAR_3,
                                VAR_2);
    }

  return VAR_1;
}
