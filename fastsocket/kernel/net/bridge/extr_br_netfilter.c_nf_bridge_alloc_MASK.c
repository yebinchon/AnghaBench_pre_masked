
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct nf_bridge_info* nf_bridge; } ;
struct nf_bridge_info {int use; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 struct nf_bridge_info* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct nf_bridge_info*) ;

__attribute__((used)) static inline struct nf_bridge_info *FUNC_3(struct sk_buff *VAR_1)
{
 VAR_1->nf_bridge = FUNC_1(sizeof(struct nf_bridge_info), VAR_0);
 if (FUNC_2(VAR_1->nf_bridge))
  FUNC_0(&(VAR_1->nf_bridge->use), 1);

 return VAR_1->nf_bridge;
}
