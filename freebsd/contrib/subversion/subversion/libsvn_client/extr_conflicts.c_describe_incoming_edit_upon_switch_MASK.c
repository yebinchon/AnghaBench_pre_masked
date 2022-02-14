
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int apr_pool_t ;


 int FUNC_0 (char*) ;
 char const* FUNC_1 (int *,int ,char const*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static const char *
FUNC_2(const char *VAR_3,
                                   svn_revnum_t VAR_4,
                                   svn_node_kind_t VAR_5,
                                   apr_pool_t *VAR_6)
{
  if (VAR_5 == VAR_0)
    return FUNC_1(VAR_6,
                        FUNC_0("Changes destined for a directory arrived via "
                          "the following revisions during switch to\n"
                          "'^/%s@r%ld'"),
                        VAR_3, VAR_4);
  else if (VAR_5 == VAR_1 ||
           VAR_5 == VAR_2)
    return FUNC_1(VAR_6,
                        FUNC_0("Changes destined for a directory arrived via "
                          "the following revisions during switch to\n"
                          "'^/%s@r%ld'"),
                        VAR_3, VAR_4);
  else
    return FUNC_1(VAR_6,
                        FUNC_0("Changes from the following revisions arrived "
                          "during switch to\n'^/%s@r%ld'"),
                        VAR_3, VAR_4);
}
