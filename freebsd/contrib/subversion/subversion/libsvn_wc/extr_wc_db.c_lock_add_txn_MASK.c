
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
struct TYPE_7__ {int date; int * comment; int * owner; int token; } ;
typedef TYPE_2__ svn_wc__db_lock_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *,char*,int ,char const*,int ) ;
 int FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_1__*,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_wc__db_wcroot_t *VAR_2,
             const char *VAR_3,
             const svn_wc__db_lock_t *VAR_4,
             apr_pool_t *VAR_5)
{
  svn_sqlite__stmt_t *VAR_6;
  const char *VAR_7;
  apr_int64_t VAR_8;

  FUNC_0(FUNC_6(((void*)0), ((void*)0), ((void*)0),
                                            &VAR_7, &VAR_8,
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            VAR_2, VAR_3,
                                            VAR_5, VAR_5));

  FUNC_0(FUNC_4(&VAR_6, VAR_2->sdb, VAR_0));
  FUNC_0(FUNC_3(VAR_6, "iss",
                            VAR_8, VAR_7, VAR_4->token));

  if (VAR_4->owner != ((void*)0))
    FUNC_0(FUNC_2(VAR_6, 4, VAR_4->owner));

  if (VAR_4->comment != ((void*)0))
    FUNC_0(FUNC_2(VAR_6, 5, VAR_4->comment));

  if (VAR_4->date != 0)
    FUNC_0(FUNC_1(VAR_6, 6, VAR_4->date));

  FUNC_0(FUNC_5(((void*)0), VAR_6));

  return VAR_1;
}
