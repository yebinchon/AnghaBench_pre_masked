
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_3__ {int change_set; } ;
typedef TYPE_1__ svn_fs_x__id_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(svn_fs_x__id_t *VAR_0,
             svn_revnum_t VAR_1)
{
  if (!FUNC_1(VAR_0->change_set))
    VAR_0->change_set = FUNC_0(VAR_1);
}
