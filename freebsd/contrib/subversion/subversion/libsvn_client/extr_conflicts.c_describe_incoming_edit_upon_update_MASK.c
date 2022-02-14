
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int apr_pool_t ;


 int FUNC_0 (char*) ;
 char const* FUNC_1 (int *,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static const char *
FUNC_2(svn_revnum_t VAR_3,
                                   svn_revnum_t VAR_4,
                                   svn_node_kind_t VAR_5,
                                   svn_node_kind_t VAR_6,
                                   apr_pool_t *VAR_7)
{
  if (VAR_3 < VAR_4)
    {
      if (VAR_6 == VAR_0)
        return FUNC_1(VAR_7,
                            FUNC_0("Changes destined for a directory arrived "
                              "via the following revisions during update "
                              "from r%ld to r%ld."), VAR_3, VAR_4);
      else if (VAR_6 == VAR_1 ||
               VAR_6 == VAR_2)
        return FUNC_1(VAR_7,
                            FUNC_0("Changes destined for a file arrived "
                              "via the following revisions during update "
                              "from r%ld to r%ld"), VAR_3, VAR_4);
      else
        return FUNC_1(VAR_7,
                            FUNC_0("Changes from the following revisions arrived "
                              "during update from r%ld to r%ld"),
                            VAR_3, VAR_4);
    }
  else
    {
      if (VAR_6 == VAR_0)
        return FUNC_1(VAR_7,
                            FUNC_0("Changes destined for a directory arrived "
                              "via the following revisions during backwards "
                              "update from r%ld to r%ld"),
                            VAR_3, VAR_4);
      else if (VAR_6 == VAR_1 ||
               VAR_6 == VAR_2)
        return FUNC_1(VAR_7,
                            FUNC_0("Changes destined for a file arrived "
                              "via the following revisions during backwards "
                              "update from r%ld to r%ld"),
                            VAR_3, VAR_4);
      else
        return FUNC_1(VAR_7,
                            FUNC_0("Changes from the following revisions arrived "
                              "during backwards update from r%ld to r%ld"),
                            VAR_3, VAR_4);
    }
}
