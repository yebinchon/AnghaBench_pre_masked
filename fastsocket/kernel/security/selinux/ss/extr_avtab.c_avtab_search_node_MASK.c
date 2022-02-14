
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ source_type; scalar_t__ target_type; scalar_t__ target_class; int specified; } ;
struct avtab_node {TYPE_1__ key; struct avtab_node* next; } ;
struct avtab_key {int specified; scalar_t__ source_type; scalar_t__ target_type; scalar_t__ target_class; } ;
struct avtab {struct avtab_node** htable; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct avtab_key*,int ) ;

struct avtab_node*
FUNC_1(struct avtab *VAR_2, struct avtab_key *VAR_3)
{
 int VAR_4;
 struct avtab_node *VAR_5;
 u16 VAR_6 = VAR_3->specified & ~(VAR_0|VAR_1);

 if (!VAR_2 || !VAR_2->htable)
  return ((void*)0);

 VAR_4 = FUNC_0(VAR_3, VAR_2->mask);
 for (VAR_5 = VAR_2->htable[VAR_4]; VAR_5; VAR_5 = VAR_5->next) {
  if (VAR_3->source_type == VAR_5->key.source_type &&
      VAR_3->target_type == VAR_5->key.target_type &&
      VAR_3->target_class == VAR_5->key.target_class &&
      (VAR_6 & VAR_5->key.specified))
   return VAR_5;

  if (VAR_3->source_type < VAR_5->key.source_type)
   break;
  if (VAR_3->source_type == VAR_5->key.source_type &&
      VAR_3->target_type < VAR_5->key.target_type)
   break;
  if (VAR_3->source_type == VAR_5->key.source_type &&
      VAR_3->target_type == VAR_5->key.target_type &&
      VAR_3->target_class < VAR_5->key.target_class)
   break;
 }
 return ((void*)0);
}
