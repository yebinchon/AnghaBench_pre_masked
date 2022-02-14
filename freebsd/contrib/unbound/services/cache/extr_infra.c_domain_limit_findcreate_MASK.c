
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* key; } ;
struct TYPE_4__ {size_t len; int labs; int dclass; struct domain_limit_data* name; TYPE_1__ node; } ;
struct domain_limit_data {int lim; int below; TYPE_2__ node; } ;
typedef struct domain_limit_data uint8_t ;
struct infra_cache {int domain_limits; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct domain_limit_data*) ;
 int FUNC_2 (struct domain_limit_data*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int *,struct domain_limit_data*,size_t,int,int ) ;
 int FUNC_5 (int *,TYPE_2__*,struct domain_limit_data*,size_t,int,int ) ;
 struct domain_limit_data* FUNC_6 (char*,size_t*) ;

__attribute__((used)) static struct domain_limit_data* FUNC_7(
 struct infra_cache* VAR_1, char* VAR_2)
{
 uint8_t* VAR_3;
 int VAR_4;
 size_t VAR_5;
 struct domain_limit_data* VAR_6;


 VAR_3 = FUNC_6(VAR_2, &VAR_5);
 if(!VAR_3) {
  FUNC_3("could not parse %s", VAR_2);
  return ((void*)0);
 }
 VAR_4 = FUNC_1(VAR_3);


 VAR_6 = (struct domain_limit_data*)FUNC_4(&VAR_1->domain_limits,
  VAR_3, VAR_5, VAR_4, VAR_0);
 if(VAR_6) {
  FUNC_2(VAR_3);
  return VAR_6;
 }


 VAR_6 = (struct domain_limit_data*)FUNC_0(1, sizeof(*VAR_6));
 if(!VAR_6) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }
 VAR_6->node.node.key = &VAR_6->node;
 VAR_6->node.name = VAR_3;
 VAR_6->node.len = VAR_5;
 VAR_6->node.labs = VAR_4;
 VAR_6->node.dclass = VAR_0;
 VAR_6->lim = -1;
 VAR_6->below = -1;
 if(!FUNC_5(&VAR_1->domain_limits, &VAR_6->node, VAR_3, VAR_5,
  VAR_4, VAR_0)) {
  FUNC_3("duplicate element in domainlimit tree");
  FUNC_2(VAR_3);
  FUNC_2(VAR_6);
  return ((void*)0);
 }
 return VAR_6;
}
