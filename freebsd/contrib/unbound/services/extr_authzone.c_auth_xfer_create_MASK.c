
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_zones {int xtree; } ;
struct auth_zone {int dummy; } ;
struct auth_xfer {int node; } ;


 struct auth_xfer* FUNC_0 (struct auth_zone*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *) ;

struct auth_xfer*
FUNC_3(struct auth_zones* VAR_0, struct auth_zone* VAR_1)
{
 struct auth_xfer* VAR_2;


 VAR_2 = FUNC_0(VAR_1);
 if(!VAR_2) {
  FUNC_1("malloc failure");
  return ((void*)0);
 }

 (void)FUNC_2(&VAR_0->xtree, &VAR_2->node);
 return VAR_2;
}
