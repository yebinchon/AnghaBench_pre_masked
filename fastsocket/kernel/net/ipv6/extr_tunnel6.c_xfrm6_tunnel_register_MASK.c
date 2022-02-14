
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm6_tunnel {int priority; struct xfrm6_tunnel* next; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct xfrm6_tunnel* VAR_2 ;
 struct xfrm6_tunnel* VAR_3 ;
 int VAR_4 ;

int FUNC_2(struct xfrm6_tunnel *VAR_5, unsigned short VAR_6)
{
 struct xfrm6_tunnel **VAR_7;
 int VAR_8 = -VAR_1;
 int VAR_9 = VAR_5->priority;

 FUNC_0(&VAR_4);

 for (VAR_7 = (VAR_6 == VAR_0) ? &VAR_3 : &VAR_2;
      *VAR_7; VAR_7 = &(*VAR_7)->next) {
  if ((*VAR_7)->priority > VAR_9)
   break;
  if ((*VAR_7)->priority == VAR_9)
   goto err;
 }

 VAR_5->next = *VAR_7;
 *VAR_7 = VAR_5;

 VAR_8 = 0;

err:
 FUNC_1(&VAR_4);

 return VAR_8;
}
