
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct policydb {int te_cond_avtab; } ;
struct cond_insertf_data {struct cond_av_list* head; int * tail; struct cond_av_list* other; struct policydb* p; } ;
struct cond_av_list {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int *,void*,struct policydb*,int ,struct cond_insertf_data*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,void*,int) ;

__attribute__((used)) static int FUNC_3(struct policydb *VAR_1, void *VAR_2, struct cond_av_list **VAR_3, struct cond_av_list *VAR_4)
{
 int VAR_5, VAR_6;
 __le32 VAR_7[1];
 u32 VAR_8;
 struct cond_insertf_data VAR_9;

 *VAR_3 = ((void*)0);

 VAR_8 = 0;
 VAR_6 = FUNC_2(VAR_7, VAR_2, sizeof(u32));
 if (VAR_6)
  return VAR_6;

 VAR_8 = FUNC_1(VAR_7[0]);
 if (VAR_8 == 0)
  return 0;

 VAR_9.p = VAR_1;
 VAR_9.other = VAR_4;
 VAR_9.head = ((void*)0);
 VAR_9.tail = ((void*)0);
 for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
  VAR_6 = FUNC_0(&VAR_1->te_cond_avtab, VAR_2, VAR_1, VAR_0,
         &VAR_9);
  if (VAR_6)
   return VAR_6;
 }

 *VAR_3 = VAR_9.head;
 return 0;
}
