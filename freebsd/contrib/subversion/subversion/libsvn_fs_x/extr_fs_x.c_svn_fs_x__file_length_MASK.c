
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* data_rep; } ;
typedef TYPE_2__ svn_fs_x__noderev_t ;
typedef scalar_t__ svn_filesize_t ;
typedef int svn_error_t ;
struct TYPE_4__ {scalar_t__ expanded_size; } ;


 int * VAR_0 ;

svn_error_t *
FUNC_0(svn_filesize_t *VAR_1,
                      svn_fs_x__noderev_t *VAR_2)
{
  if (VAR_2->data_rep)
    *VAR_1 = VAR_2->data_rep->expanded_size;
  else
    *VAR_1 = 0;

  return VAR_0;
}
