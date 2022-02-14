
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* path; } ;
struct TYPE_7__ {TYPE_1__ repos_root; } ;
typedef TYPE_2__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (char const*,int *) ;
 int FUNC_5 (char const**,TYPE_2__*,int *) ;
 char* FUNC_6 (char const*,char const*) ;

svn_error_t *
FUNC_7(const char **VAR_1,
                               const char *VAR_2,
                               svn_ra_serf__session_t *VAR_3,
                               apr_pool_t *VAR_4)
{
  const char *VAR_5, *VAR_6;

  if (! VAR_3->repos_root.path)
    {
      const char *VAR_7;



      FUNC_3(! FUNC_2(VAR_3));




      FUNC_0(FUNC_5(&VAR_7, VAR_3,
                                        VAR_4));
    }

  VAR_5 = FUNC_4(VAR_3->repos_root.path, VAR_4);
  VAR_6 = FUNC_4(VAR_2, VAR_4);
  *VAR_1 = FUNC_6(VAR_5, VAR_6);
  FUNC_1(*VAR_1 != ((void*)0));
  return VAR_0;
}
