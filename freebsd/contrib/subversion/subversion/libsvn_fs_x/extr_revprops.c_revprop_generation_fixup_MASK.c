
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int has_write_lock; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int* generation; TYPE_3__* fs; } ;
typedef TYPE_2__ revprop_generation_upgrade_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {TYPE_1__* fsap_data; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1,
                         apr_pool_t *VAR_2)
{
  revprop_generation_upgrade_t *VAR_3 = VAR_1;
  svn_fs_x__data_t *VAR_4 = VAR_3->fs->fsap_data;
  FUNC_1(VAR_4->has_write_lock);





  FUNC_0(FUNC_2(VAR_3->generation, VAR_3->fs,
                                       VAR_2));



  if (*VAR_3->generation % 2)
    {
      ++*VAR_3->generation;
      FUNC_0(FUNC_3(VAR_3->fs,
                                            *VAR_3->generation,
                                            VAR_2));
    }

  return VAR_0;
}
