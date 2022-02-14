
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcf_hashinfo {int lock; int hmask; struct tcf_common** htab; } ;
struct tcf_common {scalar_t__ tcfc_index; struct tcf_common* tcfc_next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (scalar_t__,int ) ;

struct tcf_common *FUNC_3(u32 VAR_0, struct tcf_hashinfo *VAR_1)
{
 struct tcf_common *VAR_2;

 FUNC_0(VAR_1->lock);
 for (VAR_2 = VAR_1->htab[FUNC_2(VAR_0, VAR_1->hmask)]; VAR_2;
      VAR_2 = VAR_2->tcfc_next) {
  if (VAR_2->tcfc_index == VAR_0)
   break;
 }
 FUNC_1(VAR_1->lock);

 return VAR_2;
}
