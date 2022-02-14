
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_4__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_boolean_t ;
struct TYPE_5__ {scalar_t__ min_unpacked_rev; scalar_t__ format; } ;
typedef TYPE_2__ fs_fs_data_t ;


 scalar_t__ VAR_0 ;

svn_boolean_t
FUNC_0(svn_fs_t *VAR_1,
                             svn_revnum_t VAR_2)
{
  fs_fs_data_t *VAR_3 = VAR_1->fsap_data;


  return (VAR_2 < VAR_3->min_unpacked_rev)
      && (VAR_2 != 0)
      && (VAR_3->format >= VAR_0);
}
