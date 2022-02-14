
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct radix_node_head {int rh; int (* rnh_deladdr ) (int ,int ,int *) ;} ;
struct radix_node {int rn_mask; int rn_key; } ;
struct netcred {struct ucred* netc_anon; } ;


 int VAR_0 ;
 int FUNC_0 (struct ucred*) ;
 int FUNC_1 (struct radix_node*,int ) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct radix_node *VAR_1, void *VAR_2)
{
 struct radix_node_head *VAR_3 = (struct radix_node_head *) VAR_2;
 struct ucred *VAR_4;

 (*VAR_3->rnh_deladdr) (VAR_1->rn_key, VAR_1->rn_mask, &VAR_3->rh);
 VAR_4 = ((struct netcred *)VAR_1)->netc_anon;
 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_4);
 FUNC_1(VAR_1, VAR_0);
 return (0);
}
