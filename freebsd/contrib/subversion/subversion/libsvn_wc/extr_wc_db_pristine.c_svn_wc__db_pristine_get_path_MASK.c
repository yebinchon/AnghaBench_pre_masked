
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
struct TYPE_12__ {scalar_t__ kind; } ;
typedef TYPE_2__ svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const**,int ,TYPE_2__ const*,int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (TYPE_2__ const*,int *) ;
 int FUNC_6 (char const*) ;
 int * FUNC_7 (int ,int *,int ,int ) ;
 int FUNC_8 (int *,int *,char const*,TYPE_2__ const*,int *) ;
 int FUNC_9 (TYPE_2__ const**,int *,char const*,TYPE_2__ const*,int *,int *) ;
 int FUNC_10 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_11(const char **VAR_3,
                             svn_wc__db_t *VAR_4,
                             const char *VAR_5,
                             const svn_checksum_t *VAR_6,
                             apr_pool_t *VAR_7,
                             apr_pool_t *VAR_8)
{
  svn_wc__db_wcroot_t *VAR_9;
  const char *VAR_10;
  svn_boolean_t VAR_11;

  FUNC_1(VAR_3 != ((void*)0));
  FUNC_1(FUNC_6(VAR_5));
  FUNC_1(VAR_6 != ((void*)0));


  if (VAR_6->kind != VAR_2)
    FUNC_0(FUNC_9(&VAR_6, VAR_4, VAR_5,
                                         VAR_6,
                                         VAR_8, VAR_8));
  FUNC_1(VAR_6->kind == VAR_2);

  FUNC_0(FUNC_10(&VAR_9, &VAR_10,
                                             VAR_4, VAR_5,
                                             VAR_8, VAR_8));
  FUNC_2(VAR_9);

  FUNC_0(FUNC_8(&VAR_11, VAR_4, VAR_5, VAR_6,
                                    VAR_8));
  if (! VAR_11)
    return FUNC_7(VAR_0, ((void*)0),
                             FUNC_3("The pristine text with checksum '%s' was "
                               "not found"),
                             FUNC_5(VAR_6,
                                                             VAR_8));

  FUNC_0(FUNC_4(VAR_3, VAR_9->abspath,
                             VAR_6,
                             VAR_7, VAR_8));

  return VAR_1;
}
