
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct policydb {int dummy; } ;
struct policy_data {struct policydb* p; void* fp; } ;
struct constraint_node {struct constraint_node* next; } ;
struct TYPE_3__ {size_t nprim; TYPE_2__* table; } ;
struct class_datum {char* comkey; size_t value; struct constraint_node* validatetrans; struct constraint_node* constraints; TYPE_1__ permissions; } ;
typedef char __le32 ;
struct TYPE_4__ {size_t nel; } ;


 char FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_2__*,int ,void*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,int,void*) ;
 size_t FUNC_3 (char*) ;
 int FUNC_4 (struct policydb*,struct constraint_node*,void*) ;

__attribute__((used)) static int FUNC_5(void *VAR_1, void *VAR_2, void *VAR_3)
{
 char *VAR_4 = VAR_1;
 struct class_datum *VAR_5 = VAR_2;
 struct policy_data *VAR_6 = VAR_3;
 void *VAR_7 = VAR_6->fp;
 struct policydb *VAR_8 = VAR_6->p;
 struct constraint_node *VAR_9;
 __le32 VAR_10[6];
 u32 VAR_11;
 size_t VAR_12, VAR_13;
 int VAR_14;

 VAR_12 = FUNC_3(VAR_4);
 if (VAR_5->comkey)
  VAR_13 = FUNC_3(VAR_5->comkey);
 else
  VAR_13 = 0;

 VAR_11 = 0;
 for (VAR_9 = VAR_5->constraints; VAR_9; VAR_9 = VAR_9->next)
  VAR_11++;

 VAR_10[0] = FUNC_0(VAR_12);
 VAR_10[1] = FUNC_0(VAR_13);
 VAR_10[2] = FUNC_0(VAR_5->value);
 VAR_10[3] = FUNC_0(VAR_5->permissions.nprim);
 if (VAR_5->permissions.table)
  VAR_10[4] = FUNC_0(VAR_5->permissions.table->nel);
 else
  VAR_10[4] = 0;
 VAR_10[5] = FUNC_0(VAR_11);
 VAR_14 = FUNC_2(VAR_10, sizeof(u32), 6, VAR_7);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_2(VAR_4, 1, VAR_12, VAR_7);
 if (VAR_14)
  return VAR_14;

 if (VAR_5->comkey) {
  VAR_14 = FUNC_2(VAR_5->comkey, 1, VAR_13, VAR_7);
  if (VAR_14)
   return VAR_14;
 }

 VAR_14 = FUNC_1(VAR_5->permissions.table, VAR_0, VAR_7);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_4(VAR_8, VAR_5->constraints, VAR_7);
 if (VAR_14)
  return VAR_14;


 VAR_11 = 0;
 for (VAR_9 = VAR_5->validatetrans; VAR_9; VAR_9 = VAR_9->next)
  VAR_11++;

 VAR_10[0] = FUNC_0(VAR_11);
 VAR_14 = FUNC_2(VAR_10, sizeof(u32), 1, VAR_7);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_4(VAR_8, VAR_5->validatetrans, VAR_7);
 if (VAR_14)
  return VAR_14;

 return 0;
}
