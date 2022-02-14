
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ source_type; scalar_t__ target_type; scalar_t__ target_class; int specified; } ;
struct avtab_node {TYPE_1__ key; struct avtab_node* next; } ;
struct avtab_key {int specified; scalar_t__ source_type; scalar_t__ target_type; scalar_t__ target_class; } ;
struct avtab_datum {int dummy; } ;
struct avtab {struct avtab_node** htable; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct avtab_key*,int ) ;
 struct avtab_node* FUNC_1 (struct avtab*,int,struct avtab_node*,struct avtab_node*,struct avtab_key*,struct avtab_datum*) ;

__attribute__((used)) static int FUNC_2(struct avtab *VAR_5, struct avtab_key *VAR_6, struct avtab_datum *VAR_7)
{
 int VAR_8;
 struct avtab_node *VAR_9, *VAR_10, *VAR_11;
 u16 VAR_12 = VAR_6->specified & ~(VAR_0|VAR_1);

 if (!VAR_5 || !VAR_5->htable)
  return -VAR_3;

 VAR_8 = FUNC_0(VAR_6, VAR_5->mask);
 for (VAR_9 = ((void*)0), VAR_10 = VAR_5->htable[VAR_8];
      VAR_10;
      VAR_9 = VAR_10, VAR_10 = VAR_10->next) {
  if (VAR_6->source_type == VAR_10->key.source_type &&
      VAR_6->target_type == VAR_10->key.target_type &&
      VAR_6->target_class == VAR_10->key.target_class &&
      (VAR_12 & VAR_10->key.specified))
   return -VAR_2;
  if (VAR_6->source_type < VAR_10->key.source_type)
   break;
  if (VAR_6->source_type == VAR_10->key.source_type &&
      VAR_6->target_type < VAR_10->key.target_type)
   break;
  if (VAR_6->source_type == VAR_10->key.source_type &&
      VAR_6->target_type == VAR_10->key.target_type &&
      VAR_6->target_class < VAR_10->key.target_class)
   break;
 }

 VAR_11 = FUNC_1(VAR_5, VAR_8, VAR_9, VAR_10, VAR_6, VAR_7);
 if (!VAR_11)
  return -VAR_4;

 return 0;
}
