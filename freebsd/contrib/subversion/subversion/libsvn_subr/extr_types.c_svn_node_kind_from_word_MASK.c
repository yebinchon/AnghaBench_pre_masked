
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_node_kind_t ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

svn_node_kind_t
FUNC_1(const char *VAR_5)
{
  if (VAR_5 == ((void*)0))
    return VAR_4;

  if (FUNC_0(VAR_5, "none") == 0)
    return VAR_2;
  else if (FUNC_0(VAR_5, "file") == 0)
    return VAR_1;
  else if (FUNC_0(VAR_5, "dir") == 0)
    return VAR_0;
  else if (FUNC_0(VAR_5, "symlink") == 0)
    return VAR_3;
  else

    return VAR_4;
}
