
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_client_conflict_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {TYPE_1__* src_right_version; TYPE_2__* src_left_version; } ;
struct TYPE_5__ {char* repos_url; char* repos_uuid; } ;
struct TYPE_4__ {char* repos_url; char* repos_uuid; } ;


 int * VAR_0 ;
 TYPE_3__* FUNC_0 (int *) ;

svn_error_t *
FUNC_1(const char **VAR_1,
                                   const char **VAR_2,
                                   svn_client_conflict_t *VAR_3,
                                   apr_pool_t *VAR_4,
                                   apr_pool_t *VAR_5)
{
  if (VAR_1)
    {
      if (FUNC_0(VAR_3)->src_left_version)
        *VAR_1 =
          FUNC_0(VAR_3)->src_left_version->repos_url;
      else if (FUNC_0(VAR_3)->src_right_version)
        *VAR_1 =
          FUNC_0(VAR_3)->src_right_version->repos_url;
      else
        *VAR_1 = ((void*)0);
    }

  if (VAR_2)
    {
      if (FUNC_0(VAR_3)->src_left_version)
        *VAR_2 =
          FUNC_0(VAR_3)->src_left_version->repos_uuid;
      else if (FUNC_0(VAR_3)->src_right_version)
        *VAR_2 =
          FUNC_0(VAR_3)->src_right_version->repos_uuid;
      else
        *VAR_2 = ((void*)0);
    }

  return VAR_0;
}
