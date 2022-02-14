
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int kind; int property_name; } ;
typedef TYPE_1__ svn_wc_conflict_description2_t ;
struct TYPE_7__ {TYPE_1__ const* legacy_tree_conflict; int legacy_prop_conflict_propname; int * prop_conflicts; TYPE_1__ const* legacy_text_conflict; } ;
typedef TYPE_2__ svn_client_conflict_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,TYPE_1__ const*) ;




__attribute__((used)) static void
FUNC_3(const svn_wc_conflict_description2_t *VAR_1,
                            svn_client_conflict_t *VAR_2,
                            apr_pool_t *VAR_3)
{
  switch (VAR_1->kind)
    {
      case 129:
        VAR_2->legacy_text_conflict = VAR_1;
        break;

      case 130:
        if (VAR_2->prop_conflicts == ((void*)0))
          VAR_2->prop_conflicts = FUNC_1(VAR_3);
        FUNC_2(VAR_2->prop_conflicts, VAR_1->property_name, VAR_1);
        VAR_2->legacy_prop_conflict_propname = VAR_1->property_name;
        break;

      case 128:
        VAR_2->legacy_tree_conflict = VAR_1;
        break;

      default:
        FUNC_0(VAR_0);
    }
}
