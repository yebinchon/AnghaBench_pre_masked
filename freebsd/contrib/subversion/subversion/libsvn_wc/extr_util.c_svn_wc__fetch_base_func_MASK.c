
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_checksum_t ;
struct svn_wc__shim_fetch_baton_t {int db; int base_abspath; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 char* FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int const**,int *,int *,int *,int *,int *,int ,char const*,int *,int *) ;
 int FUNC_5 (char const**,int ,char const*,int const*,int *,int *) ;

svn_error_t *
FUNC_6(const char **VAR_2,
                        void *VAR_3,
                        const char *VAR_4,
                        svn_revnum_t VAR_5,
                        apr_pool_t *VAR_6,
                        apr_pool_t *VAR_7)
{
  struct svn_wc__shim_fetch_baton_t *VAR_8 = VAR_3;
  const svn_checksum_t *VAR_9;
  svn_error_t *VAR_10;
  const char *VAR_11 = FUNC_1(VAR_8->base_abspath, VAR_4,
                                              VAR_7);

  VAR_10 = FUNC_4(((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                 ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_9,
                                 ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                 VAR_8->db, VAR_11,
                                 VAR_7, VAR_7);
  if (VAR_10 && VAR_10->apr_err == VAR_0)
    {
      FUNC_2(VAR_10);
      *VAR_2 = ((void*)0);
      return VAR_1;
    }
  else if (VAR_10)
    return FUNC_3(VAR_10);

  if (VAR_9 == ((void*)0))
    {
      *VAR_2 = ((void*)0);
      return VAR_1;
    }

  FUNC_0(FUNC_5(VAR_2, VAR_8->db, VAR_11,
                                       VAR_9, VAR_7, VAR_7));

  return VAR_1;
}
