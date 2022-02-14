
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ,char const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_2(const char *VAR_3, svn_node_kind_t VAR_4)
{
  return FUNC_1(VAR_0, ((void*)0),
                           (VAR_4 == VAR_1
                            ? FUNC_0("Directory '%s' is out of date")
                            : VAR_4 == VAR_2
                            ? FUNC_0("File '%s' is out of date")
                            : FUNC_0("'%s' is out of date")),
                           VAR_3);
}
