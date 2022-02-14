
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_generic {int len; void** ptr; int rcu; } ;
struct net {struct net_generic* gen; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (void***,void***,int) ;
 int FUNC_3 (int *) ;
 struct net_generic* FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct net_generic*,struct net_generic*) ;

int FUNC_6(struct net *VAR_3, int VAR_4, void *VAR_5)
{
 struct net_generic *VAR_6, *VAR_7;

 FUNC_0(!FUNC_3(&VAR_2));
 FUNC_0(VAR_4 == 0);

 VAR_6 = VAR_7 = VAR_3->gen;
 if (VAR_7->len >= VAR_4)
  goto assign;

 VAR_6 = FUNC_4();
 if (VAR_6 == ((void*)0))
  return -VAR_0;
 FUNC_2(&VAR_6->ptr, &VAR_7->ptr, VAR_7->len * sizeof(void*));

 FUNC_5(VAR_3->gen, VAR_6);
 FUNC_1(&VAR_7->rcu, VAR_1);
assign:
 VAR_6->ptr[VAR_4 - 1] = VAR_5;
 return 0;
}
