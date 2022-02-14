
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int config; TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int flush_to_disk; int block_size; scalar_t__ use_block_read; } ;
typedef TYPE_2__ fs_fs_data_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_fs_t *VAR_4)
{
  fs_fs_data_t *VAR_5 = VAR_4->fsap_data;

  VAR_5->use_block_read = FUNC_1(VAR_4->config,
                                           VAR_1,
                                           VAR_0);
  VAR_5->flush_to_disk = !FUNC_1(VAR_4->config,
                                           VAR_2,
                                           VAR_0);




  if (!VAR_5->use_block_read)
    VAR_5->block_size = FUNC_0(0x1000, VAR_5->block_size);

  return VAR_3;
}
