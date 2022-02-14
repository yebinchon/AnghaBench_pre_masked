
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_mergeinfo_t ;
typedef int svn_mergeinfo_inheritance_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_4__ {scalar_t__ rev; } ;
typedef TYPE_1__ svn_client__pathrev_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int * VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,TYPE_1__*,scalar_t__,scalar_t__,int *,int *,int *) ;
 int FUNC_5 (int *,int *,int *,int ,int ,int *,char const*,int *,int *) ;
 int FUNC_6 (TYPE_1__**,char const*,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_mergeinfo_t *VAR_2,
                   svn_mergeinfo_t *VAR_3,
                   svn_boolean_t *VAR_4,
                   svn_mergeinfo_inheritance_t VAR_5,
                   svn_ra_session_t *VAR_6,
                   const char *VAR_7,
                   svn_revnum_t VAR_8,
                   svn_revnum_t VAR_9,
                   svn_client_ctx_t *VAR_10,
                   apr_pool_t *VAR_11,
                   apr_pool_t *VAR_12)
{

  if (VAR_2)
    {
      FUNC_0(FUNC_5(VAR_2,
                                                    VAR_4,
                                                    ((void*)0) ,
                                                    VAR_0,
                                                    VAR_5, VAR_6,
                                                    VAR_7,
                                                    VAR_10, VAR_11));
    }

  if (VAR_3)
    {
      svn_client__pathrev_t *VAR_13;


      FUNC_1(FUNC_2(VAR_8) && FUNC_2(VAR_9)
                     && (VAR_8 > VAR_9));



      FUNC_0(FUNC_6(&VAR_13, VAR_7, VAR_10,
                                             VAR_12, VAR_12));

      if (! VAR_13)
        {


          *VAR_3 = FUNC_3(VAR_11);
        }
      else if (VAR_13->rev <= VAR_9)
        {


          *VAR_3 = FUNC_3(VAR_11);
        }
      else
        {







          if (VAR_13->rev < VAR_8)
            VAR_8 = VAR_13->rev;


          FUNC_0(FUNC_4(VAR_3,
                                                       ((void*)0),
                                                       VAR_13, VAR_8, VAR_9,
                                                       VAR_6, VAR_10,
                                                       VAR_11));
        }
    }

  return VAR_1;
}
