
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int revprop_generation; int flush_to_disk; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_6__ {TYPE_1__* fsap_data; int * vtable; int pool; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;


 int * VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_fs_t *VAR_3)
{
  svn_fs_x__data_t *VAR_4 = FUNC_0(VAR_3->pool, sizeof(*VAR_4));
  VAR_4->revprop_generation = -1;
  VAR_4->flush_to_disk = VAR_1;

  VAR_3->vtable = &VAR_2;
  VAR_3->fsap_data = VAR_4;
  return VAR_0;
}
