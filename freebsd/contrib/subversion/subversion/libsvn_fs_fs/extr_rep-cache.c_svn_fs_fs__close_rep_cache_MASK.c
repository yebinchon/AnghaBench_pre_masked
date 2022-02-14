
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_5__ {scalar_t__ rep_cache_db_opened; int * rep_cache_db; } ;
typedef TYPE_2__ fs_fs_data_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;

svn_error_t *
FUNC_2(svn_fs_t *VAR_1)
{
  fs_fs_data_t *VAR_2 = VAR_1->fsap_data;

  if (VAR_2->rep_cache_db)
    {
      FUNC_0(FUNC_1(VAR_2->rep_cache_db));
      VAR_2->rep_cache_db = ((void*)0);
      VAR_2->rep_cache_db_opened = 0;
    }

  return VAR_0;
}
