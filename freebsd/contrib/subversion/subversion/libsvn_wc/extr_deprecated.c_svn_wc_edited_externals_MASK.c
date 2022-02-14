
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * externals_new; int * externals_old; } ;
typedef TYPE_1__ svn_wc_traversal_info_t ;
typedef int apr_hash_t ;



void
FUNC_0(apr_hash_t **VAR_0,
                        apr_hash_t **VAR_1,
                        svn_wc_traversal_info_t *VAR_2)
{
  *VAR_0 = VAR_2->externals_old;
  *VAR_1 = VAR_2->externals_new;
}
