
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_target_param {int dummy; } ;
struct sk_buff {int * nfct; int nfctinfo; } ;
struct TYPE_2__ {int ct_general; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static unsigned int
FUNC_1(struct sk_buff *VAR_3, const struct xt_target_param *VAR_4)
{

 if (VAR_3->nfct != ((void*)0))
  return VAR_1;





 VAR_3->nfct = &VAR_2.ct_general;
 VAR_3->nfctinfo = VAR_0;
 FUNC_0(VAR_3->nfct);

 return VAR_1;
}
