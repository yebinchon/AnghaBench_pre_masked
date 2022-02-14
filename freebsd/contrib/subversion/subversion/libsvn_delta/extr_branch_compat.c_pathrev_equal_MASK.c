
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rev; int relpath; } ;
typedef TYPE_1__ svn_pathrev_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static svn_boolean_t
FUNC_1(const svn_pathrev_t *VAR_2,
              const svn_pathrev_t *VAR_3)
{
  if (VAR_2->rev != VAR_3->rev)
    return VAR_0;
  if (FUNC_0(VAR_2->relpath, VAR_3->relpath) != 0)
    return VAR_0;

  return VAR_1;
}
