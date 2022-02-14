
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_4__ {char const* id; int * fsap_data; int * vtable; int base_rev; int * fs; } ;
typedef TYPE_1__ svn_fs_txn_t ;
typedef int svn_fs_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static svn_fs_txn_t *
FUNC_1(svn_fs_t *VAR_1,
         const char *VAR_2,
         svn_revnum_t VAR_3,
         apr_pool_t *VAR_4)
{
  svn_fs_txn_t *VAR_5 = FUNC_0(VAR_4, sizeof(*VAR_5));

  VAR_5->fs = VAR_1;
  VAR_5->id = VAR_2;
  VAR_5->base_rev = VAR_3;
  VAR_5->vtable = &VAR_0;
  VAR_5->fsap_data = ((void*)0);

  return VAR_5;
}
