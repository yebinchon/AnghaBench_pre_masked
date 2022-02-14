
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lock_tokens; } ;
typedef TYPE_1__ svn_fs_access_t ;
typedef int apr_hash_t ;



apr_hash_t *
FUNC_0(svn_fs_access_t *VAR_0)
{
  return VAR_0->lock_tokens;
}
