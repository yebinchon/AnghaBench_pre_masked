
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_mergeinfo_inheritance_t ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

svn_mergeinfo_inheritance_t
FUNC_1(const char *VAR_3)
{
  if (FUNC_0(VAR_3, "inherited") == 0)
    return VAR_1;
  if (FUNC_0(VAR_3, "nearest-ancestor") == 0)
    return VAR_2;
  return VAR_0;
}
