
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct avtab_datum {int dummy; } ;
struct avtab_key {int dummy; } ;
struct avtab_node {struct avtab_node* next; struct avtab_datum datum; struct avtab_key key; } ;
struct avtab {int nel; struct avtab_node** htable; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct avtab_node* FUNC_0 (int ,int ) ;

__attribute__((used)) static struct avtab_node*
FUNC_1(struct avtab *VAR_2, int VAR_3,
    struct avtab_node *VAR_4, struct avtab_node *VAR_5,
    struct avtab_key *VAR_6, struct avtab_datum *VAR_7)
{
 struct avtab_node *VAR_8;
 VAR_8 = FUNC_0(VAR_1, VAR_0);
 if (VAR_8 == ((void*)0))
  return ((void*)0);
 VAR_8->key = *VAR_6;
 VAR_8->datum = *VAR_7;
 if (VAR_4) {
  VAR_8->next = VAR_4->next;
  VAR_4->next = VAR_8;
 } else {
  VAR_8->next = VAR_2->htable[VAR_3];
  VAR_2->htable[VAR_3] = VAR_8;
 }

 VAR_2->nel++;
 return VAR_8;
}
