
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_tunnel {int priority; struct xfrm_tunnel* next; } ;


 int VAR_0 ;
 struct xfrm_tunnel** FUNC_0 (unsigned short) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

int FUNC_3(struct xfrm_tunnel *VAR_2, unsigned short VAR_3)
{
 struct xfrm_tunnel **VAR_4;
 int VAR_5 = -VAR_0;
 int VAR_6 = VAR_2->priority;

 FUNC_1(&VAR_1);

 for (VAR_4 = FUNC_0(VAR_3); *VAR_4; VAR_4 = &(*VAR_4)->next) {
  if ((*VAR_4)->priority > VAR_6)
   break;
  if ((*VAR_4)->priority == VAR_6)
   goto err;
 }

 VAR_2->next = *VAR_4;
 *VAR_4 = VAR_2;

 VAR_5 = 0;

err:
 FUNC_2(&VAR_1);

 return VAR_5;
}
