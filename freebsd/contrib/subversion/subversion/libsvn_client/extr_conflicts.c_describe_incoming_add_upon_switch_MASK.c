
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct conflict_tree_incoming_add_details {int deleted_rev; int deleted_rev_author; int added_rev; int added_rev_author; } ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char const* FUNC_2 (int *,int ,char const*,int ,int ,int ,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static const char *
FUNC_3(
  struct conflict_tree_incoming_add_details *VAR_3,
  svn_node_kind_t VAR_4,
  const char *VAR_5,
  svn_revnum_t VAR_6,
  apr_pool_t *VAR_7)
{
  if (VAR_4 == VAR_0)
    {
      if (FUNC_0(VAR_3->added_rev) &&
          FUNC_0(VAR_3->deleted_rev))
        return FUNC_2(VAR_7,
                            FUNC_1("A new directory appeared during switch to\n"
                              "'^/%s@%ld'.\n"
                              "It was added by %s in r%ld and later deleted "
                              "by %s in r%ld."), VAR_5, VAR_6,
                            VAR_3->added_rev_author, VAR_3->added_rev,
                            VAR_3->deleted_rev_author, VAR_3->deleted_rev);
      else if (FUNC_0(VAR_3->added_rev))
        return FUNC_2(VAR_7,
                            FUNC_1("A new directory appeared during switch to\n"
                             "'^/%s@%ld'.\nIt was added by %s in r%ld."),
                            VAR_5, VAR_6,
                            VAR_3->added_rev_author, VAR_3->added_rev);
      else
        return FUNC_2(VAR_7,
                            FUNC_1("A new directory appeared during switch to\n"
                              "'^/%s@%ld'.\nIt was deleted by %s in r%ld."),
                            VAR_5, VAR_6,
                            VAR_3->deleted_rev_author, VAR_3->deleted_rev);
    }
  else if (VAR_4 == VAR_1 ||
           VAR_4 == VAR_2)
    {
      if (FUNC_0(VAR_3->added_rev) &&
          FUNC_0(VAR_3->deleted_rev))
        return FUNC_2(VAR_7,
                            FUNC_1("A new file appeared during switch to\n"
                              "'^/%s@%ld'.\n"
                              "It was added by %s in r%ld and later deleted "
                              "by %s in r%ld."), VAR_5, VAR_6,
                            VAR_3->added_rev_author, VAR_3->added_rev,
                            VAR_3->deleted_rev_author, VAR_3->deleted_rev);
      else if (FUNC_0(VAR_3->added_rev))
        return FUNC_2(VAR_7,
                            FUNC_1("A new file appeared during switch to\n"
                              "'^/%s@%ld'.\n"
                              "It was added by %s in r%ld."),
                            VAR_5, VAR_6,
                            VAR_3->added_rev_author, VAR_3->added_rev);
      else
        return FUNC_2(VAR_7,
                            FUNC_1("A new file appeared during switch to\n"
                              "'^/%s@%ld'.\n"
                              "It was deleted by %s in r%ld."),
                            VAR_5, VAR_6,
                            VAR_3->deleted_rev_author, VAR_3->deleted_rev);
    }
  else
    {
      if (FUNC_0(VAR_3->added_rev) &&
          FUNC_0(VAR_3->deleted_rev))
        return FUNC_2(VAR_7,
                            FUNC_1("A new item appeared during switch to\n"
                              "'^/%s@%ld'.\n"
                              "It was added by %s in r%ld and later deleted "
                              "by %s in r%ld."), VAR_5, VAR_6,
                            VAR_3->added_rev_author, VAR_3->added_rev,
                            VAR_3->deleted_rev_author, VAR_3->deleted_rev);
      else if (FUNC_0(VAR_3->added_rev))
        return FUNC_2(VAR_7,
                            FUNC_1("A new item appeared during switch to\n"
                              "'^/%s@%ld'.\n"
                              "It was added by %s in r%ld."),
                            VAR_5, VAR_6,
                            VAR_3->added_rev_author, VAR_3->added_rev);
      else
        return FUNC_2(VAR_7,
                            FUNC_1("A new item appeared during switch to\n"
                              "'^/%s@%ld'.\n"
                              "It was deleted by %s in r%ld."),
                            VAR_5, VAR_6,
                            VAR_3->deleted_rev_author, VAR_3->deleted_rev);
    }
}
