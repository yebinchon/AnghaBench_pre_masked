
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
struct TYPE_7__ {TYPE_3__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_8__ {int second; int revision; } ;
typedef TYPE_2__ pair_cache_key_t ;
struct TYPE_9__ {int revprop_cache; int revprop_prefix; } ;
typedef TYPE_3__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (scalar_t__*,int ,TYPE_2__*,int *) ;
 int FUNC_3 (int ,TYPE_2__*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_boolean_t *VAR_1,
               svn_fs_t *VAR_2,
               svn_revnum_t VAR_3,
               svn_string_t *VAR_4,
               apr_pool_t *VAR_5)
{
  fs_fs_data_t *VAR_6 = VAR_2->fsap_data;
  pair_cache_key_t VAR_7;


  FUNC_1(VAR_6->revprop_prefix);
  VAR_7.revision = VAR_3;
  VAR_7.second = VAR_6->revprop_prefix;

  if (VAR_1)
    {
      FUNC_0(FUNC_2(VAR_1, VAR_6->revprop_cache, &VAR_7,
                                 VAR_5));
      if (*VAR_1)
        return VAR_0;
    }

  FUNC_0(FUNC_3(VAR_6->revprop_cache, &VAR_7, VAR_4, VAR_5));

  return VAR_0;
}
