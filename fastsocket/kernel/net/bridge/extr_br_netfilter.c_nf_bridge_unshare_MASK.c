
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct nf_bridge_info* nf_bridge; } ;
struct nf_bridge_info {int use; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct nf_bridge_info*,struct nf_bridge_info*,int) ;
 struct nf_bridge_info* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct nf_bridge_info*) ;

__attribute__((used)) static inline struct nf_bridge_info *FUNC_5(struct sk_buff *VAR_0)
{
 struct nf_bridge_info *VAR_1 = VAR_0->nf_bridge;

 if (FUNC_0(&VAR_1->use) > 1) {
  struct nf_bridge_info *VAR_2 = FUNC_3(VAR_0);

  if (VAR_2) {
   FUNC_2(VAR_2, VAR_1, sizeof(struct nf_bridge_info));
   FUNC_1(&VAR_2->use, 1);
   FUNC_4(VAR_1);
  }
  VAR_1 = VAR_2;
 }
 return VAR_1;
}
