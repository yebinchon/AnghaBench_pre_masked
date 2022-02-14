
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_6__ {char* path; } ;
struct TYPE_7__ {TYPE_1__ session_url; } ;
typedef TYPE_2__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const**,int *,TYPE_2__*,int ,int *,int *) ;
 char* FUNC_2 (char const*,char const*,int *) ;
 int FUNC_3 (char const**,char const*,TYPE_2__*,int *) ;

svn_error_t *
FUNC_4(const char **VAR_1,
                            svn_revnum_t *VAR_2,
                            svn_ra_serf__session_t *VAR_3,
                            const char *VAR_4,
                            svn_revnum_t VAR_5,
                            apr_pool_t *VAR_6,
                            apr_pool_t *VAR_7)
{
  const char *VAR_8;
  const char *VAR_9;
  svn_revnum_t VAR_10;


  if (! VAR_4)
    VAR_4 = VAR_3->session_url.path;

  FUNC_0(FUNC_1(&VAR_8, &VAR_10,
                            VAR_3, VAR_5, VAR_7, VAR_7));
  FUNC_0(FUNC_3(&VAR_9, VAR_4,
                                         VAR_3, VAR_7));

  *VAR_1 = FUNC_2(VAR_8, VAR_9,
                                            VAR_6);
  if (VAR_2)
    *VAR_2 = VAR_10;

  return VAR_0;
}
