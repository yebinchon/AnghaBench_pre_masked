
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; } ;
typedef TYPE_1__ transaction_t ;
typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int ,int ,char const*) ;
 int FUNC_3 (TYPE_1__**,int *,char const*,int *,int *) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_4(transaction_t **VAR_4,
        svn_fs_t *VAR_5,
        const char *VAR_6,
        svn_boolean_t VAR_7,
        trail_t *VAR_8,
        apr_pool_t *VAR_9)
{
  transaction_t *VAR_10;
  FUNC_0(FUNC_3(&VAR_10, VAR_5, VAR_6, VAR_8, VAR_9));
  if (VAR_7 && (VAR_10->kind != VAR_3))
    return FUNC_2(VAR_1, 0,
                             FUNC_1("Transaction is not dead: '%s'"), VAR_6);
  if ((! VAR_7) && (VAR_10->kind == VAR_3))
    return FUNC_2(VAR_0, 0,
                             FUNC_1("Transaction is dead: '%s'"), VAR_6);
  *VAR_4 = VAR_10;
  return VAR_2;
}
