
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_8__ {int blncache; int rev_root_stub; } ;
typedef TYPE_1__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (int *,char const**,TYPE_1__*,char const*,int ,int *,int *) ;
 int FUNC_5 (char const**,int ,int ,int *) ;
 int FUNC_6 (int ,int *,int ,char const*,int *) ;
 int FUNC_7 (char const**,TYPE_1__*,int *) ;
 int FUNC_8 (int *,TYPE_1__*,int *) ;
 int FUNC_9 (int *,char const**,TYPE_1__*,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(const char **VAR_1,
                  svn_revnum_t *VAR_2,
                  svn_ra_serf__session_t *VAR_3,
                  svn_revnum_t VAR_4,
                  apr_pool_t *VAR_5,
                  apr_pool_t *VAR_6)
{



  if (FUNC_2(VAR_3))
    {
      if (FUNC_1(VAR_4))
        {
          *VAR_2 = VAR_4;
        }
      else
        {
          FUNC_0(FUNC_8(
                    VAR_2, VAR_3, VAR_6));
        }

      *VAR_1 = FUNC_3(VAR_5, "%s/%ld",
                             VAR_3->rev_root_stub, *VAR_2);
    }


  else
    {
      const char *VAR_7;

      FUNC_0(FUNC_7(&VAR_7, VAR_3, VAR_6));

      if (FUNC_1(VAR_4))
        {

          FUNC_0(FUNC_5(VAR_1,
                                                   VAR_3->blncache,
                                                   VAR_4, VAR_5));
          if (!*VAR_1)
            {
              FUNC_0(FUNC_4(((void*)0), VAR_1, VAR_3,
                                             VAR_7, VAR_4,
                                             VAR_5, VAR_6));
              FUNC_0(FUNC_6(VAR_3->blncache, ((void*)0),
                                                VAR_4, *VAR_1,
                                                VAR_6));
            }

          *VAR_2 = VAR_4;
        }
      else
        {
          FUNC_0(FUNC_9(VAR_2, VAR_1,
                                         VAR_3, VAR_7,
                                         VAR_5, VAR_6));
        }
    }

  return VAR_0;
}
