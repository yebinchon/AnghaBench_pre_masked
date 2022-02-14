
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
struct TYPE_8__ {int second; int revision; int member_0; } ;
typedef TYPE_1__ svn_fs_x__pair_cache_key_t ;
struct TYPE_9__ {int revprop_cache; int revprop_generation; } ;
typedef TYPE_2__ svn_fs_x__data_t ;
struct TYPE_10__ {TYPE_2__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int * VAR_0 ;
 int FUNC_3 (int *,char*,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_7 (int **,int const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(apr_hash_t **VAR_1,
              svn_fs_t *VAR_2,
              svn_revnum_t VAR_3,
              const svn_string_t *VAR_4,
              apr_pool_t *VAR_5,
              apr_pool_t *VAR_6)
{
  FUNC_2(FUNC_7(VAR_1, VAR_4, VAR_5),
            FUNC_3(VAR_6, "Failed to parse revprops for r%ld.",
                         VAR_3));

  if (FUNC_4(VAR_2, VAR_6))
    {
      svn_fs_x__data_t *VAR_7 = VAR_2->fsap_data;
      svn_fs_x__pair_cache_key_t VAR_8 = { 0 };

      FUNC_1(FUNC_5(VAR_2));

      VAR_8.revision = VAR_3;
      VAR_8.second = VAR_7->revprop_generation;
      FUNC_0(FUNC_6(VAR_7->revprop_cache, &VAR_8, *VAR_1,
                             VAR_6));
    }

  return VAR_0;
}
