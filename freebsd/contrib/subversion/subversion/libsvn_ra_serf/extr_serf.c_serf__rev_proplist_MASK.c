
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_7__ {TYPE_2__* priv; } ;
typedef TYPE_1__ svn_ra_session_t ;
struct TYPE_8__ {int rev_stub; } ;
typedef TYPE_2__ svn_ra_serf__session_t ;
typedef int svn_ra_serf__handler_t ;
typedef int svn_ra_serf__dav_props_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int **,TYPE_2__*,char const*,int ,char*,int const*,int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_6 (char const**,TYPE_2__*,int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_ra_session_t *VAR_3,
                   svn_revnum_t VAR_4,
                   const svn_ra_serf__dav_props_t *VAR_5,
                   apr_hash_t **VAR_6,
                   apr_pool_t *VAR_7,
                   apr_pool_t *VAR_8)
{
  svn_ra_serf__session_t *VAR_9 = VAR_3->priv;
  apr_hash_t *VAR_10;
  const char *VAR_11;
  svn_ra_serf__handler_t *VAR_12;

  if (FUNC_1(VAR_9))
    {
      VAR_11 = FUNC_3(VAR_8, "%s/%ld", VAR_9->rev_stub,
                                   VAR_4);





      VAR_4 = VAR_0;
    }
  else
    {

      FUNC_0(FUNC_6(&VAR_11, VAR_9,
                                        VAR_8));
    }

  VAR_10 = FUNC_2(VAR_7);
  FUNC_0(FUNC_5(&VAR_12, VAR_9,
                                               VAR_11, VAR_4, "0",
                                               VAR_5,
                                               VAR_2,
                                               VAR_10,
                                               VAR_8));

  FUNC_0(FUNC_4(VAR_12, VAR_8));

  FUNC_7(VAR_10, VAR_8);

  *VAR_6 = VAR_10;

  return VAR_1;
}
