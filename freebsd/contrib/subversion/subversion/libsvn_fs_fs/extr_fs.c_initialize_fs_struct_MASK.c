
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* fsap_data; int * vtable; int pool; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int flush_to_disk; scalar_t__ revprop_prefix; int use_log_addressing; } ;
typedef TYPE_2__ fs_fs_data_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ,int) ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_fs_t *VAR_4)
{
  fs_fs_data_t *VAR_5 = FUNC_0(VAR_4->pool, sizeof(*VAR_5));
  VAR_5->use_log_addressing = VAR_0;
  VAR_5->revprop_prefix = 0;
  VAR_5->flush_to_disk = VAR_2;

  VAR_4->vtable = &VAR_3;
  VAR_4->fsap_data = VAR_5;
  return VAR_1;
}
