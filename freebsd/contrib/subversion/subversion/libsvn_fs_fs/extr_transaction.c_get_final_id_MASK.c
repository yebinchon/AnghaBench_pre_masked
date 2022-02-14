
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_3__ {scalar_t__ revision; int number; } ;
typedef TYPE_1__ svn_fs_fs__id_part_t ;
typedef scalar_t__ apr_uint64_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(svn_fs_fs__id_part_t *VAR_2,
             svn_revnum_t VAR_3,
             apr_uint64_t VAR_4,
             int VAR_5)
{
  if (VAR_2->revision == VAR_1)
    {
      if (VAR_5 >= VAR_0)
        {
          VAR_2->revision = VAR_3;
        }
      else
        {
          VAR_2->revision = 0;
          VAR_2->number += VAR_4;
        }
    }
}
