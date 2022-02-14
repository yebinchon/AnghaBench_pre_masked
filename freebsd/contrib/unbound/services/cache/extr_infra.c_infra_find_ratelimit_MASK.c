
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct infra_cache {int domain_limits; } ;
struct TYPE_2__ {int labs; scalar_t__ parent; } ;
struct domain_limit_data {int lim; int below; TYPE_1__ node; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,size_t,int,int ) ;

int FUNC_2(struct infra_cache* VAR_2, uint8_t* VAR_3,
 size_t VAR_4)
{
 int VAR_5 = FUNC_0(VAR_3);
 struct domain_limit_data* VAR_6 = (struct domain_limit_data*)
  FUNC_1(&VAR_2->domain_limits, VAR_3, VAR_4, VAR_5,
  VAR_0);
 if(!VAR_6) return VAR_1;

 if(VAR_6->node.labs == VAR_5 && VAR_6->lim != -1)
  return VAR_6->lim;


 if(VAR_6->node.labs == VAR_5)
  VAR_6 = (struct domain_limit_data*)VAR_6->node.parent;
 while(VAR_6) {
  if(VAR_6->below != -1)
   return VAR_6->below;
  VAR_6 = (struct domain_limit_data*)VAR_6->node.parent;
 }
 return VAR_1;
}
