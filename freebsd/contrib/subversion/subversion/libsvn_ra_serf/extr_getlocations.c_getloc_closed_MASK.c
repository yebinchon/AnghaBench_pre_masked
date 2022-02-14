
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_string_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_serf__xml_estate_t ;
typedef int svn_error_t ;
typedef int rev ;
struct TYPE_2__ {int pool; int paths; } ;
typedef TYPE_1__ loc_context_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ,scalar_t__*,int) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (scalar_t__*,char const*) ;
 char* FUNC_6 (int *,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_ra_serf__xml_estate_t *VAR_2,
              void *VAR_3,
              int VAR_4,
              const svn_string_t *VAR_5,
              apr_hash_t *VAR_6,
              apr_pool_t *VAR_7)
{
  loc_context_t *VAR_8 = VAR_3;
  const char *VAR_9;
  const char *VAR_10;

  FUNC_1(VAR_4 == VAR_0);

  VAR_9 = FUNC_6(VAR_6, "rev");
  VAR_10 = FUNC_6(VAR_6, "path");
  if (VAR_9 != ((void*)0) && VAR_10 != ((void*)0))
    {
      apr_int64_t VAR_11;
      svn_revnum_t VAR_12;

      FUNC_0(FUNC_5(&VAR_11, VAR_9));
      VAR_12 = (svn_revnum_t)VAR_11;

      FUNC_2(VAR_8->paths,
                   FUNC_3(VAR_8->pool, &VAR_12, sizeof(VAR_12)), sizeof(VAR_12),
                   FUNC_4(VAR_8->pool, VAR_10));
    }

  return VAR_1;
}
