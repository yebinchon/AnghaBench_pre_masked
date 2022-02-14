
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_boolean_t ;
struct TYPE_6__ {scalar_t__ use_block_read; } ;
typedef TYPE_2__ fs_fs_data_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static svn_boolean_t
FUNC_1(svn_fs_t *VAR_0)
{
  fs_fs_data_t *VAR_1 = VAR_0->fsap_data;
  return FUNC_0(VAR_0) && VAR_1->use_block_read;
}
