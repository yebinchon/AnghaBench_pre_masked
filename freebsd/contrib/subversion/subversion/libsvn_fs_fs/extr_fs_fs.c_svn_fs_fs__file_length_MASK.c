
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_filesize_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int expanded_size; } ;
typedef TYPE_1__ representation_t ;
struct TYPE_5__ {TYPE_1__* data_rep; } ;
typedef TYPE_2__ node_revision_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;

svn_error_t *
FUNC_0(svn_filesize_t *VAR_1,
                       node_revision_t *VAR_2,
                       apr_pool_t *VAR_3)
{
  representation_t *VAR_4 = VAR_2->data_rep;
  if (!VAR_4)
    {

      *VAR_1 = 0;
    }
  else
    {
      *VAR_1 = VAR_4->expanded_size;
    }

  return VAR_0;
}
