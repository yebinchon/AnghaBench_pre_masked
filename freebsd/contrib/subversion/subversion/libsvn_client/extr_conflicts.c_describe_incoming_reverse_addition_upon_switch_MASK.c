
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct conflict_tree_incoming_delete_details {scalar_t__ replacing_node_kind; int added_rev; int rev_author; } ;
typedef int apr_pool_t ;


 int FUNC_0 (char*) ;
 char const* FUNC_1 (int *,int ,char const*,int ,char const*,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static const char *
FUNC_2(
  struct conflict_tree_incoming_delete_details *VAR_3,
  svn_node_kind_t VAR_4,
  const char *VAR_5,
  svn_revnum_t VAR_6,
  const char *VAR_7,
  svn_revnum_t VAR_8,
  apr_pool_t *VAR_9)
{
  if (VAR_3->replacing_node_kind == VAR_1 ||
      VAR_3->replacing_node_kind == VAR_2)
    {
      if (VAR_4 == VAR_0)
        return FUNC_1(VAR_9,
                            FUNC_0("Directory switched from\n"
                              "'^/%s@%ld'\nto\n'^/%s@%ld'\n"
                              "was a file before the replacement made by %s "
                              "in r%ld."),
                            VAR_5, VAR_6,
                            VAR_7, VAR_8,
                            VAR_3->rev_author, VAR_3->added_rev);
      else if (VAR_4 == VAR_1 ||
               VAR_4 == VAR_2)
        return FUNC_1(VAR_9,
                            FUNC_0("File switched from\n"
                              "'^/%s@%ld'\nto\n'^/%s@%ld'\nwas a "
                              "file from another line of history before the "
                              "replacement made by %s in r%ld."),
                            VAR_5, VAR_6,
                            VAR_7, VAR_8,
                            VAR_3->rev_author, VAR_3->added_rev);
      else
        return FUNC_1(VAR_9,
                            FUNC_0("Item switched from\n"
                              "'^/%s@%ld'\nto\n'^/%s@%ld'\nwas "
                              "replaced with a file by %s in r%ld."),
                            VAR_5, VAR_6,
                            VAR_7, VAR_8,
                            VAR_3->rev_author, VAR_3->added_rev);
    }
  else if (VAR_3->replacing_node_kind == VAR_0)
    {
      if (VAR_4 == VAR_0)
        return FUNC_1(VAR_9,
                            FUNC_0("Directory switched from\n"
                              "'^/%s@%ld'\nto\n'^/%s@%ld'\n"
                              "was a directory from another line of history "
                              "before the replacement made by %s in r%ld."),
                            VAR_5, VAR_6,
                            VAR_7, VAR_8,
                            VAR_3->rev_author, VAR_3->added_rev);
      else if (VAR_4 == VAR_1 ||
               VAR_4 == VAR_2)
        return FUNC_1(VAR_9,
                            FUNC_0("Directory switched from\n"
                              "'^/%s@%ld'\nto\n'^/%s@%ld'\n"
                              "was a file before the replacement made by %s "
                              "in r%ld."),
                            VAR_5, VAR_6,
                            VAR_7, VAR_8,
                            VAR_3->rev_author, VAR_3->added_rev);
      else
        return FUNC_1(VAR_9,
                            FUNC_0("Item switched from\n"
                              "'^/%s@%ld'\nto\n'^/%s@%ld'\nwas "
                              "replaced with a directory by %s in r%ld."),
                            VAR_5, VAR_6,
                            VAR_7, VAR_8,
                            VAR_3->rev_author, VAR_3->added_rev);
    }
  else
    {
      if (VAR_4 == VAR_0)
        return FUNC_1(VAR_9,
                            FUNC_0("Directory switched from\n"
                              "'^/%s@%ld'\nto\n'^/%s@%ld'\n"
                              "did not exist before it was added by %s in "
                              "r%ld."),
                            VAR_5, VAR_6,
                            VAR_7, VAR_8,
                            VAR_3->rev_author, VAR_3->added_rev);
      else if (VAR_4 == VAR_1 ||
               VAR_4 == VAR_2)
        return FUNC_1(VAR_9,
                            FUNC_0("File switched from\n"
                              "'^/%s@%ld'\nto\n'^/%s@%ld'\ndid "
                              "not exist before it was added by %s in "
                              "r%ld."),
                            VAR_5, VAR_6,
                            VAR_7, VAR_8,
                            VAR_3->rev_author, VAR_3->added_rev);
      else
        return FUNC_1(VAR_9,
                            FUNC_0("Item switched from\n"
                              "'^/%s@%ld'\nto\n'^/%s@%ld'\ndid "
                              "not exist before it was added by %s in "
                              "r%ld."),
                            VAR_5, VAR_6,
                            VAR_7, VAR_8,
                            VAR_3->rev_author, VAR_3->added_rev);
    }
}
