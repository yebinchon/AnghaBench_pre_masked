
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_5__ {int baseline_info; } ;
typedef TYPE_1__ svn_ra_serf__blncache_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int revision; int bc_url; } ;
typedef TYPE_2__ baseline_info_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 char* FUNC_0 (int *,int ) ;
 TYPE_2__* FUNC_1 (int ,char const*) ;

svn_error_t *
FUNC_2(const char **VAR_2,
                                        svn_revnum_t *VAR_3,
                                        svn_ra_serf__blncache_t *VAR_4,
                                        const char *VAR_5,
                                        apr_pool_t *VAR_6)
{
  baseline_info_t *VAR_7 = FUNC_1(VAR_4->baseline_info, VAR_5);
  if (VAR_7)
    {
      *VAR_2 = FUNC_0(VAR_6, VAR_7->bc_url);
      *VAR_3 = VAR_7->revision;
    }
  else
    {
      *VAR_2 = ((void*)0);
      *VAR_3 = VAR_0;
    }

  return VAR_1;
}
