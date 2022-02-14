
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct conflict_tree_incoming_add_details {int added_rev; int added_rev_author; } ;
typedef int apr_pool_t ;


 int FUNC_0 (char*) ;
 char const* FUNC_1 (int *,int ,char const*,scalar_t__,scalar_t__,int ,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static const char *
FUNC_2(
  struct conflict_tree_incoming_add_details *VAR_3,
  svn_node_kind_t VAR_4,
  svn_revnum_t VAR_5,
  const char *VAR_6,
  svn_revnum_t VAR_7,
  apr_pool_t *VAR_8)
{
  if (VAR_4 == VAR_0)
    {
      if (VAR_5 + 1 == VAR_7)
        return FUNC_1(VAR_8,
                            FUNC_0("A new directory appeared during merge of\n"
                              "'^/%s:%ld'.\nIt was added by %s in r%ld."),
                            VAR_6, VAR_7,
                            VAR_3->added_rev_author, VAR_3->added_rev);
      else
        return FUNC_1(VAR_8,
                            FUNC_0("A new directory appeared during merge of\n"
                              "'^/%s:%ld-%ld'.\nIt was added by %s in r%ld."),
                            VAR_6, VAR_5 + 1, VAR_7,
                            VAR_3->added_rev_author, VAR_3->added_rev);
    }
  else if (VAR_4 == VAR_1 ||
           VAR_4 == VAR_2)
    {
      if (VAR_5 + 1 == VAR_7)
        return FUNC_1(VAR_8,
                            FUNC_0("A new file appeared during merge of\n"
                              "'^/%s:%ld'.\nIt was added by %s in r%ld."),
                            VAR_6, VAR_7,
                            VAR_3->added_rev_author, VAR_3->added_rev);
      else
        return FUNC_1(VAR_8,
                            FUNC_0("A new file appeared during merge of\n"
                              "'^/%s:%ld-%ld'.\nIt was added by %s in r%ld."),
                            VAR_6, VAR_5 + 1, VAR_7,
                            VAR_3->added_rev_author, VAR_3->added_rev);
    }
  else
    {
      if (VAR_5 + 1 == VAR_7)
        return FUNC_1(VAR_8,
                            FUNC_0("A new item appeared during merge of\n"
                              "'^/%s:%ld'.\nIt was added by %s in r%ld."),
                            VAR_6, VAR_7,
                            VAR_3->added_rev_author, VAR_3->added_rev);
      else
        return FUNC_1(VAR_8,
                            FUNC_0("A new item appeared during merge of\n"
                              "'^/%s:%ld-%ld'.\nIt was added by %s in r%ld."),
                            VAR_6, VAR_5 + 1, VAR_7,
                            VAR_3->added_rev_author, VAR_3->added_rev);
    }
}
