
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int text_conflicts_resolved; int prop_conflicts_resolved; int tree_conflicts_resolved; scalar_t__ skipped_paths; int tree_conflicts; int prop_conflicts; int text_conflicts; } ;
typedef TYPE_1__ svn_cl__conflict_stats_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,...) ;

svn_error_t *
FUNC_6(svn_cl__conflict_stats_t *VAR_1,
                             apr_pool_t *VAR_2)
{
  int VAR_3 = FUNC_2(VAR_1->text_conflicts);
  int VAR_4 = FUNC_2(VAR_1->prop_conflicts);
  int VAR_5 = FUNC_2(VAR_1->tree_conflicts);
  int VAR_6 = VAR_1->text_conflicts_resolved;
  int VAR_7 = VAR_1->prop_conflicts_resolved;
  int VAR_8 = VAR_1->tree_conflicts_resolved;

  if (VAR_3 > 0 || VAR_6 > 0
      || VAR_4 > 0 || VAR_7 > 0
      || VAR_5 > 0 || VAR_8 > 0
      || VAR_1->skipped_paths > 0)
    FUNC_0(FUNC_5(VAR_2,
                               FUNC_1("Summary of conflicts:\n")));

  if (VAR_6 == 0 && VAR_7 == 0 && VAR_8 == 0)
    {
      if (VAR_3 > 0)
        FUNC_0(FUNC_5(VAR_2,
          FUNC_1("  Text conflicts: %d\n"),
          VAR_3));
      if (VAR_4 > 0)
        FUNC_0(FUNC_5(VAR_2,
          FUNC_1("  Property conflicts: %d\n"),
          VAR_4));
      if (VAR_5 > 0)
        FUNC_0(FUNC_5(VAR_2,
          FUNC_1("  Tree conflicts: %d\n"),
          VAR_5));
    }
  else
    {
      if (VAR_3 > 0 || VAR_6 > 0)
        FUNC_0(FUNC_5(VAR_2,
                                   FUNC_1("  Text conflicts: %s (%s)\n"),
                                   FUNC_3(VAR_2, VAR_3),
                                   FUNC_4(VAR_2, VAR_6)));
      if (VAR_4 > 0 || VAR_7 > 0)
        FUNC_0(FUNC_5(VAR_2,
                                   FUNC_1("  Property conflicts: %s (%s)\n"),
                                   FUNC_3(VAR_2, VAR_4),
                                   FUNC_4(VAR_2, VAR_7)));
      if (VAR_5 > 0 || VAR_8 > 0)
        FUNC_0(FUNC_5(VAR_2,
                                   FUNC_1("  Tree conflicts: %s (%s)\n"),
                                   FUNC_3(VAR_2, VAR_5),
                                   FUNC_4(VAR_2, VAR_8)));
    }
  if (VAR_1->skipped_paths > 0)
    FUNC_0(FUNC_5(VAR_2,
                               FUNC_1("  Skipped paths: %d\n"),
                               VAR_1->skipped_paths));

  return VAR_0;
}
