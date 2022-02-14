
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taskqgroup {int tqg_lock; } ;


 int FUNC_0 (struct taskqgroup*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct taskqgroup *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_0->tqg_lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->tqg_lock);

 return (VAR_3);
}
