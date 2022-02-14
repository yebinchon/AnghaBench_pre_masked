
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,char const*,int ,void*,int *) ;
 int FUNC_4 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_5(svn_wc__db_t *VAR_1,
                             const char *VAR_2,
                             const char *VAR_3,
                             svn_cancel_func_t VAR_4,
                             void *VAR_5,
                             apr_pool_t *VAR_6)
{
  svn_wc__db_wcroot_t *VAR_7, *VAR_8;
  const char *VAR_9, *VAR_10;

  FUNC_0(FUNC_4(&VAR_7, &VAR_9,
                                                VAR_1, VAR_2,
                                                VAR_6, VAR_6));
  FUNC_2(VAR_7);
  FUNC_0(FUNC_4(&VAR_8, &VAR_10,
                                                VAR_1, VAR_3,
                                                VAR_6, VAR_6));
  FUNC_2(VAR_8);

  if (VAR_7 == VAR_8
      || VAR_7->sdb == VAR_8->sdb)
    {
      return VAR_0;
    }

  FUNC_1(
    FUNC_3(VAR_7, VAR_8, VAR_9,
                          VAR_4, VAR_5, VAR_6),
    VAR_8);

  return VAR_0;
}
