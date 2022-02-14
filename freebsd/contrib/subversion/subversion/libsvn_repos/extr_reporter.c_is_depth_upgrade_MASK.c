
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_node_kind_t ;
typedef scalar_t__ svn_depth_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static svn_boolean_t
FUNC_0(svn_depth_t VAR_8,
                 svn_depth_t VAR_9,
                 svn_node_kind_t VAR_10)
{
  if (VAR_9 == VAR_5
      || VAR_9 <= VAR_8
      || VAR_8 == VAR_4)
    return VAR_0;

  if (VAR_10 == VAR_7
      && VAR_8 == VAR_3)
    return VAR_0;

  if (VAR_10 == VAR_6
      && VAR_8 == VAR_2
      && VAR_9 == VAR_3)
    return VAR_0;

  return VAR_1;
}
