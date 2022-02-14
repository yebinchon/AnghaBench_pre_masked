
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t svn_fs_path_change_kind_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static char
FUNC_0(svn_fs_path_change_kind_t VAR_2)
{
  const char VAR_3[] = "MADR";

  if (VAR_2 < VAR_0 || VAR_2 > VAR_1)
    return 0;

  return VAR_3[VAR_2];
}
