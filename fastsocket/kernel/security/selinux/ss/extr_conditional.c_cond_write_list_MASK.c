
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct policydb {int dummy; } ;
struct cond_node {struct cond_node* next; } ;
typedef int __le32 ;


 int FUNC_0 (struct policydb*,struct cond_node*,void*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int,int,void*) ;

int FUNC_3(struct policydb *VAR_0, struct cond_node *VAR_1, void *VAR_2)
{
 struct cond_node *VAR_3;
 u32 VAR_4;
 __le32 VAR_5[1];
 int VAR_6;

 VAR_4 = 0;
 for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
  VAR_4++;
 VAR_5[0] = FUNC_1(VAR_4);
 VAR_6 = FUNC_2(VAR_5, sizeof(u32), 1, VAR_2);
 if (VAR_6)
  return VAR_6;

 for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
  VAR_6 = FUNC_0(VAR_0, VAR_3, VAR_2);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
