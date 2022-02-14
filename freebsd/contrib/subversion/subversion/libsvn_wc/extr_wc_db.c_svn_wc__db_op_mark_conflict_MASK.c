
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int const*,int *) ;
 int FUNC_4 (TYPE_1__*,char const*,int ,int *) ;
 int VAR_1 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_1__*,char const*,int const*,int *) ;
 int FUNC_7 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_8(svn_wc__db_t *VAR_2,
                            const char *VAR_3,
                            const svn_skel_t *VAR_4,
                            const svn_skel_t *VAR_5,
                            apr_pool_t *VAR_6)
{
  svn_wc__db_wcroot_t *VAR_7;
  const char *VAR_8;

  FUNC_1(FUNC_5(VAR_3));

  FUNC_0(FUNC_7(&VAR_7, &VAR_8, VAR_2,
                              VAR_3, VAR_6, VAR_6));
  FUNC_2(VAR_7);

  FUNC_0(FUNC_6(VAR_7, VAR_8,
                                            VAR_4, VAR_6));


  if (VAR_5)
    FUNC_0(FUNC_3(VAR_7->sdb, VAR_5, VAR_6));

  FUNC_0(FUNC_4(VAR_7, VAR_3, VAR_1, VAR_6));

  return VAR_0;

}
