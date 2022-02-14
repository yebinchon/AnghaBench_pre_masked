
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char const svn_revnum_t ;
struct TYPE_3__ {void* baseline_info; void* revnum_to_bc; } ;
typedef TYPE_1__ svn_ra_serf__blncache_t ;
typedef int svn_error_t ;
typedef int revision ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 void* FUNC_2 (int *) ;
 int * FUNC_3 (void*) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (char const*,char const,int *) ;
 int FUNC_6 (void*,char const*,int,int ) ;
 int FUNC_7 (int *) ;

svn_error_t *
FUNC_8(svn_ra_serf__blncache_t *VAR_3,
                          const char *VAR_4,
                          svn_revnum_t VAR_5,
                          const char *VAR_6,
                          apr_pool_t *VAR_7)
{
  if (VAR_6 && FUNC_0(VAR_5))
    {
      apr_pool_t *VAR_8 = FUNC_3(VAR_3->revnum_to_bc);


      if (VAR_1 < (FUNC_1(VAR_3->baseline_info)
                            + FUNC_1(VAR_3->revnum_to_bc)))
        {
          FUNC_7(VAR_8);
          VAR_3->revnum_to_bc = FUNC_2(VAR_8);
          VAR_3->baseline_info = FUNC_2(VAR_8);
        }

      FUNC_6(VAR_3->revnum_to_bc, &VAR_5, sizeof(VAR_5),
                    FUNC_4(VAR_8, VAR_6));

      if (VAR_4)
        {
          FUNC_6(VAR_3->baseline_info, VAR_4,
                        VAR_0,
                        FUNC_5(VAR_6, VAR_5, VAR_8));
        }
    }

  return VAR_2;
}
