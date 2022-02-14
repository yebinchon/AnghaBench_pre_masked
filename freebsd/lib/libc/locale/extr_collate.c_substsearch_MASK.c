
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct xlocale_collate {TYPE_2__** subst_table; TYPE_1__* info; } ;
typedef int int32_t ;
struct TYPE_4__ {int const key; int const* pri; } ;
typedef TYPE_2__ collate_subst_t ;
struct TYPE_3__ {int* subst_count; int directive_count; } ;


 int const VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static const int32_t *
FUNC_1(struct xlocale_collate *VAR_1, const wchar_t VAR_2, int VAR_3)
{
 const collate_subst_t *VAR_4;
 int VAR_5 = VAR_1->info->subst_count[VAR_3];

 if (VAR_5 == 0)
  return (((void*)0));

 if (VAR_3 >= VAR_1->info->directive_count)
  return (((void*)0));

 if (!(VAR_2 & VAR_0))
  return (((void*)0));

 VAR_4 = VAR_1->subst_table[VAR_3] + (VAR_2 & ~VAR_0);
 FUNC_0(VAR_4->key == VAR_2);

 return (VAR_4->pri);
}
