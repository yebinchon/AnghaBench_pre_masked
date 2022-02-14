
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int minor; char* tag; scalar_t__ patch; int major; } ;
typedef TYPE_1__ svn_version_t ;
struct TYPE_7__ {int format; } ;
typedef TYPE_2__ svn_repos_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;


 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int) ;

svn_error_t *
FUNC_1(int *VAR_2,
                      svn_version_t **VAR_3,
                      svn_repos_t *VAR_4,
                      apr_pool_t *VAR_5,
                      apr_pool_t *VAR_6)
{
  *VAR_2 = VAR_4->format;
  *VAR_3 = FUNC_0(VAR_5, sizeof(svn_version_t));

  (*VAR_3)->major = VAR_1;
  (*VAR_3)->minor = 0;
  (*VAR_3)->patch = 0;
  (*VAR_3)->tag = "";

  switch (VAR_4->format)
    {
    case 128:
      break;
    case 129:
      (*VAR_3)->minor = 4;
      break;





    }

  return VAR_0;
}
