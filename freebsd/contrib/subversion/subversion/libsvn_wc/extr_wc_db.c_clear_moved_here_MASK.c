
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char const*,int *) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (int ,int *,int ,int ) ;
 int FUNC_5 (int *,char*,int ,char const*,int ) ;
 int FUNC_6 (int **,int ,int ) ;
 int FUNC_7 (int*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_wc__db_wcroot_t *VAR_3,
                 const char *VAR_4,
                 apr_pool_t *VAR_5)
{
  svn_sqlite__stmt_t *VAR_6;
  int VAR_7;

  FUNC_0(FUNC_6(&VAR_6, VAR_3->sdb,
                                    VAR_0));
  FUNC_0(FUNC_5(VAR_6, "isd", VAR_3->wc_id, VAR_4,
                            FUNC_3(VAR_4)));

  FUNC_0(FUNC_7(&VAR_7, VAR_6));

  if (VAR_7 == 0)
     return FUNC_4(VAR_1, ((void*)0),
                              FUNC_1("The node '%s' was not found."),
                              FUNC_2(VAR_3, VAR_4,
                                                     VAR_5));

  return VAR_2;
}
