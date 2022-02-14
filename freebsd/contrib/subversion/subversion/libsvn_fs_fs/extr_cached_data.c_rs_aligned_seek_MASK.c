
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_10__ {TYPE_3__* sfile; } ;
typedef TYPE_4__ rep_state_t ;
struct TYPE_11__ {int block_size; } ;
typedef TYPE_5__ fs_fs_data_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
struct TYPE_9__ {TYPE_2__* rfile; TYPE_1__* fs; } ;
struct TYPE_8__ {int file; } ;
struct TYPE_7__ {TYPE_5__* fsap_data; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(rep_state_t *VAR_0,
                apr_off_t *VAR_1,
                apr_off_t VAR_2,
                apr_pool_t *VAR_3)
{
  fs_fs_data_t *VAR_4 = VAR_0->sfile->fs->fsap_data;
  return FUNC_0(FUNC_1(VAR_0->sfile->rfile->file,
                                                  VAR_4->block_size,
                                                  VAR_1, VAR_2,
                                                  VAR_3));
}
