
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,char const*,int *) ;
 int FUNC_2 (int **,int *,int ,int ,int *,int *) ;
 int * FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *,int ) ;

svn_error_t *
FUNC_5(svn_revnum_t *VAR_4,
                             const char **VAR_5,
                             const char **VAR_6,
                             svn_fs_root_t *VAR_7,
                             const char *VAR_8,
                             apr_pool_t *VAR_9)
{
  apr_hash_t *VAR_10;

  svn_fs_t *VAR_11 = FUNC_3(VAR_7);




  svn_string_t *VAR_12, *VAR_13;


  FUNC_0(FUNC_1(VAR_4, VAR_7, VAR_8, VAR_9));


  FUNC_0(FUNC_2(&VAR_10, VAR_11, *VAR_4, VAR_3,
                                    VAR_9, VAR_9));


  VAR_12 = FUNC_4(VAR_10, VAR_2);
  VAR_13 = FUNC_4(VAR_10, VAR_1);

  *VAR_5 = VAR_12 ? VAR_12->data : ((void*)0);
  *VAR_6 = VAR_13 ? VAR_13->data : ((void*)0);

  return VAR_0;
}
