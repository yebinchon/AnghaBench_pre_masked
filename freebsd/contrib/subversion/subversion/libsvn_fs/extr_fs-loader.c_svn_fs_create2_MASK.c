
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int (* set_svn_fs_open ) (int *,int ) ;int (* create ) (int *,char const*,int ,int *,int ) ;} ;
typedef TYPE_1__ fs_library_vtable_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__**,char const*,int *) ;
 int FUNC_3 (int *,char const*,int ,int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_6 ;
 char* FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (char const*,int ,int *) ;
 int FUNC_7 (char const*,char const*,int *) ;

svn_error_t *
FUNC_8(svn_fs_t **VAR_7,
               const char *VAR_8,
               apr_hash_t *VAR_9,
               apr_pool_t *VAR_10,
               apr_pool_t *VAR_11)
{
  fs_library_vtable_t *VAR_12;

  const char *VAR_13 = FUNC_5(VAR_9,
                                              VAR_2,
                                              VAR_1);
  FUNC_0(FUNC_2(&VAR_12, VAR_13, VAR_11));


  FUNC_0(FUNC_6(VAR_8, VAR_0, VAR_11));
  FUNC_0(FUNC_7(VAR_8, VAR_13, VAR_11));


  *VAR_7 = FUNC_1(VAR_9, VAR_10);

  FUNC_0(VAR_12->create(*VAR_7, VAR_8, VAR_5, VAR_11,
                         VAR_4));
  FUNC_0(VAR_12->set_svn_fs_open(*VAR_7, VAR_6));

  return VAR_3;
}
