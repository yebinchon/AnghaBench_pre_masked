
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct cond_node {struct cond_node* next; } ;
struct TYPE_11__ {int audit_context; } ;
struct TYPE_8__ {int nprim; } ;
struct TYPE_10__ {struct cond_node* cond_list; TYPE_2__** bool_val_to_struct; int * p_bool_val_to_name; TYPE_1__ p_bools; } ;
struct TYPE_9__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ,int ,int ,char*,int ,int,int,int ,int ) ;
 int FUNC_3 (int) ;
 TYPE_5__* VAR_3 ;
 int FUNC_4 (TYPE_3__*,struct cond_node*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(int VAR_7, int *VAR_8)
{
 int VAR_9, VAR_10 = 0;
 int VAR_11, VAR_12 = 0;
 struct cond_node *VAR_13;

 FUNC_8(&VAR_5);

 VAR_11 = VAR_6.p_bools.nprim;
 if (VAR_7 != VAR_11) {
  VAR_10 = -VAR_1;
  goto out;
 }

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  if (!!VAR_8[VAR_9] != VAR_6.bool_val_to_struct[VAR_9]->state) {
   FUNC_2(VAR_3->audit_context, VAR_2,
    VAR_0,
    "bool=%s val=%d old_val=%d auid=%u ses=%u",
    VAR_6.p_bool_val_to_name[VAR_9],
    !!VAR_8[VAR_9],
    VAR_6.bool_val_to_struct[VAR_9]->state,
    FUNC_0(VAR_3),
    FUNC_1(VAR_3));
  }
  if (VAR_8[VAR_9])
   VAR_6.bool_val_to_struct[VAR_9]->state = 1;
  else
   VAR_6.bool_val_to_struct[VAR_9]->state = 0;
 }

 for (VAR_13 = VAR_6.cond_list; VAR_13; VAR_13 = VAR_13->next) {
  VAR_10 = FUNC_4(&VAR_6, VAR_13);
  if (VAR_10)
   goto out;
 }

 VAR_12 = ++VAR_4;

out:
 FUNC_9(&VAR_5);
 if (!VAR_10) {
  FUNC_3(VAR_12);
  FUNC_7(VAR_12);
  FUNC_5(VAR_12);
  FUNC_6();
 }
 return VAR_10;
}
