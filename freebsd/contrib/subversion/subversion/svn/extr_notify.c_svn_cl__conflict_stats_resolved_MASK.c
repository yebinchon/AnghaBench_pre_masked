
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_conflict_kind_t ;
struct TYPE_3__ {int tree_conflicts_resolved; int tree_conflicts; int prop_conflicts_resolved; int prop_conflicts; int text_conflicts_resolved; int text_conflicts; } ;
typedef TYPE_1__ svn_cl__conflict_stats_t ;


 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,char const*,int *) ;




void
FUNC_2(svn_cl__conflict_stats_t *VAR_0,
                                const char *VAR_1,
                                svn_wc_conflict_kind_t VAR_2)
{
  switch (VAR_2)
    {
      case 129:
        if (FUNC_0(VAR_0->text_conflicts, VAR_1))
          {
            FUNC_1(VAR_0->text_conflicts, VAR_1, ((void*)0));
            VAR_0->text_conflicts_resolved++;
          }
        break;
      case 130:
        if (FUNC_0(VAR_0->prop_conflicts, VAR_1))
          {
            FUNC_1(VAR_0->prop_conflicts, VAR_1, ((void*)0));
            VAR_0->prop_conflicts_resolved++;
          }
        break;
      case 128:
        if (FUNC_0(VAR_0->tree_conflicts, VAR_1))
          {
            FUNC_1(VAR_0->tree_conflicts, VAR_1, ((void*)0));
            VAR_0->tree_conflicts_resolved++;
          }
        break;
    }
}
