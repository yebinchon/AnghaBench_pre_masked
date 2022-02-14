
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct role_trans {struct role_trans* next; struct ocontext* head; struct role_trans* fstype; } ;
struct role_allow {struct role_allow* next; struct ocontext* head; struct role_allow* fstype; } ;
struct ebitmap {int dummy; } ;
struct TYPE_4__ {int nprim; } ;
struct policydb {struct ebitmap permissive_map; struct ebitmap policycaps; scalar_t__ type_attr_map_array; TYPE_2__ p_types; int range_tr; struct role_trans* role_allow; struct role_trans* role_tr; struct role_trans* genfs; struct ocontext** ocontexts; int te_avtab; struct role_trans* type_val_to_struct; struct role_trans* user_val_to_struct; struct role_trans* role_val_to_struct; struct role_trans* class_val_to_struct; struct role_trans** sym_val_to_name; TYPE_1__* symtab; } ;
struct ocontext {struct ocontext* next; } ;
struct genfs {struct genfs* next; struct ocontext* head; struct genfs* fstype; } ;
struct TYPE_3__ {int table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct policydb*) ;
 int FUNC_2 () ;
 int * VAR_3 ;
 int FUNC_3 (struct ebitmap*) ;
 int FUNC_4 (scalar_t__) ;
 struct ebitmap* FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (struct role_trans*) ;
 int FUNC_9 (struct ocontext*,int) ;
 int VAR_4 ;

void FUNC_10(struct policydb *VAR_5)
{
 struct ocontext *VAR_6, *VAR_7;
 struct genfs *VAR_8, *VAR_9;
 int VAR_10;
 struct role_allow *VAR_11, *VAR_12 = ((void*)0);
 struct role_trans *VAR_13, *VAR_14 = ((void*)0);

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  FUNC_2();
  FUNC_7(VAR_5->symtab[VAR_10].table, VAR_3[VAR_10], ((void*)0));
  FUNC_6(VAR_5->symtab[VAR_10].table);
 }

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
  FUNC_8(VAR_5->sym_val_to_name[VAR_10]);

 FUNC_8(VAR_5->class_val_to_struct);
 FUNC_8(VAR_5->role_val_to_struct);
 FUNC_8(VAR_5->user_val_to_struct);
 FUNC_8(VAR_5->type_val_to_struct);

 FUNC_0(&VAR_5->te_avtab);

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  FUNC_2();
  VAR_6 = VAR_5->ocontexts[VAR_10];
  while (VAR_6) {
   VAR_7 = VAR_6;
   VAR_6 = VAR_6->next;
   FUNC_9(VAR_7, VAR_10);
  }
  VAR_5->ocontexts[VAR_10] = ((void*)0);
 }

 VAR_8 = VAR_5->genfs;
 while (VAR_8) {
  FUNC_2();
  FUNC_8(VAR_8->fstype);
  VAR_6 = VAR_8->head;
  while (VAR_6) {
   VAR_7 = VAR_6;
   VAR_6 = VAR_6->next;
   FUNC_9(VAR_7, VAR_0);
  }
  VAR_9 = VAR_8;
  VAR_8 = VAR_8->next;
  FUNC_8(VAR_9);
 }
 VAR_5->genfs = ((void*)0);

 FUNC_1(VAR_5);

 for (VAR_13 = VAR_5->role_tr; VAR_13; VAR_13 = VAR_13->next) {
  FUNC_2();
  FUNC_8(VAR_14);
  VAR_14 = VAR_13;
 }
 FUNC_8(VAR_14);

 for (VAR_11 = VAR_5->role_allow; VAR_11; VAR_11 = VAR_11->next) {
  FUNC_2();
  FUNC_8(VAR_12);
  VAR_12 = VAR_11;
 }
 FUNC_8(VAR_12);

 FUNC_7(VAR_5->range_tr, VAR_4, ((void*)0));
 FUNC_6(VAR_5->range_tr);

 if (VAR_5->type_attr_map_array) {
  for (VAR_10 = 0; VAR_10 < VAR_5->p_types.nprim; VAR_10++) {
   struct ebitmap *VAR_15;

   VAR_15 = FUNC_5(VAR_5->type_attr_map_array, VAR_10);
   if (!VAR_15)
    continue;
   FUNC_3(VAR_15);
  }
  FUNC_4(VAR_5->type_attr_map_array);
 }
 FUNC_3(&VAR_5->policycaps);
 FUNC_3(&VAR_5->permissive_map);

 return;
}
