
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct respip_set {int ip_tree; int region; } ;


 int FUNC_0 (int *) ;
 struct respip_set* FUNC_1 (int,int) ;
 int FUNC_2 (struct respip_set*) ;
 int FUNC_3 () ;

struct respip_set*
FUNC_4(void)
{
 struct respip_set* VAR_0 = FUNC_1(1, sizeof(*VAR_0));
 if(!VAR_0)
  return ((void*)0);
 VAR_0->region = FUNC_3();
 if(!VAR_0->region) {
  FUNC_2(VAR_0);
  return ((void*)0);
 }
 FUNC_0(&VAR_0->ip_tree);
 return VAR_0;
}
