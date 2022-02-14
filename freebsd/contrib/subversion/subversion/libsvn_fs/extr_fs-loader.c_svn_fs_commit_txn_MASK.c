
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_12__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_txn_t ;
struct TYPE_13__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_11__ {TYPE_3__* (* commit ) (char const**,int *,TYPE_2__*,int *) ;} ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* VAR_2 ;
 TYPE_3__* FUNC_3 (char const**,int *,TYPE_2__*,int *) ;

svn_error_t *
FUNC_4(const char **VAR_3, svn_revnum_t *VAR_4,
                   svn_fs_txn_t *VAR_5, apr_pool_t *VAR_6)
{
  svn_error_t *VAR_7;

  *VAR_4 = VAR_1;
  if (VAR_3)
    *VAR_3 = ((void*)0);

  VAR_7 = VAR_5->vtable->commit(VAR_3, VAR_4, VAR_5, VAR_6);
  FUNC_0(VAR_7);

  return VAR_2;
}
