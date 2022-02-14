
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* priv; } ;
typedef TYPE_1__ svn_ra_session_t ;
struct TYPE_7__ {char* uuid; } ;
typedef TYPE_2__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (char const**,TYPE_2__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_ra_session_t *VAR_2,
                      const char **VAR_3,
                      apr_pool_t *VAR_4)
{
  svn_ra_serf__session_t *VAR_5 = VAR_2->priv;

  if (!VAR_5->uuid)
    {
      const char *VAR_6;




      FUNC_1(! FUNC_2(VAR_5));



      FUNC_0(FUNC_5(&VAR_6, VAR_5, VAR_4));
      if (!VAR_5->uuid)
        {
          return FUNC_4(VAR_0, ((void*)0),
                                  FUNC_3("The UUID property was not found on the "
                                    "resource or any of its parents"));
        }
    }

  *VAR_3 = VAR_5->uuid;

  return VAR_1;
}
